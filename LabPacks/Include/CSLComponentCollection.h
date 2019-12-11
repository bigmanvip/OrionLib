//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CSLComponentCollection_H_
#define CSLComponentCollection_H_

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
//------------------------------------------------------------------------------




//------------------------------------------------------------------------------
class CTSLComponentItem : public CLPComponent
{
//DOM-IGNORE-BEGIN
  typedef CLPComponent inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // Properties
  CLPAccessProperty<CTSLComponentItem,int> Index;

protected:
  int GetIndex();
  void SetIndex( int AValue );

public:
  virtual bool GetHasEnable();
  virtual bool GetCanDisable();

public:
  CTSLComponentItem();
};
//------------------------------------------------------------------------------
#include <CSLComponentCollectionCode.h>
//------------------------------------------------------------------------------
#endif   // CSLComponentCollection_H_
//------------------------------------------------------------------------------