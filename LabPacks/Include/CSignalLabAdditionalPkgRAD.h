//------------------------------------------------------------------------------
//
//                    (C) Copyright Boian Mitov 2005 - 2010
//                            www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CSignalLabAdditionalPkgRAD_H_
#define CSignalLabAdditionalPkgRAD_H_

//------------------------------------------------------------------------------
#ifndef VCLLoaderH
  #include <VCLLoader.h>
#endif
//------------------------------------------------------------------------------
inline void *Get_SignalLabAdditionalPkgRAD()
{
  static void *_LibraryHandle = NULL;
  if( ! _LibraryHandle )
    _LibraryHandle = VCL_LoadLibrary( "SignalLabAdditionalPkgD15.bpl" );

  return _LibraryHandle;
}
//------------------------------------------------------------------------------
#endif   // CSignalLabAdditionalPkgRAD_H_
//------------------------------------------------------------------------------
