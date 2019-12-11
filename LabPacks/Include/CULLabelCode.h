//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CULLabelCode_H_
#define CULLabelCode_H_

#pragma optimize( "", off )
//------------------------------------------------------------------------------
inline CTULBasicLabel::CTULBasicLabel() :
  Angle( GetInstance(), _T( "Angle" ) ),
  Font( *new CTULControlFont( GetInstance(), _T( "Font" ))),
  StretchMode( GetInstance(), _T( "StretchMode" ) )
{
}
//------------------------------------------------------------------------------
inline void CTULBasicLabel::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
}
//------------------------------------------------------------------------------
inline void CTULBasicLabel::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
}
//------------------------------------------------------------------------------
inline CTULBasicLabel::~CTULBasicLabel()
{
  delete &Font;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTULBasicLabel::GetFunction( const char *function_name )
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
inline CTULLabel::CTULLabel( HWND hParent ) :
  InputPin( GetInstance(), _T( "InputPin" ) ),
  Caption( GetInstance(), _T( "Caption" ) ),
  Color( GetInstance(), _T( "Color" ) )
{
  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTULLabel::CTULLabel() :
  InputPin( GetInstance(), _T( "InputPin" ) ),
  Caption( GetInstance(), _T( "Caption" ) ),
  Color( GetInstance(), _T( "Color" ) )
{
}
//------------------------------------------------------------------------------
inline void CTULLabel::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULLabel" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTULLabel::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULLabel" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTULLabel::GetFunction( const char *function_name )
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
inline CTULLabelLayer::CTULLabelLayer( HWND hParent )
{
  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTULLabelLayer::CTULLabelLayer()
{
}
//------------------------------------------------------------------------------
inline void CTULLabelLayer::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULLabelLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTULLabelLayer::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULLabelLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTULLabelLayer::GetFunction( const char *function_name )
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
inline CTULBasicLabelElement::CTULBasicLabelElement() :
  Position( *new CTULElementOffsets( GetInstance(), _T( "Position" ))),
  Size( *new CTULElement2DSize( GetInstance(), _T( "Size" )))
{
}
//------------------------------------------------------------------------------
inline void CTULBasicLabelElement::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
}
//------------------------------------------------------------------------------
inline void CTULBasicLabelElement::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
}
//------------------------------------------------------------------------------
inline CTULBasicLabelElement::~CTULBasicLabelElement()
{
  delete &Position;
  delete &Size;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTULBasicLabelElement::GetFunction( const char *function_name )
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
inline CTULAnalogLabelElement::CTULAnalogLabelElement( HWND hParent )
{
  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTULAnalogLabelElement::CTULAnalogLabelElement()
{
}
//------------------------------------------------------------------------------
inline void CTULAnalogLabelElement::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULAnalogLabelElement" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTULAnalogLabelElement::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULAnalogLabelElement" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTULAnalogLabelElement::GetFunction( const char *function_name )
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
inline CTULTimeLabelElement::CTULTimeLabelElement( HWND hParent )
{
  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTULTimeLabelElement::CTULTimeLabelElement()
{
}
//------------------------------------------------------------------------------
inline void CTULTimeLabelElement::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULTimeLabelElement" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTULTimeLabelElement::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULTimeLabelElement" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTULTimeLabelElement::GetFunction( const char *function_name )
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
inline CTULExternalLabelElement::CTULExternalLabelElement( HWND hParent ) :
  InputPin( GetInstance(), _T( "InputPin" ) ),
  Caption( GetInstance(), _T( "Caption" ) )
{
  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTULExternalLabelElement::CTULExternalLabelElement() :
  InputPin( GetInstance(), _T( "InputPin" ) ),
  Caption( GetInstance(), _T( "Caption" ) )
{
}
//------------------------------------------------------------------------------
inline void CTULExternalLabelElement::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULExternalLabelElement" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTULExternalLabelElement::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULExternalLabelElement" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTULExternalLabelElement::GetFunction( const char *function_name )
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
inline CTULExternalLabelMatrixLayer::CTULExternalLabelMatrixLayer( HWND hParent )
{
  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTULExternalLabelMatrixLayer::CTULExternalLabelMatrixLayer()
{
}
//------------------------------------------------------------------------------
inline void CTULExternalLabelMatrixLayer::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULExternalLabelMatrixLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTULExternalLabelMatrixLayer::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_UserLabBasicPkgRAD();
  CLPControl::OpenControl( _T( "TULExternalLabelMatrixLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTULExternalLabelMatrixLayer::GetFunction( const char *function_name )
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
#endif   // CULLabelCode_H_
//------------------------------------------------------------------------------
