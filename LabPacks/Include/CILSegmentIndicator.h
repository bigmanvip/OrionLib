//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CILSegmentIndicator_H_
#define CILSegmentIndicator_H_

//------------------------------------------------------------------------------
#ifndef VCLSupportH
  #include <VCLSupport.h>
#endif

#ifndef CInstrumentLabPkgRAD_H_
  #include <CInstrumentLabPkgRAD.h>
#endif
#ifndef CILBasicInstrument_H_
  #include <CILBasicInstrument.h>
#endif
#ifndef CILAnalogInstrument_H_
  #include <CILAnalogInstrument.h>
#endif
#ifndef CULBasicControl_H_
  #include <CULBasicControl.h>
#endif
#ifndef CSLControlCollection_H_
  #include <CSLControlCollection.h>
#endif
#ifndef CSLComponentCollection_H_
  #include <CSLComponentCollection.h>
#endif
//------------------------------------------------------------------------------

enum CTILSegmentsType { stSeven, stNine, stFourteen, stSixteen };



//------------------------------------------------------------------------------
class CTILCustomSegment : public CLPClassProperty
{
//DOM-IGNORE-BEGIN
  typedef CLPClassProperty inherited;
//DOM-IGNORE-END

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name )
  {
    TLPFunctionEntry Result = VCL_GetFunction( ::Get_InstrumentLabPkgRAD(), function_name );
    if( Result )
      return Result;

    return inherited::GetFunction( function_name );
  }

public:    // Properties
  CLPAccessProperty<CTILCustomSegment,bool> Visible;
  CLPAccessProperty<CTILCustomSegment,bool> Value;

protected:
  bool GetVisible();
  void SetVisible( bool AValue );
  bool GetValue();
  void SetValue( bool AValue );

public:
  CTILCustomSegment( CLPBaseComponent *a_control, const CLPString a_PropertyName );
  CTILCustomSegment( CLPClassProperty *a_property, const CLPString a_PropertyName );
  CTILCustomSegment( CLPClassProperty *a_property, CTILCustomSegment ( CLPBaseClass::*a_getter )() );
  CTILCustomSegment( CLPClassProperty *a_property, CTILCustomSegment ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILCustomSegment ) );
  CTILCustomSegment( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILCustomSegment ) );
  CTILCustomSegment( CLPBaseComponent *a_control, CTILCustomSegment ( CLPBaseClass::*a_getter )() );
  CTILCustomSegment( CLPBaseComponent *a_control, CTILCustomSegment ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILCustomSegment ) );
  CTILCustomSegment( VCLHANDLE handle, ELPHandleMode owns_handle = hmNone );
  CTILCustomSegment( const CTILCustomSegment &other );

public:
  CTILCustomSegment & operator = ( const CTILCustomSegment & other );

public:
  virtual VCLHANDLE Get_VCL_Handle() const;

protected:
  CLPBaseClass        *m_Owner_Property;
  CTILCustomSegment ( CLPBaseClass::*m_Property_Getter )();
  void ( CLPBaseClass::*m_Property_Setter )( CTILCustomSegment Value );
};
//------------------------------------------------------------------------------
class CTILCustomSegments : public CLPClassProperty
{
//DOM-IGNORE-BEGIN
  typedef CLPClassProperty inherited;
//DOM-IGNORE-END

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name )
  {
    TLPFunctionEntry Result = VCL_GetFunction( ::Get_InstrumentLabPkgRAD(), function_name );
    if( Result )
      return Result;

    return inherited::GetFunction( function_name );
  }

public:    // Class Properties
  class CTILCustomSegment &DecimalPoint;
  CLPReadIndexProperty_1<CTILCustomSegments,unsigned int,CTILCustomSegment> Segments;

public:    // Properties
  CLPReadAccessProperty<CTILCustomSegments,unsigned int> Count;

protected:
  CTILCustomSegment GetDecimalPoint();
  CTILCustomSegment GetSegment( unsigned int AIndex );
  unsigned int GetCount();

public:
  CTILCustomSegments( CLPBaseComponent *a_control, const CLPString a_PropertyName );
  CTILCustomSegments( CLPClassProperty *a_property, const CLPString a_PropertyName );
  CTILCustomSegments( CLPClassProperty *a_property, CTILCustomSegments ( CLPBaseClass::*a_getter )() );
  CTILCustomSegments( CLPClassProperty *a_property, CTILCustomSegments ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILCustomSegments ) );
  CTILCustomSegments( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILCustomSegments ) );
  CTILCustomSegments( CLPBaseComponent *a_control, CTILCustomSegments ( CLPBaseClass::*a_getter )() );
  CTILCustomSegments( CLPBaseComponent *a_control, CTILCustomSegments ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILCustomSegments ) );
  CTILCustomSegments( VCLHANDLE handle, ELPHandleMode owns_handle = hmNone );
  CTILCustomSegments( const CTILCustomSegments &other );
  virtual ~CTILCustomSegments();

public:
  CTILCustomSegments & operator = ( const CTILCustomSegments & other );

public:
  virtual VCLHANDLE Get_VCL_Handle() const;

protected:
  CLPBaseClass        *m_Owner_Property;
  CTILCustomSegments ( CLPBaseClass::*m_Property_Getter )();
  void ( CLPBaseClass::*m_Property_Setter )( CTILCustomSegments Value );
};
//------------------------------------------------------------------------------
class CTILSegment : public CTULBasicControlProperty
{
//DOM-IGNORE-BEGIN
  typedef CTULBasicControlProperty inherited;
//DOM-IGNORE-END

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name )
  {
    TLPFunctionEntry Result = VCL_GetFunction( ::Get_InstrumentLabPkgRAD(), function_name );
    if( Result )
      return Result;

    return inherited::GetFunction( function_name );
  }

public:    // Class Properties
  class CTULElementSize &Gap;
  class CTULElementSize &Width;
  class CTILInactiveColor &InactiveColor;

public:    // Properties
  CLPProperty<CTGPColor> Color;
  CLPProperty<CTGPColor> CenterColor;
  CLPProperty<bool> ShowGlow;

public:
  CTILSegment( CLPBaseComponent *a_control, const CLPString a_PropertyName );
  CTILSegment( CLPClassProperty *a_property, const CLPString a_PropertyName );
  CTILSegment( CLPClassProperty *a_property, CTILSegment ( CLPBaseClass::*a_getter )() );
  CTILSegment( CLPClassProperty *a_property, CTILSegment ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILSegment ) );
  CTILSegment( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILSegment ) );
  CTILSegment( CLPBaseComponent *a_control, CTILSegment ( CLPBaseClass::*a_getter )() );
  CTILSegment( CLPBaseComponent *a_control, CTILSegment ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILSegment ) );
  CTILSegment( VCLHANDLE handle, ELPHandleMode owns_handle = hmNone );
  CTILSegment( const CTILSegment &other );
  virtual ~CTILSegment();

public:
  CTILSegment & operator = ( const CTILSegment & other );

public:
  virtual VCLHANDLE Get_VCL_Handle() const;

protected:
  CLPBaseClass        *m_Owner_Property;
  CTILSegment ( CLPBaseClass::*m_Property_Getter )();
  void ( CLPBaseClass::*m_Property_Setter )( CTILSegment Value );
};
//------------------------------------------------------------------------------
class CTILSegmentSeparator : public CTULOptionalInstrumentProperty
{
//DOM-IGNORE-BEGIN
  typedef CTULOptionalInstrumentProperty inherited;
//DOM-IGNORE-END

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name )
  {
    TLPFunctionEntry Result = VCL_GetFunction( ::Get_InstrumentLabPkgRAD(), function_name );
    if( Result )
      return Result;

    return inherited::GetFunction( function_name );
  }

public:    // Class Properties
  class CTULElementSize &Width;

public:
  CTILSegmentSeparator( CLPBaseComponent *a_control, const CLPString a_PropertyName );
  CTILSegmentSeparator( CLPClassProperty *a_property, const CLPString a_PropertyName );
  CTILSegmentSeparator( CLPClassProperty *a_property, CTILSegmentSeparator ( CLPBaseClass::*a_getter )() );
  CTILSegmentSeparator( CLPClassProperty *a_property, CTILSegmentSeparator ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILSegmentSeparator ) );
  CTILSegmentSeparator( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILSegmentSeparator ) );
  CTILSegmentSeparator( CLPBaseComponent *a_control, CTILSegmentSeparator ( CLPBaseClass::*a_getter )() );
  CTILSegmentSeparator( CLPBaseComponent *a_control, CTILSegmentSeparator ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILSegmentSeparator ) );
  CTILSegmentSeparator( VCLHANDLE handle, ELPHandleMode owns_handle = hmNone );
  CTILSegmentSeparator( const CTILSegmentSeparator &other );
  virtual ~CTILSegmentSeparator();

public:
  CTILSegmentSeparator & operator = ( const CTILSegmentSeparator & other );

public:
  virtual VCLHANDLE Get_VCL_Handle() const;

protected:
  CLPBaseClass        *m_Owner_Property;
  CTILSegmentSeparator ( CLPBaseClass::*m_Property_Getter )();
  void ( CLPBaseClass::*m_Property_Setter )( CTILSegmentSeparator Value );
};
//------------------------------------------------------------------------------
class CTILSegmentIndents : public CTULBasicControlProperty
{
//DOM-IGNORE-BEGIN
  typedef CTULBasicControlProperty inherited;
//DOM-IGNORE-END

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name )
  {
    TLPFunctionEntry Result = VCL_GetFunction( ::Get_InstrumentLabPkgRAD(), function_name );
    if( Result )
      return Result;

    return inherited::GetFunction( function_name );
  }

public:    // Class Properties
  class CTULElementSize &Left;
  class CTULElementSize &Right;
  class CTULElementSize &Top;
  class CTULElementSize &Bottom;

public:
  CTILSegmentIndents( CLPBaseComponent *a_control, const CLPString a_PropertyName );
  CTILSegmentIndents( CLPClassProperty *a_property, const CLPString a_PropertyName );
  CTILSegmentIndents( CLPClassProperty *a_property, CTILSegmentIndents ( CLPBaseClass::*a_getter )() );
  CTILSegmentIndents( CLPClassProperty *a_property, CTILSegmentIndents ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILSegmentIndents ) );
  CTILSegmentIndents( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILSegmentIndents ) );
  CTILSegmentIndents( CLPBaseComponent *a_control, CTILSegmentIndents ( CLPBaseClass::*a_getter )() );
  CTILSegmentIndents( CLPBaseComponent *a_control, CTILSegmentIndents ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILSegmentIndents ) );
  CTILSegmentIndents( VCLHANDLE handle, ELPHandleMode owns_handle = hmNone );
  CTILSegmentIndents( const CTILSegmentIndents &other );
  virtual ~CTILSegmentIndents();

public:
  CTILSegmentIndents & operator = ( const CTILSegmentIndents & other );

public:
  virtual VCLHANDLE Get_VCL_Handle() const;

protected:
  CLPBaseClass        *m_Owner_Property;
  CTILSegmentIndents ( CLPBaseClass::*m_Property_Getter )();
  void ( CLPBaseClass::*m_Property_Setter )( CTILSegmentIndents Value );
};
//------------------------------------------------------------------------------
class CTILDecimalPointOffset : public CTULBasicControlProperty
{
//DOM-IGNORE-BEGIN
  typedef CTULBasicControlProperty inherited;
//DOM-IGNORE-END

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name )
  {
    TLPFunctionEntry Result = VCL_GetFunction( ::Get_InstrumentLabPkgRAD(), function_name );
    if( Result )
      return Result;

    return inherited::GetFunction( function_name );
  }

public:    // Class Properties
  class CTULElementSize &Right;
  class CTULElementSize &Bottom;

public:
  CTILDecimalPointOffset( CLPBaseComponent *a_control, const CLPString a_PropertyName );
  CTILDecimalPointOffset( CLPClassProperty *a_property, const CLPString a_PropertyName );
  CTILDecimalPointOffset( CLPClassProperty *a_property, CTILDecimalPointOffset ( CLPBaseClass::*a_getter )() );
  CTILDecimalPointOffset( CLPClassProperty *a_property, CTILDecimalPointOffset ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILDecimalPointOffset ) );
  CTILDecimalPointOffset( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILDecimalPointOffset ) );
  CTILDecimalPointOffset( CLPBaseComponent *a_control, CTILDecimalPointOffset ( CLPBaseClass::*a_getter )() );
  CTILDecimalPointOffset( CLPBaseComponent *a_control, CTILDecimalPointOffset ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILDecimalPointOffset ) );
  CTILDecimalPointOffset( VCLHANDLE handle, ELPHandleMode owns_handle = hmNone );
  CTILDecimalPointOffset( const CTILDecimalPointOffset &other );
  virtual ~CTILDecimalPointOffset();

public:
  CTILDecimalPointOffset & operator = ( const CTILDecimalPointOffset & other );

public:
  virtual VCLHANDLE Get_VCL_Handle() const;

protected:
  CLPBaseClass        *m_Owner_Property;
  CTILDecimalPointOffset ( CLPBaseClass::*m_Property_Getter )();
  void ( CLPBaseClass::*m_Property_Setter )( CTILDecimalPointOffset Value );
};
//------------------------------------------------------------------------------
class CTILDecimalPointSegment : public CTULOptionalInstrumentProperty
{
//DOM-IGNORE-BEGIN
  typedef CTULOptionalInstrumentProperty inherited;
//DOM-IGNORE-END

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name )
  {
    TLPFunctionEntry Result = VCL_GetFunction( ::Get_InstrumentLabPkgRAD(), function_name );
    if( Result )
      return Result;

    return inherited::GetFunction( function_name );
  }

public:    // Class Properties
  class CTILDecimalPointOffset &Offset;
  class CTULElementSize &Size;

public:
  CTILDecimalPointSegment( CLPBaseComponent *a_control, const CLPString a_PropertyName );
  CTILDecimalPointSegment( CLPClassProperty *a_property, const CLPString a_PropertyName );
  CTILDecimalPointSegment( CLPClassProperty *a_property, CTILDecimalPointSegment ( CLPBaseClass::*a_getter )() );
  CTILDecimalPointSegment( CLPClassProperty *a_property, CTILDecimalPointSegment ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILDecimalPointSegment ) );
  CTILDecimalPointSegment( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILDecimalPointSegment ) );
  CTILDecimalPointSegment( CLPBaseComponent *a_control, CTILDecimalPointSegment ( CLPBaseClass::*a_getter )() );
  CTILDecimalPointSegment( CLPBaseComponent *a_control, CTILDecimalPointSegment ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILDecimalPointSegment ) );
  CTILDecimalPointSegment( VCLHANDLE handle, ELPHandleMode owns_handle = hmNone );
  CTILDecimalPointSegment( const CTILDecimalPointSegment &other );
  virtual ~CTILDecimalPointSegment();

public:
  CTILDecimalPointSegment & operator = ( const CTILDecimalPointSegment & other );

public:
  virtual VCLHANDLE Get_VCL_Handle() const;

protected:
  CLPBaseClass        *m_Owner_Property;
  CTILDecimalPointSegment ( CLPBaseClass::*m_Property_Getter )();
  void ( CLPBaseClass::*m_Property_Setter )( CTILDecimalPointSegment Value );
};
//------------------------------------------------------------------------------
class CTILSegmentValue : public CTULBasicControlProperty
{
//DOM-IGNORE-BEGIN
  typedef CTULBasicControlProperty inherited;
//DOM-IGNORE-END

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name )
  {
    TLPFunctionEntry Result = VCL_GetFunction( ::Get_InstrumentLabPkgRAD(), function_name );
    if( Result )
      return Result;

    return inherited::GetFunction( function_name );
  }

public:    // Properties
  CLPReadIndexProperty_1<CTILSegmentValue,unsigned int,CTString> Names;
  CLPIndexProperty_1<CTILSegmentValue,unsigned int,bool> Values;
  CLPReadAccessProperty<CTILSegmentValue,unsigned int> Count;

protected:
  CTString GetName( unsigned int Index );
  bool GetValue( unsigned int Index );
  void SetValue( unsigned int Index, bool AValue );
  unsigned int GetCount();

public:
  CTILSegmentValue( CLPBaseComponent *a_control, const CLPString a_PropertyName );
  CTILSegmentValue( CLPClassProperty *a_property, const CLPString a_PropertyName );
  CTILSegmentValue( CLPClassProperty *a_property, CTILSegmentValue ( CLPBaseClass::*a_getter )() );
  CTILSegmentValue( CLPClassProperty *a_property, CTILSegmentValue ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILSegmentValue ) );
  CTILSegmentValue( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILSegmentValue ) );
  CTILSegmentValue( CLPBaseComponent *a_control, CTILSegmentValue ( CLPBaseClass::*a_getter )() );
  CTILSegmentValue( CLPBaseComponent *a_control, CTILSegmentValue ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILSegmentValue ) );
  CTILSegmentValue( VCLHANDLE handle, ELPHandleMode owns_handle = hmNone );
  CTILSegmentValue( const CTILSegmentValue &other );

public:
  CTILSegmentValue & operator = ( const CTILSegmentValue & other );

public:
  virtual VCLHANDLE Get_VCL_Handle() const;

protected:
  CLPBaseClass        *m_Owner_Property;
  CTILSegmentValue ( CLPBaseClass::*m_Property_Getter )();
  void ( CLPBaseClass::*m_Property_Setter )( CTILSegmentValue Value );
};
//------------------------------------------------------------------------------
class CTILBasicSegmentIndicator : public CTULBasicColorControl
{
//DOM-IGNORE-BEGIN
  typedef CTULBasicColorControl inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // Class Properties
  class CTILSegment &Segments;
  class CTILDecimalPointSegment &DecimalPoint;
  class CTILSegmentIndents &Indents;

public:    // Properties
  CLPEnumProperty<CTILSegmentsType> SegmentsType;

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILBasicSegmentIndicator();
  virtual ~CTILBasicSegmentIndicator();
};
//------------------------------------------------------------------------------
class CTILCustomizableSegmentIndicator : public CTILBasicSegmentIndicator
{
//DOM-IGNORE-BEGIN
  typedef CTILBasicSegmentIndicator inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // Events
//  void __stdcall OnCustomSymbol(VCLHANDLE Sender, unsigned int Col, unsigned int Row, char Symbol, VCLHANDLE Segments);
  CLPEventProperty_5<0, void, VCLHANDLE, unsigned int, unsigned int, char, VCLHANDLE> OnCustomSymbol;

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILCustomizableSegmentIndicator();
};
//------------------------------------------------------------------------------
class CTILSegmentIndicator : public CTILBasicSegmentIndicator
{
//DOM-IGNORE-BEGIN
  typedef CTILBasicSegmentIndicator inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // OpenWire Pins
  CTOWPinListProperty InputPins;

public:    // Class Properties
  class CTILSegmentValue &Value;
  class CTLPComponentElements &Elements;

public:

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILSegmentIndicator( HWND hParent );
  CTILSegmentIndicator();
  virtual ~CTILSegmentIndicator();
};
//------------------------------------------------------------------------------
class CTILSegmentIndicatorLayer : public CTILSegmentIndicator
{
//DOM-IGNORE-BEGIN
  typedef CTILSegmentIndicator inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILSegmentIndicatorLayer( HWND hParent );
  CTILSegmentIndicatorLayer();
};
//------------------------------------------------------------------------------
class CTILExternalSegmentIndicatorElement : public CTILSegmentIndicator
{
//DOM-IGNORE-BEGIN
  typedef CTILSegmentIndicator inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // Class Properties
  class CTULElementOffsets &Position;
  class CTULElement2DSize &Size;

public:

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILExternalSegmentIndicatorElement( HWND hParent );
  CTILExternalSegmentIndicatorElement();
  virtual ~CTILExternalSegmentIndicatorElement();
};
//------------------------------------------------------------------------------
class CTILExternalSegmentIndicatorMatrixLayer : public CTILExternalSegmentIndicatorElement
{
//DOM-IGNORE-BEGIN
  typedef CTILExternalSegmentIndicatorElement inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILExternalSegmentIndicatorMatrixLayer( HWND hParent );
  CTILExternalSegmentIndicatorMatrixLayer();
};
//------------------------------------------------------------------------------
#include <CILSegmentIndicatorCode.h>
//------------------------------------------------------------------------------
#endif   // CILSegmentIndicator_H_
//------------------------------------------------------------------------------
