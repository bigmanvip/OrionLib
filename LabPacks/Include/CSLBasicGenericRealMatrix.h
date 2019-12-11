//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CSLBasicGenericRealMatrix_H_
#define CSLBasicGenericRealMatrix_H_

//------------------------------------------------------------------------------
#ifndef VCLSupportH
  #include <VCLSupport.h>
#endif

#ifndef CSignalLabBasicPkgRAD_H_
  #include <CSignalLabBasicPkgRAD.h>
#endif
#ifndef CLPComponent_H_
  #include <CLPComponent.h>
#endif
#ifndef CSLStreamTypes_H_
  #include <CSLStreamTypes.h>
#endif
#ifndef CSLCommonFilter_H_
  #include <CSLCommonFilter.h>
#endif
//------------------------------------------------------------------------------




//------------------------------------------------------------------------------
class CTSLCommonRealMatrixFilter : public CTSLBasicCommonFilter
{
//DOM-IGNORE-BEGIN
  typedef CTSLBasicCommonFilter inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // OpenWire Pins
  CTOWOutputPinProperty OutputPin;
  CTOWInputPinProperty InputPin;

public:
  CTSLCommonRealMatrixFilter();
};
//------------------------------------------------------------------------------
class CTSLBasicGenericRealMatrix : public CTSLCommonRealMatrixFilter
{
//DOM-IGNORE-BEGIN
  typedef CTSLCommonRealMatrixFilter inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // Events
//  void __stdcall OnStart(VCLHANDLE Sender);
  CLPEventProperty_1<0, void, VCLHANDLE> OnStart;
//  void __stdcall OnStop(VCLHANDLE Sender);
  CLPEventProperty_1<0, void, VCLHANDLE> OnStop;

public:    // Properties
  CLPEnumProperty<CTSLSynchronizeType> SynchronizeType;

public:
  void SendStartCommand();
  void SendStopCommand();
  void ClearQueue();

public:
  CTSLBasicGenericRealMatrix();
};
//------------------------------------------------------------------------------
#include <CSLBasicGenericRealMatrixCode.h>
//------------------------------------------------------------------------------
#endif   // CSLBasicGenericRealMatrix_H_
//------------------------------------------------------------------------------
