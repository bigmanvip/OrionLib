//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CILLevelLedCode_H_
#define CILLevelLedCode_H_

#pragma optimize( "", off )
//------------------------------------------------------------------------------
inline CTILBasicLevelLed::CTILBasicLevelLed() :
  Colors( *new CTLPGPColorItems( GetInstance(), _T( "Colors" ))),
  EnablePin( GetInstance(), _T( "EnablePin" ) )
{
}
//------------------------------------------------------------------------------
inline void CTILBasicLevelLed::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
}
//------------------------------------------------------------------------------
inline void CTILBasicLevelLed::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
}
//------------------------------------------------------------------------------
inline CTILBasicLevelLed::~CTILBasicLevelLed()
{
  delete &Colors;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILBasicLevelLed::GetFunction( const char *function_name )
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
inline CTILExternalLevelLed::CTILExternalLevelLed() :
  Value( GetInstance(), _T( "Value" ) ),
  Max( GetInstance(), _T( "Max" ) ),
  Min( GetInstance(), _T( "Min" ) ),
  Elements( *new CTLPGaugeComponentElements( GetInstance(), _T( "Elements" ))),
  InputPin( GetInstance(), _T( "InputPin" ) )
{
}
//------------------------------------------------------------------------------
inline void CTILExternalLevelLed::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
}
//------------------------------------------------------------------------------
inline void CTILExternalLevelLed::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
}
//------------------------------------------------------------------------------
inline CTILExternalLevelLed::~CTILExternalLevelLed()
{
  delete &Elements;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILExternalLevelLed::GetFunction( const char *function_name )
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
inline CTILLevelLed::CTILLevelLed( HWND hParent ) :
  Background( *new CTULControlBackground( GetInstance(), _T( "Background" )))
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILLevelLed::CTILLevelLed() :
  Background( *new CTULControlBackground( GetInstance(), _T( "Background" )))
{
}
//------------------------------------------------------------------------------
inline void CTILLevelLed::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILLevelLed" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILLevelLed::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILLevelLed" ), hParent );
}
//------------------------------------------------------------------------------
inline CTILLevelLed::~CTILLevelLed()
{
  delete &Background;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILLevelLed::GetFunction( const char *function_name )
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
inline CTILLevelLedLayer::CTILLevelLedLayer( HWND hParent )
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILLevelLedLayer::CTILLevelLedLayer()
{
}
//------------------------------------------------------------------------------
inline void CTILLevelLedLayer::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILLevelLedLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILLevelLedLayer::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILLevelLedLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILLevelLedLayer::GetFunction( const char *function_name )
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
inline void CTILBasicLevelLedElement::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
}
//------------------------------------------------------------------------------
inline void CTILBasicLevelLedElement::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILBasicLevelLedElement::GetFunction( const char *function_name )
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
inline CTILLevelLedElement::CTILLevelLedElement( HWND hParent ) :
  Position( *new CTULElementOffsets( GetInstance(), _T( "Position" ))),
  Size( *new CTULElement2DSize( GetInstance(), _T( "Size" )))
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILLevelLedElement::CTILLevelLedElement() :
  Position( *new CTULElementOffsets( GetInstance(), _T( "Position" ))),
  Size( *new CTULElement2DSize( GetInstance(), _T( "Size" )))
{
}
//------------------------------------------------------------------------------
inline void CTILLevelLedElement::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILLevelLedElement" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILLevelLedElement::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILLevelLedElement" ), hParent );
}
//------------------------------------------------------------------------------
inline CTILLevelLedElement::~CTILLevelLedElement()
{
  delete &Position;
  delete &Size;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILLevelLedElement::GetFunction( const char *function_name )
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
inline CTILExternalLevelLedElement::CTILExternalLevelLedElement( HWND hParent ) :
  Position( *new CTULElementOffsets( GetInstance(), _T( "Position" ))),
  Size( *new CTULElement2DSize( GetInstance(), _T( "Size" )))
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILExternalLevelLedElement::CTILExternalLevelLedElement() :
  Position( *new CTULElementOffsets( GetInstance(), _T( "Position" ))),
  Size( *new CTULElement2DSize( GetInstance(), _T( "Size" )))
{
}
//------------------------------------------------------------------------------
inline void CTILExternalLevelLedElement::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILExternalLevelLedElement" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILExternalLevelLedElement::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILExternalLevelLedElement" ), hParent );
}
//------------------------------------------------------------------------------
inline CTILExternalLevelLedElement::~CTILExternalLevelLedElement()
{
  delete &Position;
  delete &Size;
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILExternalLevelLedElement::GetFunction( const char *function_name )
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
inline CTILExternalLevelLedMatrixLayer::CTILExternalLevelLedMatrixLayer( HWND hParent )
{
  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  Open( hParent );
}
//------------------------------------------------------------------------------
inline CTILExternalLevelLedMatrixLayer::CTILExternalLevelLedMatrixLayer()
{
}
//------------------------------------------------------------------------------
inline void CTILExternalLevelLedMatrixLayer::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILExternalLevelLedMatrixLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline void CTILExternalLevelLedMatrixLayer::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_InstrumentLabPkgRAD();
  CLPControl::OpenControl( _T( "TILExternalLevelLedMatrixLayer" ), hParent );
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTILExternalLevelLedMatrixLayer::GetFunction( const char *function_name )
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
#endif   // CILLevelLedCode_H_
//------------------------------------------------------------------------------
