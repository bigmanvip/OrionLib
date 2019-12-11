//------------------------------------------------------------------------------
//
//                    (C) Copyright Boian Mitov 2005
//                            www.mitov.com
//
//------------------------------------------------------------------------------
#ifndef CSLGenericComplexCode_H_
#define CSLGenericComplexCode_H_

//------------------------------------------------------------------------------
inline CTSLGenericComplex::CTSLGenericComplex() :
  OnProcessData( GetInstance(), _T( "OnProcessData" ))

{
  LibraryHandle = ::Get_VCSignalLabPkgRAD();
  CLPComponent::OpenComponent( _T( "TSLGenericVCComplex" ));
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTSLGenericComplex::GetFunction( const char *function_name )
{
  TLPFunctionEntry Result = VCL_GetFunction( LibraryHandle, function_name );
  if( Result )
    return Result;

  return inherited::GetFunction( function_name );
}
//------------------------------------------------------------------------------
inline void CTSLGenericComplex::SendData( TSLCComplexBuffer OutBuffer )
{
  const TSLUniVCBufferProxy *ABufferProxy = OutBuffer.GetProxy();
  static void *__0_FuncPtr_ = NULL;
  if( __0_FuncPtr_ == NULL )
    __0_FuncPtr_ = (void *)( GetFunction( "@Slgenericvccomplex@TSLGenericVCComplex@SendData$qqrp19TSLUniVCBufferProxy" ));

  void *__0_ThisPtr_ = Get_VCL_Handle();

  if( __0_FuncPtr_ )
    {
    const void * __1_Param1 = ABufferProxy;

    _asm
      {
      push eax
      push edx
      mov edx,__1_Param1
      mov  eax,dword ptr [ __0_ThisPtr_ ]
      call dword ptr [ __0_FuncPtr_ ]
      pop  edx
      pop  eax
      }
    }

}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
inline void __stdcall CSLProcessComplexEvent::IntOnFilterEvent( void *Sender, TSLUniVCBufferProxy *BufferIn, TSLUniVCBufferProxy *BufferOut, BOOL *SendOutputData )
{
  TSLCComplexBuffer InBuffer( BufferIn );
  TSLCComplexBuffer OutBuffer( BufferOut );

  bool aSendOutputData = ( *SendOutputData ) != 0;

  ( m_Instance->*m_CallBackFunction )( Sender, InBuffer, OutBuffer, aSendOutputData );

  *SendOutputData = (BOOL)aSendOutputData; 

}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
#endif   // CSLGenericComplexCode_H_
//------------------------------------------------------------------------------
