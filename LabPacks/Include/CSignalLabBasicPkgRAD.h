//------------------------------------------------------------------------------
//
//                    (C) Copyright Boian Mitov 2005 - 2010
//                            www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CSignalLabBasicPkgRAD_H_
#define CSignalLabBasicPkgRAD_H_

//------------------------------------------------------------------------------
#ifndef VCLLoaderH
  #include <VCLLoader.h>
#endif
//------------------------------------------------------------------------------
inline VCLHANDLE Get_SignalLabBasicPkgRAD()
{
	static VCLHANDLE _LibraryHandle = 0;
	if( ! _LibraryHandle )
		_LibraryHandle = (VCLHANDLE)VCL_LoadLibrary( "SignalLabBasicPkgD15.bpl" );

	return _LibraryHandle;
}
//------------------------------------------------------------------------------
#endif   // CSignalLabBasicPkgRAD_H_
//------------------------------------------------------------------------------
