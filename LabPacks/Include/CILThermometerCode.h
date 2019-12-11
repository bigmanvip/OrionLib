//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CILThermometerCode_H_
#define CILThermometerCode_H_

#pragma optimize( "", off )
//------------------------------------------------------------------------------
inline CTILThermometerReservoir::CTILThermometerReservoir( CLPBaseComponent *a_control, const CLPString a_PropertyName ) :
  inherited( a_control, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Size( *new CTULElementSize( GetInstance(), _T( "Size" ))),
  ShowEmpty( GetInstance(), _T( "ShowEmpty" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerReservoir::CTILThermometerReservoir( CLPClassProperty *a_property, const CLPString a_PropertyName ) :
  inherited( a_property, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Size( *new CTULElementSize( GetInstance(), _T( "Size" ))),
  ShowEmpty( GetInstance(), _T( "ShowEmpty" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerReservoir::CTILThermometerReservoir( CLPClassProperty *a_property, CTILThermometerReservoir ( CLPBaseClass::*a_getter )() ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_property),
  Size( *new CTULElementSize( GetInstance(), _T( "Size" ))),
  ShowEmpty( GetInstance(), _T( "ShowEmpty" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerReservoir::CTILThermometerReservoir( CLPClassProperty *a_property, CTILThermometerReservoir ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILThermometerReservoir ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  Size( *new CTULElementSize( GetInstance(), _T( "Size" ))),
  ShowEmpty( GetInstance(), _T( "ShowEmpty" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerReservoir::CTILThermometerReservoir( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILThermometerReservoir ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(NULL),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  Size( *new CTULElementSize( GetInstance(), _T( "Size" ))),
  ShowEmpty( GetInstance(), _T( "ShowEmpty" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerReservoir::CTILThermometerReservoir( CLPBaseComponent *a_control, CTILThermometerReservoir ( CLPBaseClass::*a_getter )() ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_control),
  Size( *new CTULElementSize( GetInstance(), _T( "Size" ))),
  ShowEmpty( GetInstance(), _T( "ShowEmpty" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerReservoir::CTILThermometerReservoir( CLPBaseComponent *a_control, CTILThermometerReservoir ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILThermometerReservoir ) ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_control),
  Size( *new CTULElementSize( GetInstance(), _T( "Size" ))),
  ShowEmpty( GetInstance(), _T( "ShowEmpty" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerReservoir::CTILThermometerReservoir( VCLHANDLE handle, ELPHandleMode owns_handle ) :
  inherited( handle, owns_handle ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Size( *new CTULElementSize( GetInstance(), _T( "Size" ))),
  ShowEmpty( GetInstance(), _T( "ShowEmpty" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerReservoir::CTILThermometerReservoir( const CTILThermometerReservoir &other ) :
  inherited( other ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Size( *new CTULElementSize( GetInstance(), _T( "Size" ))),
  ShowEmpty( GetInstance(), _T( "ShowEmpty" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerReservoir::~CTILThermometerReservoir()
{
  delete &Size;
}
//------------------------------------------------------------------------------
inline CTILThermometerReservoir & CTILThermometerReservoir::operator = ( const CTILThermometerReservoir & other )
{
  if( m_Property_Setter )
	  (m_Owner_Property->*m_Property_Setter)( other );

  else
	  inherited::operator = ( other );

  return *this;
}
//------------------------------------------------------------------------------
inline VCLHANDLE CTILThermometerReservoir::Get_VCL_Handle() const
{
  if( m_Property_Getter )
	  {
		if( ! m_Object )
		  m_Object = new CVCLObject( (m_Owner_Property->*m_Property_Getter)().Get_VCL_Handle() );

	  }

  return inherited::Get_VCL_Handle();
}
//------------------------------------------------------------------------------
inline CTILThermometerIndicator::CTILThermometerIndicator( CLPBaseComponent *a_control, const CLPString a_PropertyName ) :
  inherited( a_control, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  Color( GetInstance(), _T( "Color" ) ),
  BackColor( GetInstance(), _T( "BackColor" ) ),
  Reservoir( *new CTILThermometerReservoir( GetInstance(), _T( "Reservoir" )))
{
}
//------------------------------------------------------------------------------
inline CTILThermometerIndicator::CTILThermometerIndicator( CLPClassProperty *a_property, const CLPString a_PropertyName ) :
  inherited( a_property, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  Color( GetInstance(), _T( "Color" ) ),
  BackColor( GetInstance(), _T( "BackColor" ) ),
  Reservoir( *new CTILThermometerReservoir( GetInstance(), _T( "Reservoir" )))
{
}
//------------------------------------------------------------------------------
inline CTILThermometerIndicator::CTILThermometerIndicator( CLPClassProperty *a_property, CTILThermometerIndicator ( CLPBaseClass::*a_getter )() ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_property),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  Color( GetInstance(), _T( "Color" ) ),
  BackColor( GetInstance(), _T( "BackColor" ) ),
  Reservoir( *new CTILThermometerReservoir( GetInstance(), _T( "Reservoir" )))
{
}
//------------------------------------------------------------------------------
inline CTILThermometerIndicator::CTILThermometerIndicator( CLPClassProperty *a_property, CTILThermometerIndicator ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILThermometerIndicator ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  Color( GetInstance(), _T( "Color" ) ),
  BackColor( GetInstance(), _T( "BackColor" ) ),
  Reservoir( *new CTILThermometerReservoir( GetInstance(), _T( "Reservoir" )))
{
}
//------------------------------------------------------------------------------
inline CTILThermometerIndicator::CTILThermometerIndicator( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILThermometerIndicator ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(NULL),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  Color( GetInstance(), _T( "Color" ) ),
  BackColor( GetInstance(), _T( "BackColor" ) ),
  Reservoir( *new CTILThermometerReservoir( GetInstance(), _T( "Reservoir" )))
{
}
//------------------------------------------------------------------------------
inline CTILThermometerIndicator::CTILThermometerIndicator( CLPBaseComponent *a_control, CTILThermometerIndicator ( CLPBaseClass::*a_getter )() ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_control),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  Color( GetInstance(), _T( "Color" ) ),
  BackColor( GetInstance(), _T( "BackColor" ) ),
  Reservoir( *new CTILThermometerReservoir( GetInstance(), _T( "Reservoir" )))
{
}
//------------------------------------------------------------------------------
inline CTILThermometerIndicator::CTILThermometerIndicator( CLPBaseComponent *a_control, CTILThermometerIndicator ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILThermometerIndicator ) ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_control),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  Color( GetInstance(), _T( "Color" ) ),
  BackColor( GetInstance(), _T( "BackColor" ) ),
  Reservoir( *new CTILThermometerReservoir( GetInstance(), _T( "Reservoir" )))
{
}
//------------------------------------------------------------------------------
inline CTILThermometerIndicator::CTILThermometerIndicator( VCLHANDLE handle, ELPHandleMode owns_handle ) :
  inherited( handle, owns_handle ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  Color( GetInstance(), _T( "Color" ) ),
  BackColor( GetInstance(), _T( "BackColor" ) ),
  Reservoir( *new CTILThermometerReservoir( GetInstance(), _T( "Reservoir" )))
{
}
//------------------------------------------------------------------------------
inline CTILThermometerIndicator::CTILThermometerIndicator( const CTILThermometerIndicator &other ) :
  inherited( other ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  Color( GetInstance(), _T( "Color" ) ),
  BackColor( GetInstance(), _T( "BackColor" ) ),
  Reservoir( *new CTILThermometerReservoir( GetInstance(), _T( "Reservoir" )))
{
}
//------------------------------------------------------------------------------
inline CTILThermometerIndicator::~CTILThermometerIndicator()
{
  delete &Width;
  delete &Reservoir;
}
//------------------------------------------------------------------------------
inline CTILThermometerIndicator & CTILThermometerIndicator::operator = ( const CTILThermometerIndicator & other )
{
  if( m_Property_Setter )
	  (m_Owner_Property->*m_Property_Setter)( other );

  else
	  inherited::operator = ( other );

  return *this;
}
//------------------------------------------------------------------------------
inline VCLHANDLE CTILThermometerIndicator::Get_VCL_Handle() const
{
  if( m_Property_Getter )
	  {
		if( ! m_Object )
		  m_Object = new CVCLObject( (m_Owner_Property->*m_Property_Getter)().Get_VCL_Handle() );

	  }

  return inherited::Get_VCL_Handle();
}
//------------------------------------------------------------------------------
inline CTILThermometerBevel::CTILThermometerBevel( CLPBaseComponent *a_control, const CLPString a_PropertyName ) :
  inherited( a_control, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Color( GetInstance(), _T( "Color" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerBevel::CTILThermometerBevel( CLPClassProperty *a_property, const CLPString a_PropertyName ) :
  inherited( a_property, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Color( GetInstance(), _T( "Color" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerBevel::CTILThermometerBevel( CLPClassProperty *a_property, CTILThermometerBevel ( CLPBaseClass::*a_getter )() ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_property),
  Color( GetInstance(), _T( "Color" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerBevel::CTILThermometerBevel( CLPClassProperty *a_property, CTILThermometerBevel ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILThermometerBevel ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  Color( GetInstance(), _T( "Color" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerBevel::CTILThermometerBevel( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILThermometerBevel ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(NULL),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  Color( GetInstance(), _T( "Color" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerBevel::CTILThermometerBevel( CLPBaseComponent *a_control, CTILThermometerBevel ( CLPBaseClass::*a_getter )() ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_control),
  Color( GetInstance(), _T( "Color" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerBevel::CTILThermometerBevel( CLPBaseComponent *a_control, CTILThermometerBevel ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILThermometerBevel ) ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_control),
  Color( GetInstance(), _T( "Color" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerBevel::CTILThermometerBevel( VCLHANDLE handle, ELPHandleMode owns_handle ) :
  inherited( handle, owns_handle ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Color( GetInstance(), _T( "Color" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerBevel::CTILThermometerBevel( const CTILThermometerBevel &other ) :
  inherited( other ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Color( GetInstance(), _T( "Color" ) )
{
}
//------------------------------------------------------------------------------
inline CTILThermometerBevel & CTILThermometerBevel::operator = ( const CTILThermometerBevel & other )
{
  if( m_Property_Setter )
	  (m_Owner_Property->*m_Property_Setter)( other );

  else
	  inherited::operator = ( other );

  return *this;
}
//------------------------------------------------------------------------------
inline VCLHANDLE CTILThermometerBevel::Get_VCL_Handle() const
{
  if( m_Property_Getter )
	  {
		if( ! m_Object )
		  m_Object = new CVCLObject( (m_Owner_Property->*m_Property_Getter)().Get_VCL_Handle() );

	  }

  return inherited::Get_VCL_Handle();
}
//------------------------------------------------------------------------------
inline CTILBasicThermometer::CTILBasicThermometer() :
  Indicator( *new CTILThermometerIndicator( GetInstance(), _T( "Indicator" ))),
  Border( *new CTILThermometerBevel( GetInstance(), _T( "Border" ))),
  Caption( *new CTULVerticalCaption( GetInstance(), _T( "Caption" ))),
  Scale( *new CTILBasicGaugeScale( GetInstance(), _T( "Scale" ))),
  Ranges( *new CTILAnalogGaugeScaleRanges( GetInstance(), _T( "Ranges" ))),
  Elements( *new CTLPGaugeComponentElements( GetInstance(), _T( "Elements" )))
{
}
//------------------------------------------------------------------------------
inline void CTILBasicThermometer::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
}
//------------------------------------------------------------------------------
inline void CTILBasicThermometer::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
}
//------------------------------------------------------------------------------
inline CTILBasicThermometer::~CTILBasicThermometer()
{
  delete &Indicator;
  delete &Border;
  delete &Caption;
  delete &Scale;
  delete &Ranges;
  delete &Elements;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILBasicThermometer::GetFunction( const char *function_name )
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
inline CTILExternalThermometer::CTILExternalThermometer() :
  InputPin( GetInstance(), _T( "InputPin" ) ),
  Value( GetInstance(), _T( "Value" ) ),
  Max( GetInstance(), _T( "Max" ) ),
  Min( GetInstance(), _T( "Min" ) )
{
}
//------------------------------------------------------------------------------
inline void CTILExternalThermometer::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
}
//------------------------------------------------------------------------------
inline void CTILExternalThermometer::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILExternalThermometer::GetFunction( const char *function_name )
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
inline CTILThermometer::CTILThermometer( HWND hParent ) :
  Background( *new CTULControlBackground( GetInstance(), _T( "Background" )))
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILThermometer::CTILThermometer() :
  Background( *new CTULControlBackground( GetInstance(), _T( "Background" )))
{
}
//------------------------------------------------------------------------------
inline void CTILThermometer::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILThermometer" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILThermometer::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILThermometer" ), hParent );
}
//------------------------------------------------------------------------------
inline CTILThermometer::~CTILThermometer()
{
  delete &Background;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILThermometer::GetFunction( const char *function_name )
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
inline CTILThermometerLayer::CTILThermometerLayer( HWND hParent )
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILThermometerLayer::CTILThermometerLayer()
{
}
//------------------------------------------------------------------------------
inline void CTILThermometerLayer::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILThermometerLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILThermometerLayer::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILThermometerLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILThermometerLayer::GetFunction( const char *function_name )
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
inline void CTILBasicThermometerElement::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
}
//------------------------------------------------------------------------------
inline void CTILBasicThermometerElement::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILBasicThermometerElement::GetFunction( const char *function_name )
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
inline CTILThermometerElement::CTILThermometerElement( HWND hParent ) :
  Position( *new CTULElementOffsets( GetInstance(), _T( "Position" ))),
  Size( *new CTULElement2DSize( GetInstance(), _T( "Size" )))
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILThermometerElement::CTILThermometerElement() :
  Position( *new CTULElementOffsets( GetInstance(), _T( "Position" ))),
  Size( *new CTULElement2DSize( GetInstance(), _T( "Size" )))
{
}
//------------------------------------------------------------------------------
inline void CTILThermometerElement::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILThermometerElement" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILThermometerElement::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILThermometerElement" ), hParent );
}
//------------------------------------------------------------------------------
inline CTILThermometerElement::~CTILThermometerElement()
{
  delete &Position;
  delete &Size;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILThermometerElement::GetFunction( const char *function_name )
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
inline CTILExternalThermometerElement::CTILExternalThermometerElement( HWND hParent ) :
  InputPin( GetInstance(), _T( "InputPin" ) ),
  Value( GetInstance(), _T( "Value" ) ),
  Max( GetInstance(), _T( "Max" ) ),
  Min( GetInstance(), _T( "Min" ) )
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILExternalThermometerElement::CTILExternalThermometerElement() :
  InputPin( GetInstance(), _T( "InputPin" ) ),
  Value( GetInstance(), _T( "Value" ) ),
  Max( GetInstance(), _T( "Max" ) ),
  Min( GetInstance(), _T( "Min" ) )
{
}
//------------------------------------------------------------------------------
inline void CTILExternalThermometerElement::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILExternalThermometerElement" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILExternalThermometerElement::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILExternalThermometerElement" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILExternalThermometerElement::GetFunction( const char *function_name )
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
inline CTILExternalThermometerMatrixLayer::CTILExternalThermometerMatrixLayer( HWND hParent )
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILExternalThermometerMatrixLayer::CTILExternalThermometerMatrixLayer()
{
}
//------------------------------------------------------------------------------
inline void CTILExternalThermometerMatrixLayer::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILExternalThermometerMatrixLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILExternalThermometerMatrixLayer::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILExternalThermometerMatrixLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILExternalThermometerMatrixLayer::GetFunction( const char *function_name )
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
#endif   // CILThermometerCode_H_
//------------------------------------------------------------------------------
