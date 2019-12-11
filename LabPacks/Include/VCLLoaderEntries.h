//---------------------------------------------------------------------------

#ifndef VCLLoaderEntriesH
#define VCLLoaderEntriesH
//---------------------------------------------------------------------------
#ifdef __VCLLOADER_DLL
  #define  __VCL__MODE__ __declspec(dllexport)
#else
  #define  __VCL__MODE__ __declspec(dllimport)
#endif
//---------------------------------------------------------------------------
#include <VCLoaderEntryTypes.h>

#ifndef _WINDOWS_
  #include <windows.h>
#endif
//---------------------------------------------------------------------------
#ifdef __cplusplus
extern "C"
{
#endif
//---------------------------------------------------------------------------
FUNC_ENTRY      __VCL__MODE__    __stdcall VCL_GetFunction( VCLHANDLE LibraryHandle, const char * FunctionName );
void            __VCL__MODE__  * __stdcall VCL_LoadLibrary( const char * LibraryFileName );
void            __VCL__MODE__    __stdcall VCL_UnloadLibrary( VCLHANDLE handle );

int             __VCL__MODE__    __stdcall VCL_InitControls( HWND ApplicationHandle );
HWND            __VCL__MODE__    __stdcall VCL_GetApplicationHandle();
void            __VCL__MODE__    __stdcall VCL_SetApplicationHandle( HWND ApplicationHandle );
void            __VCL__MODE__    __stdcall VCL_Shutdown();
int             __VCL__MODE__    __stdcall VCL_Loaded();
int             __VCL__MODE__    __stdcall VCL_ComponentLoaded( VCLHANDLE Object, BOOL DesignTime );
int             __VCL__MODE__    __stdcall VCL_BeginLoading( VCLHANDLE Object );
int             __VCL__MODE__    __stdcall VCL_EndLoading( VCLHANDLE Object, BOOL DesignTime );

VCLHANDLE       __VCL__MODE__    __stdcall VCL_NewObject( const char * ComponentType );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_NewComponent( const char * ComponentType, VCLHANDLE OwnerHandle, BOOL DesignTime, BOOL Loading );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_NewControl( HWND ParentWindow, const char * ControlType, VCLHANDLE OwnerHandle, BOOL DesignTime, BOOL Loading, BOOL IsHostedControl );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_NewControlSize( HWND ParentWindow, const char * type, int Left, int Top, int Width, int Height, VCLHANDLE OwnerHandle, BOOL DesignTime, BOOL Loading, BOOL IsHostedControl );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_NewVclControl( VCLHANDLE Parent, const char * ControlType, VCLHANDLE OwnerHandle, BOOL DesignTime, BOOL Loading );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_NewVclControlSize( VCLHANDLE Parent, const char * type, int Left, int Top, int Width, int Height, VCLHANDLE OwnerHandle, BOOL DesignTime, BOOL Loading );

void            __VCL__MODE__    __stdcall VCL_AssignToObject( VCLHANDLE FromObject, VCLHANDLE ToObject );

int             __VCL__MODE__    __stdcall VCL_SetComponentList( VCLHANDLE Object, VCLHANDLE ComponentList );

int             __VCL__MODE__    __stdcall VCL_GetBinaryData( VCLHANDLE Object, void **Buffer, int *Size );
int             __VCL__MODE__    __stdcall VCL_SetBinaryData( VCLHANDLE Object, void *Buffer, int Size );
void            __VCL__MODE__    __stdcall VCL_ReleaseBinaryData( void *Buffer );

VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetControlHandle( VCLHANDLE AHandle );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetRootOwnerHandle( VCLHANDLE Component );

int             __VCL__MODE__    __stdcall VCL_SetComponentName( VCLHANDLE AHandle, const char * Name );

int             __VCL__MODE__    __stdcall VCL_Delete( VCLHANDLE Object );

int             __VCL__MODE__    __stdcall VCL_ErrorNotification( int Enable );
int             __VCL__MODE__    __stdcall VCL_SetExceptionCallback( FUNC_EXCEPTION Function, void *CustomData );

int             __VCL__MODE__    __stdcall VCL_SetAnsiStringProperty( VCLHANDLE Object, const char * PropertyName, const char * PropertyValue );
int             __VCL__MODE__    __stdcall VCL_SetUnicodeStringProperty( VCLHANDLE Object, const char * PropertyName, const wchar_t * PropertyValue );
int             __VCL__MODE__    __stdcall VCL_SetIntegerProperty( VCLHANDLE Object, const char * PropertyName, int PropertyValue );
int             __VCL__MODE__    __stdcall VCL_SetCardinalProperty( VCLHANDLE Object, const char * PropertyName, unsigned int PropertyValue );
int             __VCL__MODE__    __stdcall VCL_SetInteger64Property( VCLHANDLE Object, const char * PropertyName, __int64 PropertyValue );
int             __VCL__MODE__    __stdcall VCL_SetFloatProperty( VCLHANDLE Object, const char * PropertyName, float PropertyValue );
int             __VCL__MODE__    __stdcall VCL_SetDoubleProperty( VCLHANDLE Object, const char * PropertyName, double PropertyValue );
int             __VCL__MODE__    __stdcall VCL_SetObjectProperty( VCLHANDLE Object, const char * PropertyName, VCLHANDLE PropertyValue );
int             __VCL__MODE__    __stdcall VCL_SetMethodProperty( VCLHANDLE Object, const char * PropertyName,  void *Function, void *Data );
int             __VCL__MODE__    __stdcall VCL_SetMethodPropertyAndType( VCLHANDLE Object, const char * PropertyName,  void *Function, void *Data, int FunctionIndex );

int             __VCL__MODE__    __stdcall VCL_GetMethodProperty( VCLHANDLE Object, const char * PropertyName,  void **Function, void **Data );
char            __VCL__MODE__  * __stdcall VCL_GetAnsiStringProperty( VCLHANDLE Object, const char * PropertyName, VCLHANDLE *StringHandler );
wchar_t         __VCL__MODE__  * __stdcall VCL_GetUnicodeStringProperty( VCLHANDLE Object, const char * PropertyName, VCLHANDLE *StringHandler );
int             __VCL__MODE__    __stdcall VCL_GetIntegerProperty( VCLHANDLE Object, const char * PropertyName, int *ReturnValue );
int             __VCL__MODE__    __stdcall VCL_GetCardinalProperty( VCLHANDLE Object, const char * PropertyName, unsigned int *ReturnValue );
int             __VCL__MODE__    __stdcall VCL_GetInteger64Property( VCLHANDLE Object, const char * PropertyName, __int64 *ReturnValue );
int             __VCL__MODE__    __stdcall VCL_GetFloatProperty( VCLHANDLE Object, const char * PropertyName, float *ReturnValue );
int             __VCL__MODE__    __stdcall VCL_GetDoubleProperty( VCLHANDLE Object, const char * PropertyName, double *ReturnValue );
int             __VCL__MODE__    __stdcall VCL_GetObjectProperty( VCLHANDLE Object, const char * PropertyName,  VCLHANDLE *ReturnValue );

VCLHANDLE       __VCL__MODE__    __stdcall VCL_CreateAnsiString( const char *str );
void            __VCL__MODE__    __stdcall VCL_DestroyAnsiString( VCLHANDLE AString );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_CallAnsiStringGetMember( VCLHANDLE Instance, VCLHANDLE Function );
char            __VCL__MODE__  * __stdcall VCL_GetAnsiCString( VCLHANDLE AString );

VCLHANDLE       __VCL__MODE__    __stdcall VCL_CreateStringList();
int             __VCL__MODE__    __stdcall VCL_GetStringsCount( VCLHANDLE AStrings );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetStringsItem( VCLHANDLE AStrings, int AIndex );
void            __VCL__MODE__    __stdcall VCL_SetStringsItem( VCLHANDLE AStrings, int AIndex, wchar_t *AString );

char            __VCL__MODE__  * __stdcall VCL_ExecuteAnsiStringFunc( VCLHANDLE Object, VCLHANDLE Function, char *Format, ... );
void            __VCL__MODE__    __stdcall VCL_DestroyAnsiCString( char *str );

VCLHANDLE       __VCL__MODE__    __stdcall VCL_CreateUnicodeString( const wchar_t *str );
void            __VCL__MODE__    __stdcall VCL_DestroyUnicodeString( VCLHANDLE AString );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_CallUnicodeStringGetMember( VCLHANDLE Instance, VCLHANDLE Function );
wchar_t         __VCL__MODE__  * __stdcall VCL_GetUnicodeCString( VCLHANDLE AString );

wchar_t         __VCL__MODE__  * __stdcall VCL_ExecuteUnicodeStringFunc( VCLHANDLE Object, VCLHANDLE Function, wchar_t *Format, ... );
void            __VCL__MODE__    __stdcall VCL_DestroyUnicodeCString( wchar_t *str );

int             __VCL__MODE__    __stdcall VCL_ConnectPins( VCLHANDLE Object1, const char * Pin1Name, VCLHANDLE Object2, const char * Pin2Name );
int             __VCL__MODE__    __stdcall VCL_ConnectAfterPins( VCLHANDLE Object1, const char * Pin1Name, VCLHANDLE Object2, const char * Pin2Name, VCLHANDLE AfterObject, const char * AfterPinName );
int             __VCL__MODE__    __stdcall VCL_ConnectPinsByState( VCLHANDLE Object1, const char * Pin1Name, VCLHANDLE Object2, const char * Pin2Name );
int             __VCL__MODE__    __stdcall VCL_ConnectPinsByStateAfter( VCLHANDLE Object1, const char * Pin1Name, VCLHANDLE Object2, const char * Pin2Name, VCLHANDLE AfterObject, const char * AfterPinName );
int             __VCL__MODE__    __stdcall VCL_DisconnectPin( VCLHANDLE Object, const char * PinName );
int             __VCL__MODE__    __stdcall VCL_CanConnectToPin( VCLHANDLE Object1, const char * Pin1Name, VCLHANDLE Object2, const char * Pin2Name );
int             __VCL__MODE__    __stdcall VCL_CanConnectAfterPin( VCLHANDLE Object1, const char * Pin1Name, VCLHANDLE Object2, const char * Pin2Name, VCLHANDLE AfterObject, const char * AfterPinName );
int             __VCL__MODE__    __stdcall VCL_CanConnectToState( VCLHANDLE Object1, const char * Pin1Name, VCLHANDLE Dispatcher );
int             __VCL__MODE__    __stdcall VCL_ConnectToState( VCLHANDLE Object1, const char * Pin1Name, VCLHANDLE Dispatcher );
int             __VCL__MODE__    __stdcall VCL_ConnectToStateAfterPin( VCLHANDLE Object1, const char * Pin1Name, VCLHANDLE Dispatcher, VCLHANDLE AfterObject, const char * AfterPinName );
int             __VCL__MODE__    __stdcall VCL_IsConnectedToPin( VCLHANDLE Object1, const char * Pin1Name, VCLHANDLE Object2, const char * Pin2Name );
int             __VCL__MODE__    __stdcall VCL_IsConnectedToPinByState( VCLHANDLE Object1, const char * Pin1Name, VCLHANDLE Object2, const char * Pin2Name );
int             __VCL__MODE__    __stdcall VCL_IsConnectedToState( VCLHANDLE Object1, const char * Pin1Name, VCLHANDLE Dispatcher );
int             __VCL__MODE__    __stdcall VCL_IsConnectedPin( VCLHANDLE Object, const char * PinName );
int             __VCL__MODE__    __stdcall VCL_IsStateConnectedPin( VCLHANDLE Object, const char * PinName );
int             __VCL__MODE__    __stdcall VCL_GetConnectedPinCount( VCLHANDLE Object, const char * PinName );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetConnectedPin( VCLHANDLE Object, const char * PinName, int PinIndex );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetConnectedAfterPin( VCLHANDLE Object, const char * PinName, int PinIndex );
int             __VCL__MODE__    __stdcall VCL_GetConnectedDispatcherCount( VCLHANDLE Object, const char * PinName );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetConnectedDispatcher( VCLHANDLE Object, const char * PinName, int DispatcherIndex );

int             __VCL__MODE__    __stdcall VCL_GetDispatcherPinCount( VCLHANDLE Dispatcher );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetDispatcherPin( VCLHANDLE Dispatcher, int PinIndex );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetDispatcherAfterPin( VCLHANDLE Dispatcher, int PinIndex );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetDispatcherName( VCLHANDLE Dispatcher );
int             __VCL__MODE__    __stdcall VCL_SetDispatcherName( VCLHANDLE Dispatcher, char * Name );

char            __VCL__MODE__  * __stdcall VCL_GetConnectionTypeString( VCLHANDLE Object, const char * PinName, int PinIndex, VCLHANDLE *StringHandler );
char            __VCL__MODE__  * __stdcall VCL_GetPinDisplayName( VCLHANDLE Object, const char * PinName, VCLHANDLE *StringHandler );
PIN_TYPE        __VCL__MODE__    __stdcall VCL_GetPinType( VCLHANDLE Object, const char * PinName ); 
PIN_TYPE        __VCL__MODE__    __stdcall VCL_GetPinListPinType( VCLHANDLE Object, const char * PinName, int PinIndex ); 

int             __VCL__MODE__    __stdcall VCL_PulsePin( VCLHANDLE Object, const char * PinName ); // Obsolete!

int             __VCL__MODE__    __stdcall VCL_GetDispatcherCount();
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetDispatcher( int DispatcherIndex );

int             __VCL__MODE__    __stdcall VCL_AddDispatcherNotifier( FUNC_DISP_NOTIFY NotifyFunction, void *CustomData ); // returns NotifierID
void            __VCL__MODE__    __stdcall VCL_RemoveDispatcherNotifier( int NotifierID );

int             __VCL__MODE__    __stdcall VCL_AddPinNotifier( FUNC_PIN_NOTIFY NotifyFunction, void *CustomData ); // returns NotifierID
void            __VCL__MODE__    __stdcall VCL_RemovePinNotifier( int NotifierID );

int             __VCL__MODE__    __stdcall VCL_AddPinListNotifier( FUNC_PINLIST_NOTIFY NotifyFunction, void *CustomData ); // returns NotifierID
void            __VCL__MODE__    __stdcall VCL_RemovePinListNotifier( int NotifierID );

int             __VCL__MODE__    __stdcall VCL_AddCollectionNotifier( VCLHANDLE CollectionObject, FUNC_COLLECTION_NOTIFY NotifyFunction, void *CustomData ); // returns NotifierID
void            __VCL__MODE__    __stdcall VCL_RemoveCollectionNotifier( int NotifierID );

int             __VCL__MODE__    __stdcall VCL_AddComponentRegisterNotifier( FUNC_REGISTER_COMPONENT_NOTIFY NotifyFunction, void *CustomData ); // returns NotifierID
void            __VCL__MODE__    __stdcall VCL_RemoveComponentRegisterNotifier( int NotifierID );

// Component Editor
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetComponentEditor( VCLHANDLE Component );
int             __VCL__MODE__    __stdcall VCL_ComponetEditorGetVerbCount( VCLHANDLE Editor );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_ComponetEditorGetVerb( VCLHANDLE Editor, int Index );
void            __VCL__MODE__    __stdcall VCL_ComponetEditorExecuteVerb( VCLHANDLE Editor, int Index );
int             __VCL__MODE__    __stdcall VCL_ComponetEditorEdit( VCLHANDLE Editor );

// Property Editor
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetPropertyEditor( VCLHANDLE Owner, const char * PropertyName );
int             __VCL__MODE__    __stdcall VCL_GetPropertyEditorAttributes( VCLHANDLE Editor );
int             __VCL__MODE__    __stdcall VCL_GetPropertyEditorValuesCount( VCLHANDLE Editor );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetPropertyEditorValueItem( VCLHANDLE Editor, int Index );
int             __VCL__MODE__    __stdcall VCL_PropertyEditorEdit( VCLHANDLE Editor );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetPropertyEditorValueHandle( VCLHANDLE Editor );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetPropertyEditorValueString( VCLHANDLE Editor );
void            __VCL__MODE__    __stdcall VCL_SetPropertyEditorValueString( VCLHANDLE Editor, char *Value );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetPropertyEditorNameString( VCLHANDLE Editor );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetPropertyEditorTypeString( VCLHANDLE Editor );
int             __VCL__MODE__    __stdcall VCL_GetPropertyEditorPaintValueSupported( VCLHANDLE Editor );
void            __VCL__MODE__    __stdcall VCL_PropertyEditorPaintValue( VCLHANDLE Editor, VCLHANDLE aHDC, int aLeft, int aTop, int aWidth, int aHeight );
int             __VCL__MODE__    __stdcall VCL_GetPropertyEditorSubPropertiesCount( VCLHANDLE Editor );
VCLHANDLE       __VCL__MODE__    __stdcall VCL_GetPropertyEditorSubProperty( VCLHANDLE Editor, int Index );

void            __VCL__MODE__    __stdcall VCL_SetDesignerNotifier( FUNC_DESIGN_NOTIFY Function, void *CustomData );

void            __VCL__MODE__    __stdcall VCL_SetCustomCursor( int AIndex, HCURSOR ACursorHandle );

int             __VCL__MODE__    __stdcall VCL_AddComponentDeleteNotifier( FUNC_DELETE_COMPONENT_NOTIFY NotifyFunction, VCLHANDLE Component, void *CustomData ); // returns NotifierID
void            __VCL__MODE__    __stdcall VCL_RemoveComponentDeleteNotifier( int NotifierID );

//---------------------------------------------------------------------------
#ifdef __cplusplus
}
#endif
//---------------------------------------------------------------------------
#endif
