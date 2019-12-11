//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CLPControlDrawLayers_H_
#define CLPControlDrawLayers_H_

//------------------------------------------------------------------------------
#ifndef VCLSupportH
  #include <VCLSupport.h>
#endif

#ifndef CSignalLabBasicPkgRAD_H_
  #include <CSignalLabBasicPkgRAD.h>
#endif
#ifndef CSLControlCollection_H_
  #include <CSLControlCollection.h>
#endif
#ifndef CLPComponent_H_
  #include <CLPComponent.h>
#endif
#ifndef CLPDrawLayers_H_
  #include <CLPDrawLayers.h>
#endif
//------------------------------------------------------------------------------




//------------------------------------------------------------------------------
class CTLPControlDrawLayer : public CTSLCustomControlItem
{
//DOM-IGNORE-BEGIN
  typedef CTSLCustomControlItem inherited;
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
#include <CLPControlDrawLayersCode.h>
//------------------------------------------------------------------------------
#endif   // CLPControlDrawLayers_H_
//------------------------------------------------------------------------------