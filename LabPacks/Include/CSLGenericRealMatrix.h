//------------------------------------------------------------------------------
//
//                    (C) Copyright Boian Mitov 2005
//                            www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CSLGenericRealMatrix_H_
#define CSLGenericRealMatrix_H_

//------------------------------------------------------------------------------
#ifndef CSLBasicGenericRealMatrix_H_
  #include <CSLBasicGenericRealMatrix.h>
#endif

#include <SLCRealMatrixBuffer.h>
//------------------------------------------------------------------------------
#ifndef CVCSignalLabPkgRAD_H_
  #include <CVCSignalLabPkgRAD.h>
#endif

//------------------------------------------------------------------------------
class CSLProcessRealMatrixEvent : public CLPBaseEventProperty
{
  typedef CLPBaseEventProperty inherited;

private:
  typedef void (__stdcall CLPComponent::*TProcessCallBackFunction)( void *Sender, TSLCRealMatrixBuffer BufferIn, TSLCRealMatrixBuffer &BufferOut, bool &SendOutputData ); 
  TProcessCallBackFunction m_CallBackFunction;
  CLPComponent *m_Instance;

public:
  template< class T > bool Set( T *Instance, void (__stdcall T::*CallBackFunction)( void *Sender, TSLCRealMatrixBuffer BufferIn, TSLCRealMatrixBuffer &BufferOut, bool &SendOutputData ) )
  {
    if( CallBackFunction == NULL )
      return Clear();

    else
      {
      m_Instance = (CLPComponent *)Instance;
      m_CallBackFunction = (TProcessCallBackFunction)CallBackFunction; 
      void (__stdcall CSLProcessRealMatrixEvent::*IntCallBackFunction)( void *Sender, TSLUniVCBufferProxy *BufferIn, TSLUniVCBufferProxy *BufferOut, BOOL *SendOutputData );
      IntCallBackFunction = &CSLProcessRealMatrixEvent::IntOnFilterEvent;
      return m_control->Object->SetEvent( m_PropertyName.c_str(), IntCallBackFunction, this );
      }
  }

private:
  void __stdcall IntOnFilterEvent( void *Sender, TSLUniVCBufferProxy *BufferIn, TSLUniVCBufferProxy *BufferOut, BOOL *SendOutputData );

public:
  __LP__CONSTRUCTORS__( CSLProcessRealMatrixEvent );

};
//------------------------------------------------------------------------------
class CTSLGenericRealMatrix : public CTSLBasicGenericRealMatrix
{
  typedef CTSLBasicGenericRealMatrix inherited;

protected:
	void *LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // Properties
  CSLProcessRealMatrixEvent OnProcessData;

public:
  void SendData( TSLCRealMatrixBuffer OutBuffer );

public:
  CTSLGenericRealMatrix();

};
//------------------------------------------------------------------------------
#include <CSLGenericRealMatrixCode.h>
//------------------------------------------------------------------------------
#endif   // CSLGenericRealMatrix_H_
//------------------------------------------------------------------------------
