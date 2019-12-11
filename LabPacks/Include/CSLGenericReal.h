//------------------------------------------------------------------------------
//
//                    (C) Copyright Boian Mitov 2005
//                            www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CSLGenericReal_H_
#define CSLGenericReal_H_

//------------------------------------------------------------------------------
#ifndef CSLBasicGenericReal_H_
  #include <CSLBasicGenericReal.h>
#endif

#include <SLCRealBuffer.h>
//------------------------------------------------------------------------------
#ifndef CVCSignalLabPkgRAD_H_
  #include <CVCSignalLabPkgRAD.h>
#endif

//------------------------------------------------------------------------------
class CSLProcessRealEvent : public CLPBaseEventProperty
{
  typedef CLPBaseEventProperty inherited;

private:
  typedef void (__stdcall CLPComponent::*TProcessCallBackFunction)( void *Sender, TSLCRealBuffer BufferIn, TSLCRealBuffer &BufferOut, bool &SendOutputData ); 
  TProcessCallBackFunction m_CallBackFunction;
  CLPComponent *m_Instance;

public:
  template< class T > bool Set( T *Instance, void (__stdcall T::*CallBackFunction)( void *Sender, TSLCRealBuffer BufferIn, TSLCRealBuffer &BufferOut, bool &SendOutputData ) )
  {
    if( CallBackFunction == NULL )
      return Clear();

    else
      {
      m_Instance = (CLPComponent *)Instance;
      m_CallBackFunction = (TProcessCallBackFunction)CallBackFunction; 
      void (__stdcall CSLProcessRealEvent::*IntCallBackFunction)( void *Sender, TSLUniVCBufferProxy *BufferIn, TSLUniVCBufferProxy *BufferOut, BOOL *SendOutputData );
      IntCallBackFunction = &CSLProcessRealEvent::IntOnFilterEvent;
      return m_control->Object->SetEvent( m_PropertyName.c_str(), IntCallBackFunction, this );
      }
  }

private:
  void __stdcall IntOnFilterEvent( void *Sender, TSLUniVCBufferProxy *BufferIn, TSLUniVCBufferProxy *BufferOut, BOOL *SendOutputData );

public:
  __LP__CONSTRUCTORS__( CSLProcessRealEvent );

};
//------------------------------------------------------------------------------
class CTSLGenericReal : public CTSLBasicStartGenericReal
{
  typedef CTSLBasicStartGenericReal inherited;

protected:
	void *LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // Properties
  CSLProcessRealEvent OnProcessData;

public:
  void SendData( TSLCRealBuffer OutBuffer );

public:
  CTSLGenericReal();

};
//------------------------------------------------------------------------------
#include <CSLGenericRealCode.h>
//------------------------------------------------------------------------------
#endif   // CSLGenericReal_H_
//------------------------------------------------------------------------------
