//------------------------------------------------------------------------------
//
//                    (C) Copyright Boian Mitov 2005
//                            www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CSLGenericFilter_H_
#define CSLGenericFilter_H_

//------------------------------------------------------------------------------
#ifndef CSLBasicGenericFilter_H_
  #include <CSLBasicGenericFilter.h>
#endif

#include <SLCBlockBuffer.h>
//------------------------------------------------------------------------------
#ifndef CVCSignalLabPkgRAD_H_
  #include <CVCSignalLabPkgRAD.h>
#endif

//------------------------------------------------------------------------------
class CSLProcessBlockEvent : public CLPBaseEventProperty
{
  typedef CLPBaseEventProperty inherited;

private:
  typedef void (__stdcall CLPComponent::*TProcessCallBackFunction)( void *Sender, TSLCBlockBuffer BufferIn, TSLCBlockBuffer &BufferOut, bool &SendOutputData ); 
  TProcessCallBackFunction m_CallBackFunction;
  CLPComponent *m_Instance;

public:
  template< class T > bool Set( T *Instance, void (__stdcall T::*CallBackFunction)( void *Sender, TSLCBlockBuffer BufferIn, TSLCBlockBuffer &BufferOut, bool &SendOutputData ) )
  {
    if( CallBackFunction == NULL )
      return Clear();

    else
      {
      m_Instance = (CLPComponent *)Instance;
      m_CallBackFunction = (TProcessCallBackFunction)CallBackFunction; 
      void (__stdcall CSLProcessBlockEvent::*IntCallBackFunction)( void *Sender, TSLUniVCBufferProxy *BufferIn, TSLUniVCBufferProxy *BufferOut, BOOL *SendOutputData );
      IntCallBackFunction = &CSLProcessBlockEvent::IntOnFilterEvent;
      return m_control->Object->SetEvent( m_PropertyName.c_str(), IntCallBackFunction, this );
      }
  }

private:
  void __stdcall IntOnFilterEvent( void *Sender, TSLUniVCBufferProxy *BufferIn, TSLUniVCBufferProxy *BufferOut, BOOL *SendOutputData );

public:
  __LP__CONSTRUCTORS__( CSLProcessBlockEvent );

};
//------------------------------------------------------------------------------
class CTSLGenericFilter : public CTSLBasicStartGenericFilter
{
  typedef CTSLBasicStartGenericFilter inherited;

protected:
	void *LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // Properties
  CSLProcessBlockEvent OnProcessData;

public:
  void SendData( TSLCBlockBuffer OutBuffer );

public:
  CTSLGenericFilter();

};
//------------------------------------------------------------------------------
#include <CSLGenericFilterCode.h>
//------------------------------------------------------------------------------
#endif   // CSLGenericFilter_H_
//------------------------------------------------------------------------------
