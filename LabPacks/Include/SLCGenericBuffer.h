////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//     This software is supplied under the terms of a license agreement or    //
//     nondisclosure agreement with Boian Mitov and may not be copied         //
//     or disclosed except in accordance with the terms of that agreement.    //
//          Copyright(c) 2002-2011 Boian Mitov. All Rights Reserved.          //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef SLCGenericBufferH
#define SLCGenericBufferH
//---------------------------------------------------------------------------
#ifdef __BORLANDC__
  #include <SLSimpleDataBuffer.hpp>

#else   // VC++
  #include <SLVCInternalStore.h>

  #define PACKAGE

#endif

#ifdef __CLR_VER
namespace Mitov
{
namespace SignalLab
{
#endif
//---------------------------------------------------------------------------
#ifdef __CLR_VER
  #define __REF ^
  #define __IREF ^
  #define __PREF ^
  #define __CONST
  #define __OVERRIDE override
  #define __DREF ->
  #define __THIS this
  #define INTERNAL internal
  #define __CLASSDEF public ref class
  #define TSLCDataBuffer DataBuffer
  #define TSLCGenericBuffer GenericBuffer
  #define __GCNEW gcnew

#else
  #define __REF &
  #define __IREF
  #define __PREF *
  #define __CONST const
  #define __OVERRIDE
  #define __DREF .
  #define __THIS *this
  #define INTERNAL protected
  #define __CLASSDEF class PACKAGE
  #define __GCNEW

#endif

//---------------------------------------------------------------------------
#ifndef __BORLANDC__
  #define TSLGenericBuffer TSLVCSimpleGenericBuffer
#endif

#ifndef __CLR_VER
//---------------------------------------------------------------------------
class PACKAGE TSLCGenericBuffer;
//---------------------------------------------------------------------------
#else
[Serializable]
#endif
__CLASSDEF TSLCDataBuffer
{
protected:
  TSLCDataBuffer() {}

public:
  virtual ~TSLCDataBuffer() {}

#ifndef __BORLANDC__
public:
    const TSLUniVCBufferProxy *GetProxy();
#endif

public:
    virtual void *GetPasBuffer() __CONST { return NULL; }

public:
  TSLGenericBuffer *GetIntPasBuffer() __CONST { return (TSLGenericBuffer *)GetPasBuffer(); }

};
//---------------------------------------------------------------------------
#ifdef __CLR_VER
[Serializable]
#endif
__CLASSDEF TSLCGenericBuffer : public TSLCDataBuffer
{
protected:
  mutable void *FDataPtr;
  mutable unsigned int   FByteSize;
  mutable unsigned int   FSize;

protected:
  virtual void PopulateCahces() __CONST;

#ifdef __CLR_VER
public:
  TSLCGenericBuffer( bool, int Handle ) {}
  TSLCGenericBuffer( const TSLCGenericBuffer __REF other ) {}
#endif

protected:
  TSLCGenericBuffer() {}
  
public:
  void  Unique( bool PreserveData ) __CONST
    {
    if( GetIntPasBuffer()->MakeUnique( PreserveData ) )
      PopulateCahces();
    }

#ifdef __CLR_VER
public:
    property unsigned int Size{ unsigned int get() { return GetSize(); } }
#endif

public:
    virtual unsigned int GetSize() __CONST { return 0; }
};
//---------------------------------------------------------------------------
#ifdef __CLR_VER
} // namespace Mitov
} // namespace SignalLab
#endif
//---------------------------------------------------------------------------
#endif

