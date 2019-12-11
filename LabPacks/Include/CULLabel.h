//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CULLabel_H_
#define CULLabel_H_

//------------------------------------------------------------------------------
#ifndef VCLSupportH
  #include <VCLSupport.h>
#endif

#ifndef CUserLabBasicPkgRAD_H_
  #include <CUserLabBasicPkgRAD.h>
#endif
#ifndef CULBasicControl_H_
  #include <CULBasicControl.h>
#endif
#ifndef CLPTransparentControl_H_
  #include <CLPTransparentControl.h>
#endif
#ifndef CSLControlCollection_H_
  #include <CSLControlCollection.h>
#endif
#ifndef CSLStreamTypes_H_
  #include <CSLStreamTypes.h>
#endif
#ifndef CLPGDIPlusProperties_H_
  #include <CLPGDIPlusProperties.h>
#endif
#ifndef CLPComponent_H_
  #include <CLPComponent.h>
#endif
//------------------------------------------------------------------------------

enum CTULTextStretchMode { smNone, smSqueeze, smStretch };



//------------------------------------------------------------------------------
class CTULBasicLabel : public CTULBasicControl
{
//DOM-IGNORE-BEGIN
  typedef CTULBasicControl inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // Class Properties
  class CTULControlFont &Font;

public:    // Properties
  CLPProperty<double> Angle;
  CLPEnumProperty<CTULTextStretchMode> StretchMode;

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTULBasicLabel();
  virtual ~CTULBasicLabel();
};
//------------------------------------------------------------------------------
class CTULLabel : public CTULBasicLabel
{
//DOM-IGNORE-BEGIN
  typedef CTULBasicLabel inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // OpenWire Pins
  CTOWInputPinProperty InputPin;

public:    // Properties
  CLPProperty<CTString> Caption;
  CLPProperty<CTColor> Color;

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTULLabel( HWND hParent );
  CTULLabel();
};
//------------------------------------------------------------------------------
class CTULLabelLayer : public CTULLabel
{
//DOM-IGNORE-BEGIN
  typedef CTULLabel inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTULLabelLayer( HWND hParent );
  CTULLabelLayer();
};
//------------------------------------------------------------------------------
class CTULBasicLabelElement : public CTULBasicLabel
{
//DOM-IGNORE-BEGIN
  typedef CTULBasicLabel inherited;
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
  CTULBasicLabelElement();
  virtual ~CTULBasicLabelElement();
};
//------------------------------------------------------------------------------
class CTULAnalogLabelElement : public CTULBasicLabelElement
{
//DOM-IGNORE-BEGIN
  typedef CTULBasicLabelElement inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTULAnalogLabelElement( HWND hParent );
  CTULAnalogLabelElement();
};
//------------------------------------------------------------------------------
class CTULTimeLabelElement : public CTULBasicLabelElement
{
//DOM-IGNORE-BEGIN
  typedef CTULBasicLabelElement inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTULTimeLabelElement( HWND hParent );
  CTULTimeLabelElement();
};
//------------------------------------------------------------------------------
class CTULExternalLabelElement : public CTULBasicLabelElement
{
//DOM-IGNORE-BEGIN
  typedef CTULBasicLabelElement inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // OpenWire Pins
  CTOWInputPinProperty InputPin;

public:    // Properties
  CLPProperty<CTString> Caption;

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTULExternalLabelElement( HWND hParent );
  CTULExternalLabelElement();
};
//------------------------------------------------------------------------------
class CTULExternalLabelMatrixLayer : public CTULExternalLabelElement
{
//DOM-IGNORE-BEGIN
  typedef CTULExternalLabelElement inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTULExternalLabelMatrixLayer( HWND hParent );
  CTULExternalLabelMatrixLayer();
};
//------------------------------------------------------------------------------
#include <CULLabelCode.h>
//------------------------------------------------------------------------------
#endif   // CULLabel_H_
//------------------------------------------------------------------------------