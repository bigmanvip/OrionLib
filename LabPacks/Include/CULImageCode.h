//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CULImageCode_H_
#define CULImageCode_H_

#pragma optimize( "", off )
//------------------------------------------------------------------------------
inline CTULImage::CTULImage( HWND hParent ) :
  Picture( *new CTLPGPImage( GetInstance(), _T( "Picture" ))),
  Stretched( GetInstance(), _T( "Stretched" ) ),
  Proportional( GetInstance(), _T( "Proportional" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  AntiAlias( GetInstance(), _T( "AntiAlias" ) )
{
  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTULImage::CTULImage() :
  Picture( *new CTLPGPImage( GetInstance(), _T( "Picture" ))),
  Stretched( GetInstance(), _T( "Stretched" ) ),
  Proportional( GetInstance(), _T( "Proportional" ) ),
  Color( GetInstance(), _T( "Color" ) ),
  AntiAlias( GetInstance(), _T( "AntiAlias" ) )
{
}
//------------------------------------------------------------------------------
inline void CTULImage::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULImage" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTULImage::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULImage" ), hParent );
}
//------------------------------------------------------------------------------
inline CTULImage::~CTULImage()
{
  delete &Picture;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTULImage::GetFunction( const char *function_name )
{
  TLPFunctionEntry Result = VCL_GetFunction( LibraryHandle, function_name );
  if( Result )
    return Result;

  return inherited::GetFunction( function_name );
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
inline CTULImageLayer::CTULImageLayer( HWND hParent )
{
  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTULImageLayer::CTULImageLayer()
{
}
//------------------------------------------------------------------------------
inline void CTULImageLayer::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULImageLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTULImageLayer::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULImageLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTULImageLayer::GetFunction( const char *function_name )
{
  TLPFunctionEntry Result = VCL_GetFunction( LibraryHandle, function_name );
  if( Result )
    return Result;

  return inherited::GetFunction( function_name );
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
inline CTULImageElement::CTULImageElement( HWND hParent ) :
  Position( *new CTULElementOffsets( GetInstance(), _T( "Position" ))),
  Size( *new CTULElement2DSize( GetInstance(), _T( "Size" )))
{
  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTULImageElement::CTULImageElement() :
  Position( *new CTULElementOffsets( GetInstance(), _T( "Position" ))),
  Size( *new CTULElement2DSize( GetInstance(), _T( "Size" )))
{
}
//------------------------------------------------------------------------------
inline void CTULImageElement::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULImageElement" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTULImageElement::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULImageElement" ), hParent );
}
//------------------------------------------------------------------------------
inline CTULImageElement::~CTULImageElement()
{
  delete &Position;
  delete &Size;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTULImageElement::GetFunction( const char *function_name )
{
  TLPFunctionEntry Result = VCL_GetFunction( LibraryHandle, function_name );
  if( Result )
    return Result;

  return inherited::GetFunction( function_name );
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
inline CTULImageMatrixLayer::CTULImageMatrixLayer( HWND hParent )
{
  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTULImageMatrixLayer::CTULImageMatrixLayer()
{
}
//------------------------------------------------------------------------------
inline void CTULImageMatrixLayer::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULImageMatrixLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTULImageMatrixLayer::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULImageMatrixLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTULImageMatrixLayer::GetFunction( const char *function_name )
{
  TLPFunctionEntry Result = VCL_GetFunction( LibraryHandle, function_name );
  if( Result )
    return Result;

  return inherited::GetFunction( function_name );
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
#pragma optimize( "", on )
#endif   // CULImageCode_H_
//------------------------------------------------------------------------------
