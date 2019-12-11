//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CILMultiLedCode_H_
#define CILMultiLedCode_H_

#pragma optimize( "", off )
//------------------------------------------------------------------------------
inline CTILLedState::CTILLedState( CLPBaseComponent *a_control, const CLPString a_PropertyName ) :
  inherited( a_control, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Name( GetInstance(), _T( "Name" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Value( GetInstance(), _T( "Value" ) )
{
}
//------------------------------------------------------------------------------
inline CTILLedState::CTILLedState( CLPClassProperty *a_property, const CLPString a_PropertyName ) :
  inherited( a_property, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Name( GetInstance(), _T( "Name" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Value( GetInstance(), _T( "Value" ) )
{
}
//------------------------------------------------------------------------------
inline CTILLedState::CTILLedState( CLPClassProperty *a_property, CTILLedState ( CLPBaseClass::*a_getter )() ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_property),
  Name( GetInstance(), _T( "Name" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Value( GetInstance(), _T( "Value" ) )
{
}
//------------------------------------------------------------------------------
inline CTILLedState::CTILLedState( CLPClassProperty *a_property, CTILLedState ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILLedState ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  Name( GetInstance(), _T( "Name" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Value( GetInstance(), _T( "Value" ) )
{
}
//------------------------------------------------------------------------------
inline CTILLedState::CTILLedState( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILLedState ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(NULL),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  Name( GetInstance(), _T( "Name" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Value( GetInstance(), _T( "Value" ) )
{
}
//------------------------------------------------------------------------------
inline CTILLedState::CTILLedState( CLPBaseComponent *a_control, CTILLedState ( CLPBaseClass::*a_getter )() ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_control),
  Name( GetInstance(), _T( "Name" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Value( GetInstance(), _T( "Value" ) )
{
}
//------------------------------------------------------------------------------
inline CTILLedState::CTILLedState( CLPBaseComponent *a_control, CTILLedState ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILLedState ) ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_control),
  Name( GetInstance(), _T( "Name" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Value( GetInstance(), _T( "Value" ) )
{
}
//------------------------------------------------------------------------------
inline CTILLedState::CTILLedState( VCLHANDLE handle, ELPHandleMode owns_handle ) :
  inherited( handle, owns_handle ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Name( GetInstance(), _T( "Name" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Value( GetInstance(), _T( "Value" ) )
{
}
//------------------------------------------------------------------------------
inline CTILLedState::CTILLedState( const CTILLedState &other ) :
  inherited( other ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Name( GetInstance(), _T( "Name" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Value( GetInstance(), _T( "Value" ) )
{
}
//------------------------------------------------------------------------------
inline CTILLedState & CTILLedState::operator = ( const CTILLedState & other )
{
  if( m_Property_Setter )
	  (m_Owner_Property->*m_Property_Setter)( other );

  else
	  inherited::operator = ( other );

  return *this;
}
//------------------------------------------------------------------------------
inline VCLHANDLE CTILLedState::Get_VCL_Handle() const
{
  if( m_Property_Getter )
	  {
		if( ! m_Object )
		  m_Object = new CVCLObject( (m_Owner_Property->*m_Property_Getter)().Get_VCL_Handle() );

	  }

  return inherited::Get_VCL_Handle();
}
//------------------------------------------------------------------------------
inline CTILLedStates::CTILLedStates( CLPBaseComponent *a_control, const CLPString a_PropertyName ) :
  inherited( a_control, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL )
{
}
//------------------------------------------------------------------------------
inline CTILLedStates::CTILLedStates( CLPClassProperty *a_property, const CLPString a_PropertyName ) :
  inherited( a_property, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL )
{
}
//------------------------------------------------------------------------------
inline CTILLedStates::CTILLedStates( CLPClassProperty *a_property, CTILLedStates ( CLPBaseClass::*a_getter )() ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_property)
{
}
//------------------------------------------------------------------------------
inline CTILLedStates::CTILLedStates( CLPClassProperty *a_property, CTILLedStates ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILLedStates ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property)
{
}
//------------------------------------------------------------------------------
inline CTILLedStates::CTILLedStates( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILLedStates ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(NULL),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property)
{
}
//------------------------------------------------------------------------------
inline CTILLedStates::CTILLedStates( CLPBaseComponent *a_control, CTILLedStates ( CLPBaseClass::*a_getter )() ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_control)
{
}
//------------------------------------------------------------------------------
inline CTILLedStates::CTILLedStates( CLPBaseComponent *a_control, CTILLedStates ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILLedStates ) ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_control)
{
}
//------------------------------------------------------------------------------
inline CTILLedStates::CTILLedStates( VCLHANDLE handle, ELPHandleMode owns_handle ) :
  inherited( handle, owns_handle ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL )
{
}
//------------------------------------------------------------------------------
inline CTILLedStates::CTILLedStates( const CTILLedStates &other ) :
  inherited( other ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL )
{
}
//------------------------------------------------------------------------------
inline CTILLedStates & CTILLedStates::operator = ( const CTILLedStates & other )
{
  if( m_Property_Setter )
	  (m_Owner_Property->*m_Property_Setter)( other );

  else
	  inherited::operator = ( other );

  return *this;
}
//------------------------------------------------------------------------------
inline VCLHANDLE CTILLedStates::Get_VCL_Handle() const
{
  if( m_Property_Getter )
	  {
		if( ! m_Object )
		  m_Object = new CVCLObject( (m_Owner_Property->*m_Property_Getter)().Get_VCL_Handle() );

	  }

  return inherited::Get_VCL_Handle();
}
//------------------------------------------------------------------------------
inline CTILExternalMultiLed::CTILExternalMultiLed() :
  States( *new CTILLedStates( GetInstance(), _T( "States" ))),
  Elements( *new CTLPComponentElements( GetInstance(), _T( "Elements" ))),
  InputPins( GetInstance(), _T( "InputPins" ) )
{
}
//------------------------------------------------------------------------------
inline void CTILExternalMultiLed::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
}
//------------------------------------------------------------------------------
inline void CTILExternalMultiLed::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
}
//------------------------------------------------------------------------------
inline CTILExternalMultiLed::~CTILExternalMultiLed()
{
  delete &States;
  delete &Elements;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILExternalMultiLed::GetFunction( const char *function_name )
{
  TLPFunctionEntry Result = VCL_GetFunction( LibraryHandle, function_name );
  if( Result )
    return Result;

  return inherited::GetFunction( function_name );
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
inline CTILMultiLed::CTILMultiLed( HWND hParent ) :
  Background( *new CTULControlBackground( GetInstance(), _T( "Background" )))
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILMultiLed::CTILMultiLed() :
  Background( *new CTULControlBackground( GetInstance(), _T( "Background" )))
{
}
//------------------------------------------------------------------------------
inline void CTILMultiLed::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILMultiLed" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILMultiLed::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILMultiLed" ), hParent );
}
//------------------------------------------------------------------------------
inline CTILMultiLed::~CTILMultiLed()
{
  delete &Background;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILMultiLed::GetFunction( const char *function_name )
{
  TLPFunctionEntry Result = VCL_GetFunction( LibraryHandle, function_name );
  if( Result )
    return Result;

  return inherited::GetFunction( function_name );
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
inline CTILMultiLedLayer::CTILMultiLedLayer( HWND hParent )
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILMultiLedLayer::CTILMultiLedLayer()
{
}
//------------------------------------------------------------------------------
inline void CTILMultiLedLayer::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILMultiLedLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILMultiLedLayer::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILMultiLedLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILMultiLedLayer::GetFunction( const char *function_name )
{
  TLPFunctionEntry Result = VCL_GetFunction( LibraryHandle, function_name );
  if( Result )
    return Result;

  return inherited::GetFunction( function_name );
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
inline CTILExternalMultiLedElement::CTILExternalMultiLedElement( HWND hParent ) :
  Position( *new CTULElementOffsets( GetInstance(), _T( "Position" ))),
  Size( *new CTULElement2DSize( GetInstance(), _T( "Size" )))
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILExternalMultiLedElement::CTILExternalMultiLedElement() :
  Position( *new CTULElementOffsets( GetInstance(), _T( "Position" ))),
  Size( *new CTULElement2DSize( GetInstance(), _T( "Size" )))
{
}
//------------------------------------------------------------------------------
inline void CTILExternalMultiLedElement::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILExternalMultiLedElement" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILExternalMultiLedElement::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILExternalMultiLedElement" ), hParent );
}
//------------------------------------------------------------------------------
inline CTILExternalMultiLedElement::~CTILExternalMultiLedElement()
{
  delete &Position;
  delete &Size;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILExternalMultiLedElement::GetFunction( const char *function_name )
{
  TLPFunctionEntry Result = VCL_GetFunction( LibraryHandle, function_name );
  if( Result )
    return Result;

  return inherited::GetFunction( function_name );
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
inline CTILExternalMultiLedMatrixLayer::CTILExternalMultiLedMatrixLayer( HWND hParent )
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILExternalMultiLedMatrixLayer::CTILExternalMultiLedMatrixLayer()
{
}
//------------------------------------------------------------------------------
inline void CTILExternalMultiLedMatrixLayer::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILExternalMultiLedMatrixLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILExternalMultiLedMatrixLayer::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILExternalMultiLedMatrixLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILExternalMultiLedMatrixLayer::GetFunction( const char *function_name )
{
  TLPFunctionEntry Result = VCL_GetFunction( LibraryHandle, function_name );
  if( Result )
    return Result;

  return inherited::GetFunction( function_name );
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
#pragma optimize( "", on )
#endif   // CILMultiLedCode_H_
//------------------------------------------------------------------------------
