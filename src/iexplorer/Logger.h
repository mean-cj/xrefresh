#pragma once

#define ICON_CONNECTED								12
#define ICON_DISCONNECTED							3
#define ICON_REFRESH								8
#define ICON_CONNECTED_BTN							2
#define ICON_DISCONNECTED_BTN						4
#define ICON_ERROR									5
#define ICON_WARNING								9
#define ICON_INFO									7
#define ICON_BULB									6

class CLogMessage {
public:
	CLogMessage() {}
	CLogMessage(time_t time, CString message, int icon):
		m_Time(time),
		m_Message(message),
		m_Icon(icon)
	{}

	time_t											m_Time;
	CString											m_Message;
	int												m_Icon;
};

//////////////////////////////////////////////////////////////////////////
class CLoggerConsole;

class CLogger {
public:
	CLogger():m_Console(NULL) {}
	bool											Log(CString message, int icon);

	CListArray<CLogMessage>							m_Messages;
	CLoggerConsole*									m_Console;
};

class CLoggerConsole : public CListImpl<CLoggerConsole> {
public:
	DECLARE_WND_CLASS(CONSOLE_LIST_CLASS_NAME)

	enum UserColumns 
	{
		E_TIME, 
		E_MESSAGE, 
		E_LAST
	};

	class CompareItem {
	public:
		CompareItem(UserColumns colColumn) : m_Columns(colColumn) {}
		inline bool operator() (const CLogMessage& logMessage1, const CLogMessage& logMessage2)
		{
			switch (m_Columns) {
				case E_TIME: return (logMessage1.m_Time < logMessage2.m_Time);
				case E_MESSAGE: return (logMessage1.m_Message.Compare(logMessage2.m_Message) < 0);
			}
			return false;
		}

	protected:
		UserColumns m_Columns;
	};

	CLoggerConsole();
	virtual ~CLoggerConsole();

	BOOL											Initialise();
	int												GetItemCount(); // required by CListImpl
	BOOL											GetLogMessage(int nItem, CLogMessage& logMessage);
	CString											GetItemText(int nItem, int nSubItem); // required by CListImpl
	int												GetItemImage(int nItem, int nSubItem); // overrides CListImpl::GetItemImage
	void											ReverseItems(); // overrides CListImpl::ReverseItems
	void											SortItems(int nColumn, BOOL bAscending); // overrides CListImpl::SortItems
	void											MessageAdded();
	bool											CacheLogger();

	TBrowserId										m_BrowserId;
	CLogger*										m_Logger; // cached
};

//////////////////////////////////////////////////////////////////////////
