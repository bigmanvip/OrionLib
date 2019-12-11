//------------------------------------------------------------------------------
//
//                    (C) Copyright Boian Mitov 2005
//                            www.mitov.com
//
//------------------------------------------------------------------------------
#ifndef CSLGenericRealMatrixCode_H_
#define CSLGenericRealMatrixCode_H_

//------------------------------------------------------------------------------
inline CTSLGenericRealMatrix::CTSLGenericRealMatrix() :
  OnProcessData( GetInstance(), _T( "OnProcessData" ))

{
  LibraryHandle = ::Get_VCSignalLabPkgRAD();
  CLPComponent::OpenComponent( _T( "TSLGenericVCRealMatrix" ));
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTSLGenericRealMatrix::GetFunction( const char *function_name )
{
  TLPFunctionEntry Result = VCL_GetFunction( LibraryHandle, function_name );
  if( Result )
    return Result;

  return inherited::GetFunction( function_name );
}
//------------------------------------------------------------------------------
inline void CTSLGenericRealMatrix::SendData( TSLCRealMatrixBuffer OutBuffer )
{
  const TSLUniVCBufferProxy *ABufferProxy = OutBuffer.GetProxy();
  static void *__0_FuncPtr_ = NULL;
  if( __0_FuncPtr_ == NULL )
    __0_FuncPtr_ = (void *)( GetFunction( "@Slgenericvcrealmatrix@TSLGenericVCRealMatrix@SendData$qqrp19TSLUniVCBufferProxy" ));

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
inline void __stdcall CSLProcessRealMatrixEvent::IntOnFilterEvent( void *Sender, TSLUniVCBufferProxy *BufferIn, TSLUniVCBufferProxy *BufferOut, BOOL *SendOutputData )
{
  TSLCRealMatrixBuffer InBuffer( BufferIn );
  TSLCRealMatrixBuffer OutBuffer( BufferOut );

  bool aSendOutputData = ( *SendOutputData ) != 0;

  ( m_Instance->*m_CallBackFunction )( Sender, InBuffer, OutBuffer, aSendOutputData );

  *SendOutputData = (BOOL)aSendOutputData; 

}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
#endif   // CSLGenericRealMatrixCode_H_
//------------------------------------------------------------------------------