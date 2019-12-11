//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CILThermometer_H_
#define CILThermometer_H_

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
#ifndef CULBasicControl_H_
  #include <CULBasicControl.h>
#endif
#ifndef CILAnalogInstrument_H_
  #include <CILAnalogInstrument.h>
#endif
#ifndef CLPTransparentControl_H_
  #include <CLPTransparentControl.h>
#endif
#ifndef CSLControlCollection_H_
  #include <CSLControlCollection.h>
#endif
#ifndef CLPGDIPlusProperties_H_
  #include <CLPGDIPlusProperties.h>
#endif
#ifndef CLPComponent_H_
  #include <CLPComponent.h>
#endif
#ifndef CSLComponentCollection_H_
  #include <CSLComponentCollection.h>
#endif
//------------------------------------------------------------------------------

enum CTILPrecisionStyle { psSignificantDigits, psFixedPoint };



//------------------------------------------------------------------------------
class CTILThermometerReservoir : public CTULBasicControlProperty
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
  class CTULElementSize &Size;

public:    // Properties
  CLPProperty<bool> ShowEmpty;

public:
  CTILThermometerReservoir( CLPBaseComponent *a_control, const CLPString a_PropertyName );
  CTILThermometerReservoir( CLPClassProperty *a_property, const CLPString a_PropertyName );
  CTILThermometerReservoir( CLPClassProperty *a_property, CTILThermometerReservoir ( CLPBaseClass::*a_getter )() );
  CTILThermometerReservoir( CLPClassProperty *a_property, CTILThermometerReservoir ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILThermometerReservoir ) );
  CTILThermometerReservoir( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILThermometerReservoir ) );
  CTILThermometerReservoir( CLPBaseComponent *a_control, CTILThermometerReservoir ( CLPBaseClass::*a_getter )() );
  CTILThermometerReservoir( CLPBaseComponent *a_control, CTILThermometerReservoir ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILThermometerReservoir ) );
  CTILThermometerReservoir( VCLHANDLE handle, ELPHandleMode owns_handle = hmNone );
  CTILThermometerReservoir( const CTILThermometerReservoir &other );
  virtual ~CTILThermometerReservoir();

public:
  CTILThermometerReservoir & operator = ( const CTILThermometerReservoir & other );

public:
  virtual VCLHANDLE Get_VCL_Handle() const;

protected:
  CLPBaseClass        *m_Owner_Property;
  CTILThermometerReservoir ( CLPBaseClass::*m_Property_Getter )();
  void ( CLPBaseClass::*m_Property_Setter )( CTILThermometerReservoir Value );
};
//------------------------------------------------------------------------------
class CTILThermometerIndicator : public CTULBasicControlProperty
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
  class CTULElementSize &Width;
  class CTILThermometerReservoir &Reservoir;

public:    // Properties
  CLPProperty<CTGPColor> Color;
  CLPProperty<CTGPColor> BackColor;

public:
  CTILThermometerIndicator( CLPBaseComponent *a_control, const CLPString a_PropertyName );
  CTILThermometerIndicator( CLPClassProperty *a_property, const CLPString a_PropertyName );
  CTILThermometerIndicator( CLPClassProperty *a_property, CTILThermometerIndicator ( CLPBaseClass::*a_getter )() );
  CTILThermometerIndicator( CLPClassProperty *a_property, CTILThermometerIndicator ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILThermometerIndicator ) );
  CTILThermometerIndicator( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILThermometerIndicator ) );
  CTILThermometerIndicator( CLPBaseComponent *a_control, CTILThermometerIndicator ( CLPBaseClass::*a_getter )() );
  CTILThermometerIndicator( CLPBaseComponent *a_control, CTILThermometerIndicator ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILThermometerIndicator ) );
  CTILThermometerIndicator( VCLHANDLE handle, ELPHandleMode owns_handle = hmNone );
  CTILThermometerIndicator( const CTILThermometerIndicator &other );
  virtual ~CTILThermometerIndicator();

public:
  CTILThermometerIndicator & operator = ( const CTILThermometerIndicator & other );

public:
  virtual VCLHANDLE Get_VCL_Handle() const;

protected:
  CLPBaseClass        *m_Owner_Property;
  CTILThermometerIndicator ( CLPBaseClass::*m_Property_Getter )();
  void ( CLPBaseClass::*m_Property_Setter )( CTILThermometerIndicator Value );
};
//------------------------------------------------------------------------------
class CTILThermometerBevel : public CTULControlBevel
{
//DOM-IGNORE-BEGIN
  typedef CTULControlBevel inherited;
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
  CLPProperty<CTGPColor> Color;

public:
  CTILThermometerBevel( CLPBaseComponent *a_control, const CLPString a_PropertyName );
  CTILThermometerBevel( CLPClassProperty *a_property, const CLPString a_PropertyName );
  CTILThermometerBevel( CLPClassProperty *a_property, CTILThermometerBevel ( CLPBaseClass::*a_getter )() );
  CTILThermometerBevel( CLPClassProperty *a_property, CTILThermometerBevel ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILThermometerBevel ) );
  CTILThermometerBevel( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTILThermometerBevel ) );
  CTILThermometerBevel( CLPBaseComponent *a_control, CTILThermometerBevel ( CLPBaseClass::*a_getter )() );
  CTILThermometerBevel( CLPBaseComponent *a_control, CTILThermometerBevel ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTILThermometerBevel ) );
  CTILThermometerBevel( VCLHANDLE handle, ELPHandleMode owns_handle = hmNone );
  CTILThermometerBevel( const CTILThermometerBevel &other );

public:
  CTILThermometerBevel & operator = ( const CTILThermometerBevel & other );

public:
  virtual VCLHANDLE Get_VCL_Handle() const;

protected:
  CLPBaseClass        *m_Owner_Property;
  CTILThermometerBevel ( CLPBaseClass::*m_Property_Getter )();
  void ( CLPBaseClass::*m_Property_Setter )( CTILThermometerBevel Value );
};
//------------------------------------------------------------------------------
class CTILBasicThermometer : public CTILBasicMinMaxInstrument
{
//DOM-IGNORE-BEGIN
  typedef CTILBasicMinMaxInstrument inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // Class Properties
  class CTILThermometerIndicator &Indicator;
  class CTILThermometerBevel &Border;
  class CTULVerticalCaption &Caption;
  class CTILBasicGaugeScale &Scale;
  class CTILAnalogGaugeScaleRanges &Ranges;
  class CTLPGaugeComponentElements &Elements;

public:

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILBasicThermometer();
  virtual ~CTILBasicThermometer();
};
//------------------------------------------------------------------------------
class CTILExternalThermometer : public CTILBasicThermometer
{
//DOM-IGNORE-BEGIN
  typedef CTILBasicThermometer inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // OpenWire Pins
  CTOWInputPinProperty InputPin;

public:    // Properties
  CLPProperty<double> Value;
  CLPProperty<double> Max;
  CLPProperty<double> Min;

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILExternalThermometer();
};
//------------------------------------------------------------------------------
class CTILThermometer : public CTILExternalThermometer
{
//DOM-IGNORE-BEGIN
  typedef CTILExternalThermometer inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // Class Properties
  class CTULControlBackground &Background;

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILThermometer( HWND hParent );
  CTILThermometer();
  virtual ~CTILThermometer();
};
//------------------------------------------------------------------------------
class CTILThermometerLayer : public CTILExternalThermometer
{
//DOM-IGNORE-BEGIN
  typedef CTILExternalThermometer inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILThermometerLayer( HWND hParent );
  CTILThermometerLayer();
};
//------------------------------------------------------------------------------
class CTILBasicThermometerElement : public CTILBasicThermometer
{
//DOM-IGNORE-BEGIN
  typedef CTILBasicThermometer inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

};
//------------------------------------------------------------------------------
class CTILThermometerElement : public CTILBasicThermometerElement
{
//DOM-IGNORE-BEGIN
  typedef CTILBasicThermometerElement inherited;
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
  CTILThermometerElement( HWND hParent );
  CTILThermometerElement();
  virtual ~CTILThermometerElement();
};
//------------------------------------------------------------------------------
class CTILExternalThermometerElement : public CTILThermometerElement
{
//DOM-IGNORE-BEGIN
  typedef CTILThermometerElement inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // OpenWire Pins
  CTOWInputPinProperty InputPin;

public:    // Properties
  CLPProperty<double> Value;
  CLPProperty<double> Max;
  CLPProperty<double> Min;

public:

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILExternalThermometerElement( HWND hParent );
  CTILExternalThermometerElement();
};
//------------------------------------------------------------------------------
class CTILExternalThermometerMatrixLayer : public CTILExternalThermometerElement
{
//DOM-IGNORE-BEGIN
  typedef CTILExternalThermometerElement inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILExternalThermometerMatrixLayer( HWND hParent );
  CTILExternalThermometerMatrixLayer();
};
//------------------------------------------------------------------------------
#include <CILThermometerCode.h>
//------------------------------------------------------------------------------
#endif   // CILThermometer_H_
//------------------------------------------------------------------------------