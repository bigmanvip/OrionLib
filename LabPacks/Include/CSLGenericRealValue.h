//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CSLGenericRealValue_H_
#define CSLGenericRealValue_H_

//------------------------------------------------------------------------------
#ifndef VCLSupportH
  #include <VCLSupport.h>
#endif

#ifndef CSignalLabAdditionalPkgRAD_H_
  #include <CSignalLabAdditionalPkgRAD.h>
#endif
#ifndef CLPComponent_H_
  #include <CLPComponent.h>
#endif
//------------------------------------------------------------------------------




//------------------------------------------------------------------------------
class CTSLGenericRealValue : public CLPComponent
{
//DOM-IGNORE-BEGIN
  typedef CLPComponent inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // OpenWire Pins
  CTOWInputPinProperty InputPin;
  CTOWOutputPinProperty OutputPin;

public:    // Events
//  void __stdcall OnProcessData(VCLHANDLE Sender, double InValue, double & OutValue, bool & SendOutputData);
  CLPEventProperty_4<16, void, VCLHANDLE, double, double &, bool &> OnProcessData;

public:    // Properties
  CLPEnumProperty<CTSLSynchronizeType> SynchronizeType;
  CLPAccessProperty<CTSLGenericRealValue,double> Value;

protected:
  double GetValue();

public:
  void SetValue( double AValue );

public:
  CTSLGenericRealValue();
};
//------------------------------------------------------------------------------
#include <CSLGenericRealValueCode.h>
//------------------------------------------------------------------------------
#endif   // CSLGenericRealValue_H_
//------------------------------------------------------------------------------