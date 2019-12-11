//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CILGlassPanelCode_H_
#define CILGlassPanelCode_H_

#pragma optimize( "", off )
//------------------------------------------------------------------------------
inline CTILPanelProperty::CTILPanelProperty( CLPBaseComponent *a_control, const CLPString a_PropertyName ) :
  inherited( a_control, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL )
{
}
//------------------------------------------------------------------------------
inline CTILPanelProperty::CTILPanelProperty( CLPClassProperty *a_property, const CLPString a_PropertyName ) :
  inherited( a_property, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL )
{
}
//------------------------------------------------------------------------------
inline CTILPanelProperty::CTILPanelProperty( CLPClassProperty *a_property, CTILPanelProperty ( CLPBaseClass::*a_getter )() ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_property)
{
}
//------------------------------------------------------------------------------
inline CTILPanelProperty::CTILPanelProperty( CLPClassProperty *a_property, CTILPanelProperty ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILPanelProperty ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property)
{
}
//------------------------------------------------------------------------------
inline CTILPanelProperty::CTILPanelProperty( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILPanelProperty ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(NULL),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property)
{
}
//------------------------------------------------------------------------------
inline CTILPanelProperty::CTILPanelProperty( CLPBaseComponent *a_control, CTILPanelProperty ( CLPBaseClass::*a_getter )() ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_control)
{
}
//------------------------------------------------------------------------------
inline CTILPanelProperty::CTILPanelProperty( CLPBaseComponent *a_control, CTILPanelProperty ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILPanelProperty ) ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_control)
{
}
//------------------------------------------------------------------------------
inline CTILPanelProperty::CTILPanelProperty( VCLHANDLE handle, ELPHandleMode owns_handle ) :
  inherited( handle, owns_handle ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL )
{
}
//------------------------------------------------------------------------------
inline CTILPanelProperty::CTILPanelProperty( const CTILPanelProperty &other ) :
  inherited( other ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL )
{
}
//------------------------------------------------------------------------------
inline CTILPanelProperty & CTILPanelProperty::operator = ( const CTILPanelProperty & other )
{
  if( m_Property_Setter )
	  (m_Owner_Property->*m_Property_Setter)( other );

  else
	  inherited::operator = ( other );

  return *this;
}
//------------------------------------------------------------------------------
inline VCLHANDLE CTILPanelProperty::Get_VCL_Handle() const
{
  if( m_Property_Getter )
	  {
		if( ! m_Object )
		  m_Object = new CVCLObject( (m_Owner_Property->*m_Property_Getter)().Get_VCL_Handle() );

	  }

  return inherited::Get_VCL_Handle();
}
//------------------------------------------------------------------------------
inline CTILPanelBevel::CTILPanelBevel( CLPBaseComponent *a_control, const CLPString a_PropertyName ) :
  inherited( a_control, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Style( GetInstance(), _T( "Style" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBevel::CTILPanelBevel( CLPClassProperty *a_property, const CLPString a_PropertyName ) :
  inherited( a_property, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Style( GetInstance(), _T( "Style" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBevel::CTILPanelBevel( CLPClassProperty *a_property, CTILPanelBevel ( CLPBaseClass::*a_getter )() ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_property),
  Style( GetInstance(), _T( "Style" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBevel::CTILPanelBevel( CLPClassProperty *a_property, CTILPanelBevel ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILPanelBevel ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  Style( GetInstance(), _T( "Style" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBevel::CTILPanelBevel( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILPanelBevel ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(NULL),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  Style( GetInstance(), _T( "Style" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBevel::CTILPanelBevel( CLPBaseComponent *a_control, CTILPanelBevel ( CLPBaseClass::*a_getter )() ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_control),
  Style( GetInstance(), _T( "Style" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBevel::CTILPanelBevel( CLPBaseComponent *a_control, CTILPanelBevel ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILPanelBevel ) ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_control),
  Style( GetInstance(), _T( "Style" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBevel::CTILPanelBevel( VCLHANDLE handle, ELPHandleMode owns_handle ) :
  inherited( handle, owns_handle ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Style( GetInstance(), _T( "Style" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBevel::CTILPanelBevel( const CTILPanelBevel &other ) :
  inherited( other ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Style( GetInstance(), _T( "Style" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBevel::~CTILPanelBevel()
{
  delete &Width;
}
//------------------------------------------------------------------------------
inline CTILPanelBevel & CTILPanelBevel::operator = ( const CTILPanelBevel & other )
{
  if( m_Property_Setter )
	  (m_Owner_Property->*m_Property_Setter)( other );

  else
	  inherited::operator = ( other );

  return *this;
}
//------------------------------------------------------------------------------
inline VCLHANDLE CTILPanelBevel::Get_VCL_Handle() const
{
  if( m_Property_Getter )
	  {
		if( ! m_Object )
		  m_Object = new CVCLObject( (m_Owner_Property->*m_Property_Getter)().Get_VCL_Handle() );

	  }

  return inherited::Get_VCL_Handle();
}
//------------------------------------------------------------------------------
inline CTILPanelInnerBevel::CTILPanelInnerBevel( CLPBaseComponent *a_control, const CLPString a_PropertyName ) :
  inherited( a_control, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Style( GetInstance(), _T( "Style" ) )
{
}
//------------------------------------------------------------------------------
inline CTILPanelInnerBevel::CTILPanelInnerBevel( CLPClassProperty *a_property, const CLPString a_PropertyName ) :
  inherited( a_property, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Style( GetInstance(), _T( "Style" ) )
{
}
//------------------------------------------------------------------------------
inline CTILPanelInnerBevel::CTILPanelInnerBevel( CLPClassProperty *a_property, CTILPanelInnerBevel ( CLPBaseClass::*a_getter )() ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_property),
  Style( GetInstance(), _T( "Style" ) )
{
}
//------------------------------------------------------------------------------
inline CTILPanelInnerBevel::CTILPanelInnerBevel( CLPClassProperty *a_property, CTILPanelInnerBevel ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILPanelInnerBevel ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  Style( GetInstance(), _T( "Style" ) )
{
}
//------------------------------------------------------------------------------
inline CTILPanelInnerBevel::CTILPanelInnerBevel( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILPanelInnerBevel ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(NULL),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  Style( GetInstance(), _T( "Style" ) )
{
}
//------------------------------------------------------------------------------
inline CTILPanelInnerBevel::CTILPanelInnerBevel( CLPBaseComponent *a_control, CTILPanelInnerBevel ( CLPBaseClass::*a_getter )() ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_control),
  Style( GetInstance(), _T( "Style" ) )
{
}
//------------------------------------------------------------------------------
inline CTILPanelInnerBevel::CTILPanelInnerBevel( CLPBaseComponent *a_control, CTILPanelInnerBevel ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILPanelInnerBevel ) ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_control),
  Style( GetInstance(), _T( "Style" ) )
{
}
//------------------------------------------------------------------------------
inline CTILPanelInnerBevel::CTILPanelInnerBevel( VCLHANDLE handle, ELPHandleMode owns_handle ) :
  inherited( handle, owns_handle ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Style( GetInstance(), _T( "Style" ) )
{
}
//------------------------------------------------------------------------------
inline CTILPanelInnerBevel::CTILPanelInnerBevel( const CTILPanelInnerBevel &other ) :
  inherited( other ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Style( GetInstance(), _T( "Style" ) )
{
}
//------------------------------------------------------------------------------
inline CTILPanelInnerBevel & CTILPanelInnerBevel::operator = ( const CTILPanelInnerBevel & other )
{
  if( m_Property_Setter )
	  (m_Owner_Property->*m_Property_Setter)( other );

  else
	  inherited::operator = ( other );

  return *this;
}
//------------------------------------------------------------------------------
inline VCLHANDLE CTILPanelInnerBevel::Get_VCL_Handle() const
{
  if( m_Property_Getter )
	  {
		if( ! m_Object )
		  m_Object = new CVCLObject( (m_Owner_Property->*m_Property_Getter)().Get_VCL_Handle() );

	  }

  return inherited::Get_VCL_Handle();
}
//------------------------------------------------------------------------------
inline CTILPanelBorder::CTILPanelBorder( CLPBaseComponent *a_control, const CLPString a_PropertyName ) :
  inherited( a_control, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  BevelOuter( *new CTILPanelBevel( GetInstance(), _T( "BevelOuter" ))),
  BevelInner( *new CTILPanelInnerBevel( GetInstance(), _T( "BevelInner" ))),
  Shape( GetInstance(), _T( "Shape" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  CornerRadius( *new CTULElementSize( GetInstance(), _T( "CornerRadius" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBorder::CTILPanelBorder( CLPClassProperty *a_property, const CLPString a_PropertyName ) :
  inherited( a_property, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  BevelOuter( *new CTILPanelBevel( GetInstance(), _T( "BevelOuter" ))),
  BevelInner( *new CTILPanelInnerBevel( GetInstance(), _T( "BevelInner" ))),
  Shape( GetInstance(), _T( "Shape" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  CornerRadius( *new CTULElementSize( GetInstance(), _T( "CornerRadius" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBorder::CTILPanelBorder( CLPClassProperty *a_property, CTILPanelBorder ( CLPBaseClass::*a_getter )() ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_property),
  BevelOuter( *new CTILPanelBevel( GetInstance(), _T( "BevelOuter" ))),
  BevelInner( *new CTILPanelInnerBevel( GetInstance(), _T( "BevelInner" ))),
  Shape( GetInstance(), _T( "Shape" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  CornerRadius( *new CTULElementSize( GetInstance(), _T( "CornerRadius" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBorder::CTILPanelBorder( CLPClassProperty *a_property, CTILPanelBorder ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILPanelBorder ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  BevelOuter( *new CTILPanelBevel( GetInstance(), _T( "BevelOuter" ))),
  BevelInner( *new CTILPanelInnerBevel( GetInstance(), _T( "BevelInner" ))),
  Shape( GetInstance(), _T( "Shape" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  CornerRadius( *new CTULElementSize( GetInstance(), _T( "CornerRadius" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBorder::CTILPanelBorder( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILPanelBorder ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(NULL),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  BevelOuter( *new CTILPanelBevel( GetInstance(), _T( "BevelOuter" ))),
  BevelInner( *new CTILPanelInnerBevel( GetInstance(), _T( "BevelInner" ))),
  Shape( GetInstance(), _T( "Shape" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  CornerRadius( *new CTULElementSize( GetInstance(), _T( "CornerRadius" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBorder::CTILPanelBorder( CLPBaseComponent *a_control, CTILPanelBorder ( CLPBaseClass::*a_getter )() ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_control),
  BevelOuter( *new CTILPanelBevel( GetInstance(), _T( "BevelOuter" ))),
  BevelInner( *new CTILPanelInnerBevel( GetInstance(), _T( "BevelInner" ))),
  Shape( GetInstance(), _T( "Shape" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  CornerRadius( *new CTULElementSize( GetInstance(), _T( "CornerRadius" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBorder::CTILPanelBorder( CLPBaseComponent *a_control, CTILPanelBorder ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILPanelBorder ) ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_control),
  BevelOuter( *new CTILPanelBevel( GetInstance(), _T( "BevelOuter" ))),
  BevelInner( *new CTILPanelInnerBevel( GetInstance(), _T( "BevelInner" ))),
  Shape( GetInstance(), _T( "Shape" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  CornerRadius( *new CTULElementSize( GetInstance(), _T( "CornerRadius" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBorder::CTILPanelBorder( VCLHANDLE handle, ELPHandleMode owns_handle ) :
  inherited( handle, owns_handle ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  BevelOuter( *new CTILPanelBevel( GetInstance(), _T( "BevelOuter" ))),
  BevelInner( *new CTILPanelInnerBevel( GetInstance(), _T( "BevelInner" ))),
  Shape( GetInstance(), _T( "Shape" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  CornerRadius( *new CTULElementSize( GetInstance(), _T( "CornerRadius" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBorder::CTILPanelBorder( const CTILPanelBorder &other ) :
  inherited( other ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  BevelOuter( *new CTILPanelBevel( GetInstance(), _T( "BevelOuter" ))),
  BevelInner( *new CTILPanelInnerBevel( GetInstance(), _T( "BevelInner" ))),
  Shape( GetInstance(), _T( "Shape" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  Width( *new CTULElementSize( GetInstance(), _T( "Width" ))),
  CornerRadius( *new CTULElementSize( GetInstance(), _T( "CornerRadius" )))
{
}
//------------------------------------------------------------------------------
inline CTILPanelBorder::~CTILPanelBorder()
{
  delete &BevelOuter;
  delete &BevelInner;
  delete &Width;
  delete &CornerRadius;
}
//------------------------------------------------------------------------------
inline CTILPanelBorder & CTILPanelBorder::operator = ( const CTILPanelBorder & other )
{
  if( m_Property_Setter )
	  (m_Owner_Property->*m_Property_Setter)( other );

  else
	  inherited::operator = ( other );

  return *this;
}
//------------------------------------------------------------------------------
inline VCLHANDLE CTILPanelBorder::Get_VCL_Handle() const
{
  if( m_Property_Getter )
	  {
		if( ! m_Object )
		  m_Object = new CVCLObject( (m_Owner_Property->*m_Property_Getter)().Get_VCL_Handle() );

	  }

  return inherited::Get_VCL_Handle();
}
//------------------------------------------------------------------------------
inline CTILGlassPanel::CTILGlassPanel( HWND hParent ) :
  Border( *new CTILPanelBorder( GetInstance(), _T( "Border" ))),
  Glass( *new CTILGlass( GetInstance(), _T( "Glass" ))),
  Elements( *new CTLPComponentElements( GetInstance(), _T( "Elements" ))),
  Color( GetInstance(), _T( "Color" ) )
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILGlassPanel::CTILGlassPanel() :
  Border( *new CTILPanelBorder( GetInstance(), _T( "Border" ))),
  Glass( *new CTILGlass( GetInstance(), _T( "Glass" ))),
  Elements( *new CTLPComponentElements( GetInstance(), _T( "Elements" ))),
  Color( GetInstance(), _T( "Color" ) )
{
}
//------------------------------------------------------------------------------
inline void CTILGlassPanel::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILGlassPanel" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILGlassPanel::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILGlassPanel" ), hParent );
}
//------------------------------------------------------------------------------
inline CTILGlassPanel::~CTILGlassPanel()
{
  delete &Border;
  delete &Glass;
  delete &Elements;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILGlassPanel::GetFunction( const char *function_name )
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
inline CTILGlassPanelLayer::CTILGlassPanelLayer( HWND hParent )
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILGlassPanelLayer::CTILGlassPanelLayer()
{
}
//------------------------------------------------------------------------------
inline void CTILGlassPanelLayer::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILGlassPanelLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILGlassPanelLayer::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILGlassPanelLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILGlassPanelLayer::GetFunction( const char *function_name )
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
inline CTILGlassPanelElement::CTILGlassPanelElement( HWND hParent ) :
  Position( *new CTULElementOffsets( GetInstance(), _T( "Position" ))),
  Size( *new CTULElement2DSize( GetInstance(), _T( "Size" )))
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILGlassPanelElement::CTILGlassPanelElement() :
  Position( *new CTULElementOffsets( GetInstance(), _T( "Position" ))),
  Size( *new CTULElement2DSize( GetInstance(), _T( "Size" )))
{
}
//------------------------------------------------------------------------------
inline void CTILGlassPanelElement::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILGlassPanelElement" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILGlassPanelElement::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILGlassPanelElement" ), hParent );
}
//------------------------------------------------------------------------------
inline CTILGlassPanelElement::~CTILGlassPanelElement()
{
  delete &Position;
  delete &Size;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILGlassPanelElement::GetFunction( const char *function_name )
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
inline CTILGlassPanelMatrixLayer::CTILGlassPanelMatrixLayer( HWND hParent )
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILGlassPanelMatrixLayer::CTILGlassPanelMatrixLayer()
{
}
//------------------------------------------------------------------------------
inline void CTILGlassPanelMatrixLayer::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILGlassPanelMatrixLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILGlassPanelMatrixLayer::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILGlassPanelMatrixLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILGlassPanelMatrixLayer::GetFunction( const char *function_name )
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
#endif   // CILGlassPanelCode_H_
//------------------------------------------------------------------------------
