//------------------------------------------------------------------------------
//
//                    (C) Copyright Boian Mitov 2005 - 2010
//                            www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CUserLabBasicPkgRAD_H_
#define CUserLabBasicPkgRAD_H_

//------------------------------------------------------------------------------
#ifndef VCLLoaderH
  #include <VCLLoader.h>
#endif
//------------------------------------------------------------------------------
inline VCLHANDLE Get_UserLabBasicPkgRAD()
{
	static VCLHANDLE _LibraryHandle = 0;
	if( ! _LibraryHandle )
		_LibraryHandle = (VCLHANDLE)VCL_LoadLibrary( "UserLabBasicPkgD15.bpl" );

	return _LibraryHandle;
}
//------------------------------------------------------------------------------
#endif   // CUserLabBasicPkgRAD_H_
//------------------------------------------------------------------------------
