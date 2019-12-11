//------------------------------------------------------------------------------
//
//                    (C) Copyright Boian Mitov 2005 - 2010
//                            www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CInstrumentLabPkgRAD_H_
#define CInstrumentLabPkgRAD_H_

//------------------------------------------------------------------------------
#ifndef VCLLoaderH
  #include <VCLLoader.h>
#endif
//------------------------------------------------------------------------------
inline void *Get_InstrumentLabPkgRAD()
{
  static void *_LibraryHandle = NULL;
  if( ! _LibraryHandle )
    _LibraryHandle = VCL_LoadLibrary( "InstrumentLabPkgD15.bpl" );

  return _LibraryHandle;
}
//------------------------------------------------------------------------------
#endif   // CInstrumentLabPkgRAD_H_
//------------------------------------------------------------------------------
