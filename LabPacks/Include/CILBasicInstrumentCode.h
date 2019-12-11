//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CILBasicInstrumentCode_H_
#define CILBasicInstrumentCode_H_

#pragma optimize( "", off )
//------------------------------------------------------------------------------
inline CTILInstrumentTicksText::CTILInstrumentTicksText( CLPBaseComponent *a_control, const CLPString a_PropertyName ) :
  inherited( a_control, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Visible( GetInstance(), _T( "Visible" ) ),
  Font( *new CTULControlFont( GetInstance(), _T( "Font" ))),
  Angle( GetInstance(), _T( "Angle" ) )
{
}
//------------------------------------------------------------------------------
inline CTILInstrumentTicksText::CTILInstrumentTicksText( CLPClassProperty *a_property, const CLPString a_PropertyName ) :
  inherited( a_property, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Visible( GetInstance(), _T( "Visible" ) ),
  Font( *new CTULControlFont( GetInstance(), _T( "Font" ))),
  Angle( GetInstance(), _T( "Angle" ) )
{
}
//------------------------------------------------------------------------------
inline CTILInstrumentTicksText::CTILInstrumentTicksText( CLPClassProperty *a_property, CTILInstrumentTicksText ( CLPBaseClass::*a_getter )() ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_property),
  Visible( GetInstance(), _T( "Visible" ) ),
  Font( *new CTULControlFont( GetInstance(), _T( "Font" ))),
  Angle( GetInstance(), _T( "Angle" ) )
{
}
//------------------------------------------------------------------------------
inline CTILInstrumentTicksText::CTILInstrumentTicksText( CLPClassProperty *a_property, CTILInstrumentTicksText ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILInstrumentTicksText ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  Visible( GetInstance(), _T( "Visible" ) ),
  Font( *new CTULControlFont( GetInstance(), _T( "Font" ))),
  Angle( GetInstance(), _T( "Angle" ) )
{
}
//------------------------------------------------------------------------------
inline CTILInstrumentTicksText::CTILInstrumentTicksText( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILInstrumentTicksText ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(NULL),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property),
  Visible( GetInstance(), _T( "Visible" ) ),
  Font( *new CTULControlFont( GetInstance(), _T( "Font" ))),
  Angle( GetInstance(), _T( "Angle" ) )
{
}
//------------------------------------------------------------------------------
inline CTILInstrumentTicksText::CTILInstrumentTicksText( CLPBaseComponent *a_control, CTILInstrumentTicksText ( CLPBaseClass::*a_getter )() ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_control),
  Visible( GetInstance(), _T( "Visible" ) ),
  Font( *new CTULControlFont( GetInstance(), _T( "Font" ))),
  Angle( GetInstance(), _T( "Angle" ) )
{
}
//------------------------------------------------------------------------------
inline CTILInstrumentTicksText::CTILInstrumentTicksText( CLPBaseComponent *a_control, CTILInstrumentTicksText ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILInstrumentTicksText ) ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_control),
  Visible( GetInstance(), _T( "Visible" ) ),
  Font( *new CTULControlFont( GetInstance(), _T( "Font" ))),
  Angle( GetInstance(), _T( "Angle" ) )
{
}
//------------------------------------------------------------------------------
inline CTILInstrumentTicksText::CTILInstrumentTicksText( VCLHANDLE handle, ELPHandleMode owns_handle ) :
  inherited( handle, owns_handle ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Visible( GetInstance(), _T( "Visible" ) ),
  Font( *new CTULControlFont( GetInstance(), _T( "Font" ))),
  Angle( GetInstance(), _T( "Angle" ) )
{
}
//------------------------------------------------------------------------------
inline CTILInstrumentTicksText::CTILInstrumentTicksText( const CTILInstrumentTicksText &other ) :
  inherited( other ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL ),
  Visible( GetInstance(), _T( "Visible" ) ),
  Font( *new CTULControlFont( GetInstance(), _T( "Font" ))),
  Angle( GetInstance(), _T( "Angle" ) )
{
}
//------------------------------------------------------------------------------
inline CTILInstrumentTicksText::~CTILInstrumentTicksText()
{
  delete &Font;
}
//------------------------------------------------------------------------------
inline CTILInstrumentTicksText & CTILInstrumentTicksText::operator = ( const CTILInstrumentTicksText & other )
{
  if( m_Property_Setter )
	  (m_Owner_Property->*m_Property_Setter)( other );

  else
	  inherited::operator = ( other );

  return *this;
}
//------------------------------------------------------------------------------
inline VCLHANDLE CTILInstrumentTicksText::Get_VCL_Handle() const
{
  if( m_Property_Getter )
	  {
		if( ! m_Object )
		  m_Object = new CVCLObject( (m_Owner_Property->*m_Property_Getter)().Get_VCL_Handle() );

	  }

  return inherited::Get_VCL_Handle();
}
//------------------------------------------------------------------------------
#pragma optimize( "", on )
#endif   // CILBasicInstrumentCode_H_
//------------------------------------------------------------------------------
