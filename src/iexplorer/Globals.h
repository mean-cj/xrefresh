#pragma once

class CXRefreshScriptSite;
class CXRefreshScriptEngine;
class CScript;
class CLogger;
class CConsoleWindow;
class CXRefreshBHO;
class CXRefreshHelperbar;
class CBrowserManager;

typedef unsigned int							TFrameId;
const TFrameId									NULL_FRAME = 0;
typedef unsigned int							TBrowserId;
const TBrowserId								NULL_BROWSER = 0;
typedef LONG									THandle;
const THandle									NULL_HANDLE = 0;
typedef THandle									TScriptId;
const TScriptId									NULL_SCRIPT = 0;
typedef THandle									TScriptInstanceId;
const TScriptInstanceId							NULL_SCRIPT_INSTANCE = 0;
typedef unsigned long							TWindowId;
const TWindowId									NULL_WINDOW = 0;

#define WM_UPDATEDOM							(WM_APP + 100) // custom message sent to dialog to update DOM tree and its title

// messages
const int IDC_TOOLBUTTON						= 1;
const int IDC_DISABLEBUTTON						= 2;

#define PRODUCT_ID_TEXT							_T("44386A7B-7093-4FDC-8B52-5F7E8B968960")

// system script IDs
#define REGISTRY_ROOT_KEY						_T("Software\\XRefresh\\")
#define REGISTRY_SETTINGS_KEY					_T("IEAddon")
#define REGISTRY_SETTINGS_HOST					_T("Host")
#define REGISTRY_SETTINGS_PORT					_T("Port")
#define REGISTRY_SETTINGS_RANGE					_T("Range")
#define REGISTRY_OPTIONS_KEY					_T("Options")

#define DOMEXPLORERTREE_CLASS_NAME				_T("CXRefreshDOMExplorerTree")
#define DOMEXPLORERTREE_WINDOW_NAME				_T("XRefreshDOMExplorerTreeWindow")

#define DOMEXPLORER_CLASS_NAME					_T("CXRefreshDOMExplorer")
#define DOMEXPLORER_WINDOW_NAME					_T("XRefreshDOMExplorerWindow")

#define CONSOLE_WINDOW_NAME						_T("ConsoleWindow")

#define MAIN_TOOLBAR_CLASS_NAME					_T("CXRefreshToolbar")
#define MAIN_TOOLBAR_WINDOW_NAME				_T("XRefreshToolbarWindow")

#define HELPERBAR_WORKSPACE_CLASS_NAME			_T("CXRefreshHelperbarWorkspace")
#define HELPERBAR_WORKSPACE_WINDOW_NAME			_T("XRefreshHelperbarWorkspaceWindow")

#define HELPERBAR_MAIN_CLASS_NAME				_T("CXRefreshHelperbarMain")
#define HELPERBAR_MAIN_WINDOW_NAME				_T("XRefreshHelperbarMainWindow")

#define HELPERBAR_CLASS_NAME					_T("CXRefreshHelperbar")
#define HELPERBAR_WINDOW_NAME					_T("XRefreshHelperbarWindow")

#define DOMTREE_WINDOW_NAME						_T("XRefreshDOMTreeWindow")
#define DOMTREE_CLASS_NAME						_T("CXRefreshDOMTree")

#define CONSOLE_LIST_WINDOW_NAME				_T("XRefreshConsoleListWindow")
#define CONSOLE_LIST_CLASS_NAME					_T("CXRefreshConsoleList")

#define CONSOLE_WINDOW_CLASS_NAME				_T("CXRefreshConsoleWindow")

#define MESSAGE_WINDOW_WINDOW_NAME				_T("XRefreshMessageWindow")
#define MESSAGE_WINDOW_CLASS_NAME				_T("CXRefreshMessageWindow")

#define BROWSER_MESSAGE_WINDOW_NAME				_T("XRefreshBrowserMessageWindow")
#define BROWSER_MESSAGE_WINDOW_CLASS_NAME		_T("CXRefreshBrowserMessageWindow")

#define WAIT_GRANULARITY						20 // in ms

// window.XRefreshShell
#define JAVASCRIPT_FRAMEID_VARIABLE				_T("XRefreshFrameId")
