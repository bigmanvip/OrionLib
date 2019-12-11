//---------------------------------------------------------------------------
#ifndef SLVCInternalStoreH
#define SLVCInternalStoreH
//---------------------------------------------------------------------------
#include <SLBufferVCProxy.h>

#ifdef __CLR_VER
  #include <VCLNETSupport.h>
#endif

//---------------------------------------------------------------------------
#ifndef __CLR_VER
  #if _MSC_VER >= 1600 //Visual C++ 2010
    #define _COMP_EXT_ "2010"
  #elif _MSC_VER >= 1500 //Visual C++ 2008
    #define _COMP_EXT_ "2008"
  #elif _MSC_VER >= 1400 //Visual C++ 2005
    #define _COMP_EXT_ "2005"
  #elif _MSC_VER >= 1300 //Visual c++ .NET 2003
    #define _COMP_EXT_ "2003"
  #else
    #define _COMP_EXT_
  #endif

  #ifdef _DLL  
    // Dynamic linked
    #ifdef _DEBUG
      #pragma comment(lib, "VCSignalLabLib" _COMP_EXT_ "_DLL_Debug.lib")
    #else
      #pragma comment(lib, "VCSignalLabLib" _COMP_EXT_ "_DLL.lib")
    #endif // _DEBUG

  #else  
    // Static linked
    #ifdef _DEBUG
      #pragma comment(lib, "VCSignalLabLib" _COMP_EXT_ "_Debug.lib")
    #else  
      #pragma comment(lib, "VCSignalLabLib" _COMP_EXT_ ".lib")
    #endif // _DEBUG

  #endif
#endif
//---------------------------------------------------------------------------
#ifdef __CLR_VER
  #define __VCL_LOAD_LIBRARY__ Vcl::Native::Access::VCL_LoadLibrary
  #define __VCL_GET_FUNCTION__ Vcl::Native::Access::VCL_GetFunction
  #define TOWRealComplex Mitov::SignalLab::RealComplex
namespace Mitov
{
namespace SignalLab
{
#ifdef __MAIN__
[Serializable]
public value class RealComplex
{   
public:
    double Real;
    double Imaginary;
};
#endif
}
}
#else
  #define __VCL_LOAD_LIBRARY__ VCL_LoadLibrary
  #define __VCL_GET_FUNCTION__ VCL_GetFunction

struct TOWRealComplex
{
    double Real;
    double Imaginary;
};
#endif
//---------------------------------------------------------------------------
typedef double *PReal;
typedef int *PInteger;
typedef BYTE  *PByte;
typedef TOWRealComplex *POWRealComplex;
//---------------------------------------------------------------------------
#ifndef __CLR_VER
extern void *VC_VLCreateBitmap( HBITMAP ABitmap );
extern void *VC_VLCreateBitmapData( int AWidth, int AHeight, void *AData );
extern HBITMAP VC_VLDestroyBitmap( void *ABufferPtr );
#endif
//---------------------------------------------------------------------------

#ifdef __CLR_VER
#define SL_DLL_Export
/*
#ifdef __VCL__PROJECT_SignalLabBasicPkgRAD__
  #define SL_DLL_Export __declspec(dllexport)
#else
  #define SL_DLL_Export __declspec(dllimport)
#endif
*/
class SL_DLL_Export TSLVCSimpleGenericBuffer
{
#else
class TSLVCSimpleGenericBuffer
{
    friend class TSLCGenericBuffer;
#endif

public:
    TSLVCSimpleGenericBuffer( TSLVCSimpleGenericBuffer *Value );
    TSLVCSimpleGenericBuffer( TSLUniVCBufferProxy *AProxy );

    virtual ~TSLVCSimpleGenericBuffer(void);

public:
    const TSLUniVCBufferProxy *pProxy;

protected:
    long FRefCount;

protected:
    TSLUniMemoryVCBufferProxyMethods *ProxyMethods() { return (TSLUniMemoryVCBufferProxyMethods *)pProxy->Methods; }

public:
    void _AddRef()
    {
        InterlockedIncrement( &FRefCount );
    }

    void _Release()
    {
        if( InterlockedDecrement( &FRefCount ) == 0 )
            delete this;

    }

public:
    virtual void *GetInterfaceProxy() { return (void *)&pProxy->RefInstance; }
    void Assign( const TSLVCSimpleGenericBuffer *OtherBuffer );
    virtual const BYTE * ByteRead(void)
    {
        return (BYTE *)ProxyMethods()->Iherited.ByteRead( pProxy->Instance );
    }

    virtual BYTE * ByteWrite(void)
    {
        return (BYTE *)ProxyMethods()->Iherited.ByteWrite( pProxy->Instance );
    }

    virtual BYTE * ByteModify(void)
    {
        return (BYTE *)ProxyMethods()->Iherited.ByteModify( pProxy->Instance );
    }

    unsigned GetByteSize(void)
    {
        return ProxyMethods()->Iherited.GetByteSize( pProxy->Instance );
    }

    unsigned GetSize(void)
    {
        return ProxyMethods()->Iherited.GetSize( pProxy->Instance );
    }

    virtual bool MakeUnique( bool PreserveData )
    {
        return ProxyMethods()->Iherited.MakeUnique( pProxy->Instance, PreserveData );
    }

public:
    void RemoveOwnerShip() {}

};
//---------------------------------------------------------------------------
class TSLVCMemoryBuffer : public TSLVCSimpleGenericBuffer
{
    typedef TSLVCSimpleGenericBuffer inherited;

public:
    TSLVCMemoryBuffer( TSLUniVCBufferProxy* AProxy );
    TSLVCMemoryBuffer( TSLVCMemoryBuffer* Other );

public:
    virtual void Resize(unsigned Size, bool PreserveData = false)
    {
        ProxyMethods()->SetSize( pProxy->Instance, Size, PreserveData );
    }

    virtual const BYTE * ByteRead(void)
    {
        return (BYTE *)ProxyMethods()->Iherited.ByteRead( pProxy->Instance );
    }

    virtual BYTE * ByteWrite(void)
    {
        return (BYTE *)ProxyMethods()->Iherited.ByteWrite( pProxy->Instance );
    }

    virtual BYTE * ByteModify(void)
    {
        return (BYTE *)ProxyMethods()->Iherited.ByteModify( pProxy->Instance );
    }

protected:
    TSLUniMemoryVCBufferProxyMethods *ProxyMethods() { return (TSLUniMemoryVCBufferProxyMethods *)pProxy->Methods; }

};
//---------------------------------------------------------------------------
class TSLVCSimpleBlockBuffer : public TSLVCMemoryBuffer 
{
    typedef TSLVCMemoryBuffer  inherited;

public:
    TSLVCSimpleBlockBuffer(void);
    TSLVCSimpleBlockBuffer(unsigned ASize);
    TSLVCSimpleBlockBuffer(TSLVCSimpleBlockBuffer* Other) :
        inherited( Other )
    {
    }

    TSLVCSimpleBlockBuffer( void * Data, unsigned ASize);
    TSLVCSimpleBlockBuffer( TSLUniVCBufferProxy *VCBufferProxy ) :
        inherited( VCBufferProxy )
    {
    }

public:
    const void * Read(void) { return (void *)inherited::ByteRead(); }
    void * Write(void) { return (void *)inherited::ByteWrite(); }
    void * Modify(void) { return (void *)inherited::ByteModify(); }

    void SetValue( BYTE value )
    {
        ProxyMethods()->SetValue( pProxy->Instance, value );
    }

    void Zero()
    {
        ProxyMethods()->Zero( pProxy->Instance );
    }

protected:
    TSLBlockVCBufferProxyMethods *ProxyMethods() { return (TSLBlockVCBufferProxyMethods *)pProxy->Methods; }

};
//---------------------------------------------------------------------------
class TSLVCSimpleRealBuffer : public TSLVCMemoryBuffer 
{
    typedef TSLVCMemoryBuffer  inherited;

public:
    TSLVCSimpleRealBuffer(void);
    TSLVCSimpleRealBuffer(unsigned ASize);
    TSLVCSimpleRealBuffer(TSLVCSimpleRealBuffer* Other) :
        inherited( Other )
    {
    }

    TSLVCSimpleRealBuffer( PReal Data, unsigned ASize);
    TSLVCSimpleRealBuffer( TSLUniVCBufferVCLIntf VCBufferIntfProxy );
    TSLVCSimpleRealBuffer( TSLUniVCBufferProxy *VCBufferProxy ) :
        inherited( VCBufferProxy )
    {
    }

public:
    const PReal Read(void) { return (PReal)inherited::ByteRead(); }
    PReal Write(void) { return (PReal)inherited::ByteWrite(); }
    PReal Modify(void) { return (PReal)inherited::ByteModify(); }

    void ToInt(int *OutBuffer, bool Round )
    {
        ProxyMethods()->ToInt( pProxy->Instance, OutBuffer, Round );
    }

    void ToSingle( float *OutBuffer )
    {
        ProxyMethods()->ToSingle( pProxy->Instance, OutBuffer );
    }

    void FromShort(const short *InBuffer)
    {
        ProxyMethods()->FromShort( pProxy->Instance, InBuffer );
    }

    void FromInt(const int *InBuffer)
    {
        ProxyMethods()->FromInt( pProxy->Instance, InBuffer );
    }

    void FromSingle( const float *InBuffer )
    {
        ProxyMethods()->FromSingle( pProxy->Instance, InBuffer );
    }

    void SetValue(double value)
    {
        ProxyMethods()->SetValue( pProxy->Instance, value );
    }

    void AddValue(double value)
    {
        ProxyMethods()->SetValue( pProxy->Instance, value );
    }

    void SubtractValue(double value)
    {
        ProxyMethods()->SubValue( pProxy->Instance, value );
    }

    void MultiplyValue(double value)
    {
        ProxyMethods()->MulValue( pProxy->Instance, value );
    }

    void DivideValue(double value)
    {
        ProxyMethods()->DivValue( pProxy->Instance, value );
    }

    void Add( TSLVCSimpleRealBuffer *other )
    {
        ProxyMethods()->Add( pProxy->Instance, other->pProxy->Instance );
    }

    void Subtract( TSLVCSimpleRealBuffer *other )
    {
        ProxyMethods()->Sub( pProxy->Instance, other->pProxy->Instance );
    }

    void Multiply( TSLVCSimpleRealBuffer *other )
    {
        ProxyMethods()->Mul( pProxy->Instance, other->pProxy->Instance );
    }

    void Divide( TSLVCSimpleRealBuffer *other )
    {
        ProxyMethods()->Div( pProxy->Instance, other->pProxy->Instance );
    }

    void Zero()
    {
        ProxyMethods()->Zero( pProxy->Instance );
    }

    void NormalizeFrom( TSLVCSimpleRealBuffer *Src, double Offset, double Factor )
    {
        ProxyMethods()->NormalizeFrom( pProxy->Instance, Src->pProxy->Instance, Offset, Factor );
    }

    double Dot( TSLVCSimpleRealBuffer *Src )
    {
        return ProxyMethods()->Dot( pProxy->Instance, Src->pProxy->Instance );
    }

    void Threshold(double Threshold, TSLThresholdType Type )
    {
        ProxyMethods()->Threshold( pProxy->Instance, Threshold, Type );
    }

    void ThresholdFrom( TSLVCSimpleRealBuffer *Src, double Threshold, TSLThresholdType Type)
    {
        ProxyMethods()->ThresholdFrom( pProxy->Instance, Src->pProxy->Instance, Threshold, Type );
    }

    void Abs()
    {
        ProxyMethods()->Abs( pProxy->Instance );
    }

    void AbsFrom( TSLVCSimpleRealBuffer *Src )
    {
        ProxyMethods()->AbsFrom( pProxy->Instance, Src->pProxy->Instance );
    }

    void Sqr()
    {
        ProxyMethods()->Sqr( pProxy->Instance );
    }

    void SqrFrom( TSLVCSimpleRealBuffer *Src )
    {
        ProxyMethods()->SqrFrom( pProxy->Instance, Src->pProxy->Instance );
    }

    void Sqrt()
    {
        ProxyMethods()->Sqrt( pProxy->Instance );
    }

    void SqrtFrom( TSLVCSimpleRealBuffer *Src )
    {
        ProxyMethods()->SqrtFrom( pProxy->Instance, Src->pProxy->Instance );
    }

    void Exp()
    {
        ProxyMethods()->Exp( pProxy->Instance );
    }

    void ExpFrom( TSLVCSimpleRealBuffer *Src )
    {
        ProxyMethods()->ExpFrom( pProxy->Instance, Src->pProxy->Instance );
    }

    void Ln()
    {
        ProxyMethods()->Ln( pProxy->Instance );
    }

    void LnFrom( TSLVCSimpleRealBuffer *Src )
    {
        ProxyMethods()->LnFrom( pProxy->Instance, Src->pProxy->Instance );
    }

    double GetMinValue()
    {
        return ProxyMethods()->GetMinValue( pProxy->Instance );
    }

    double GetMaxValue()
    {
        return ProxyMethods()->GetMaxValue( pProxy->Instance );
    }

    double GetMinIndex(int & index)
    {
        return ProxyMethods()->GetMinIndex( pProxy->Instance, index );
    }

    double GetMaxIndex(int & index)
    {
        return ProxyMethods()->GetMaxIndex( pProxy->Instance, index );
    }

    double Mean()
    {
        return ProxyMethods()->Mean( pProxy->Instance );
    }

    double StdDev()
    {
        return ProxyMethods()->StdDev( pProxy->Instance );
    }

    double Norm( TSLVCSimpleRealBuffer *Src, TSLNormType type )
    {
        return ProxyMethods()->Norm( pProxy->Instance, Src->pProxy->Instance, type );
    }

    void Convolve( TSLVCSimpleRealBuffer *Src, TSLVCSimpleRealBuffer *H )
    {
        ProxyMethods()->Convolve( pProxy->Instance, Src->pProxy->Instance, H->pProxy->Instance );
    }

    void AutoCorr( TSLVCSimpleRealBuffer *Src, TSLAutoCorrType type )
    {
        ProxyMethods()->AutoCorr( pProxy->Instance, Src->pProxy->Instance, type );
    }

    void CrossCorr( TSLVCSimpleRealBuffer *Src1, TSLVCSimpleRealBuffer *Src2, int LoLag )
    {
        ProxyMethods()->CrossCorr( pProxy->Instance, Src1->pProxy->Instance, Src2->pProxy->Instance, LoLag );
    }

protected:
    TSLRealVCBufferProxyMethods *ProxyMethods() { return (TSLRealVCBufferProxyMethods *)pProxy->Methods; }

};
//---------------------------------------------------------------------------
class TSLVCSimpleRealMatrixBuffer : public TSLVCSimpleGenericBuffer 
{
    typedef TSLVCSimpleGenericBuffer  inherited;

public:
    TSLVCSimpleRealMatrixBuffer(void);
    TSLVCSimpleRealMatrixBuffer( unsigned int ARow, unsigned int ACol );
    TSLVCSimpleRealMatrixBuffer(TSLVCSimpleRealMatrixBuffer* Other) :
        inherited( Other )
    {
    }

    TSLVCSimpleRealMatrixBuffer( PReal Data, unsigned int ARow, unsigned int ACol );
    TSLVCSimpleRealMatrixBuffer( TSLUniVCBufferProxy *VCBufferProxy ) :
        inherited( VCBufferProxy )
    {
    }

public:
    virtual void *GetInterfaceProxy() { return (void *)&pProxy->MatInstance; }
    double GetCell( unsigned int ARow, unsigned int ACol )
    {
        return ProxyMethods()->GetCell( pProxy->Instance, ARow, ACol );
    }

    void SetCell( unsigned int ARow, unsigned int ACol, double AValue )
    {
        ProxyMethods()->SetCell( pProxy->Instance, ARow, ACol, AValue );
    }

    virtual void Resize( int ARows, int ACols, bool PreserveData = false)
    {
        ProxyMethods()->SetSize( pProxy->Instance, ARows, ACols, PreserveData );
    }

    int GetCount()
    {
        return ProxyMethods()->GetCount( pProxy->Instance );
    }

    int GetMaxSize()
    {
        return ProxyMethods()->GetMaxSize( pProxy->Instance );
    }

    int GetColCount( int ARow )
    {
        return ProxyMethods()->GetColCount( pProxy->Instance, ARow );
    }

    bool IsEqual( TSLVCSimpleRealMatrixBuffer * Other )
    {
        return ProxyMethods()->IsEqual( pProxy->Instance, Other->pProxy->Instance );
    }

    void SetValue(double value)
    {
        ProxyMethods()->SetValue( pProxy->Instance, value );
    }

    void AddValue(double value)
    {
        ProxyMethods()->SetValue( pProxy->Instance, value );
    }

    void SubtractValue(double value)
    {
        ProxyMethods()->SubValue( pProxy->Instance, value );
    }

    void MultiplyValue(double value)
    {
        ProxyMethods()->MulValue( pProxy->Instance, value );
    }

    void DivideValue(double value)
    {
        ProxyMethods()->DivValue( pProxy->Instance, value );
    }

    void Add( TSLVCSimpleRealMatrixBuffer *other )
    {
        ProxyMethods()->Add( pProxy->Instance, other->pProxy->Instance );
    }

    void Subtract( TSLVCSimpleRealMatrixBuffer *other )
    {
        ProxyMethods()->Sub( pProxy->Instance, other->pProxy->Instance );
    }

    void Multiply( TSLVCSimpleRealMatrixBuffer *other )
    {
        ProxyMethods()->Mul( pProxy->Instance, other->pProxy->Instance );
    }

    void Divide( TSLVCSimpleRealMatrixBuffer *other )
    {
        ProxyMethods()->Div( pProxy->Instance, other->pProxy->Instance );
    }

    void Zero()
    {
        ProxyMethods()->Zero( pProxy->Instance );
    }

protected:
    TSLRealMatrixVCBufferProxyMethods *ProxyMethods() { return (TSLRealMatrixVCBufferProxyMethods *)pProxy->Methods; }

};
//---------------------------------------------------------------------------
class TSLVCSimpleIntegerBuffer : public TSLVCMemoryBuffer 
{
    typedef TSLVCMemoryBuffer  inherited;

public:
    TSLVCSimpleIntegerBuffer(void);
    TSLVCSimpleIntegerBuffer(unsigned ASize);
    TSLVCSimpleIntegerBuffer(TSLVCSimpleIntegerBuffer* Other) :
        inherited( Other )
    {
    }

    TSLVCSimpleIntegerBuffer( PInteger Data, unsigned ASize);
    TSLVCSimpleIntegerBuffer( TSLUniVCBufferProxy *VCBufferProxy ) :
        inherited( VCBufferProxy )
    {
    }

public:
    const PInteger Read(void) { return (PInteger)inherited::ByteRead(); }
    PInteger Write(void) { return (PInteger)inherited::ByteWrite(); }
    PInteger Modify(void) { return (PInteger)inherited::ByteModify(); }

    void SetValue( int value )
    {
        ProxyMethods()->SetValue( pProxy->Instance, value );
    }

    void AddValue( int value )
    {
        ProxyMethods()->AddValue( pProxy->Instance, value );
    }

    void SubtractValue( int value )
    {
        ProxyMethods()->SubValue( pProxy->Instance, value );
    }

    void MultiplyValue( int value )
    {
        ProxyMethods()->MulValue( pProxy->Instance, value );
    }

    void DivideValue( int value )
    {
        ProxyMethods()->DivValue( pProxy->Instance, value );
    }

    void ModValue( int value )
    {
        ProxyMethods()->ModValue( pProxy->Instance, value );
    }

    void AndValue( int value )
    {
        ProxyMethods()->AndValue( pProxy->Instance, value );
    }

    void OrValue( int value )
    {
        ProxyMethods()->OrValue( pProxy->Instance, value );
    }

    void XorValue( int value )
    {
        ProxyMethods()->XorValue( pProxy->Instance, value );
    }

    void LShiftValue( int value )
    {
        ProxyMethods()->LShiftValue( pProxy->Instance, value );
    }

    void RShiftValue( int value )
    {
        ProxyMethods()->RShiftValue( pProxy->Instance, value );
    }

    void Zero()
    {
        ProxyMethods()->Zero( pProxy->Instance );
    }

    void Add( TSLVCSimpleIntegerBuffer *other )
    {
        ProxyMethods()->Add( pProxy->Instance, other->pProxy->Instance );
    }

    void Subtract( TSLVCSimpleIntegerBuffer *other )
    {
        ProxyMethods()->Subtract( pProxy->Instance, other->pProxy->Instance );
    }

    void Multiply( TSLVCSimpleIntegerBuffer *other )
    {
        ProxyMethods()->Multiply( pProxy->Instance, other->pProxy->Instance );
    }

    void Divide( TSLVCSimpleIntegerBuffer *other )
    {
        ProxyMethods()->Divide( pProxy->Instance, other->pProxy->Instance );
    }

    int  Dot( TSLVCSimpleIntegerBuffer *other )
    {
        return ProxyMethods()->Dot( pProxy->Instance, other->pProxy->Instance );
    }

    void AndBuffer( TSLVCSimpleIntegerBuffer *other )
    {
        ProxyMethods()->AndBuffer( pProxy->Instance, other->pProxy->Instance );
    }

    void OrBuffer( TSLVCSimpleIntegerBuffer *other )
    {
        ProxyMethods()->OrBuffer( pProxy->Instance, other->pProxy->Instance );
    }

    void XorBuffer( TSLVCSimpleIntegerBuffer *other )
    {
        ProxyMethods()->XorBuffer( pProxy->Instance, other->pProxy->Instance );
    }

protected:
    TSLIntegerVCBufferProxyMethods *ProxyMethods() { return (TSLIntegerVCBufferProxyMethods *)pProxy->Methods; }

};
//---------------------------------------------------------------------------
class TSLVCSimpleComplexBuffer : public TSLVCMemoryBuffer 
{
    typedef TSLVCMemoryBuffer  inherited;

public:
    TSLVCSimpleComplexBuffer(void);
    TSLVCSimpleComplexBuffer(unsigned ASize);
    TSLVCSimpleComplexBuffer(TSLVCSimpleComplexBuffer* Other) :
        inherited( Other )
    {
    }

    TSLVCSimpleComplexBuffer( POWRealComplex Data, unsigned ASize);
    TSLVCSimpleComplexBuffer( TSLUniVCBufferProxy *VCBufferProxy ) :
        inherited( VCBufferProxy )
    {
    }


public:
    const POWRealComplex Read(void) { return (POWRealComplex)inherited::ByteRead(); }
    POWRealComplex Write(void) { return (POWRealComplex)inherited::ByteWrite(); }
    POWRealComplex Modify(void) { return (POWRealComplex)inherited::ByteModify(); }

    TSLUniVCBufferProxy *GetReal()
    {
        return ProxyMethods()->GetReal( pProxy->Instance );
    }

    TSLUniVCBufferProxy *GetImaginary()
    {
        return ProxyMethods()->GetImaginary( pProxy->Instance );
    }

    TSLUniVCBufferProxy *Phase()
    {
        return ProxyMethods()->Phase( pProxy->Instance );
    }

    TSLUniVCBufferProxy *Magnitude()
    {
        return ProxyMethods()->Magnitude( pProxy->Instance );
    }

    TSLUniVCBufferProxy *PowerSpectrum()
    {
        return ProxyMethods()->PowerSpectrum( pProxy->Instance );
    }

    void SetBuffer( TSLVCSimpleRealBuffer *RealValue, TSLVCSimpleRealBuffer *ImagValue )
    {
        ProxyMethods()->SetBuffer( pProxy->Instance, RealValue->pProxy->Instance, ImagValue->pProxy->Instance );
    }

    void SetValue( double Real, double Imaginary )
    {
        ProxyMethods()->SetValue( pProxy->Instance, Real, Imaginary );
    }

    void AddValue( double Real, double Imaginary )
    {
        ProxyMethods()->AddValue( pProxy->Instance, Real, Imaginary );
    }

    void SubtractValue( double Real, double Imaginary )
    {
        ProxyMethods()->AddValue( pProxy->Instance, Real, Imaginary );
    }

    void MultiplyValue( double Real, double Imaginary )
    {
        ProxyMethods()->MulValue( pProxy->Instance, Real, Imaginary );
    }

    void DivideValue( double Real, double Imaginary )
    {
        ProxyMethods()->DivValue( pProxy->Instance, Real, Imaginary );
    }

    void Zero()
    {
        ProxyMethods()->Zero( pProxy->Instance );
    }

    void Add( TSLVCSimpleComplexBuffer *other )
    {
        ProxyMethods()->Add( pProxy->Instance, other->pProxy->Instance );
    }

    void Subtract( TSLVCSimpleComplexBuffer *other )
    {
        ProxyMethods()->Sub( pProxy->Instance, other->pProxy->Instance );
    }

    void Multiply( TSLVCSimpleComplexBuffer *other )
    {
        ProxyMethods()->Mul( pProxy->Instance, other->pProxy->Instance );
    }

    void Divide( TSLVCSimpleComplexBuffer *other )
    {
        ProxyMethods()->Div( pProxy->Instance, other->pProxy->Instance );
    }

    void NormalizeFrom( TSLVCSimpleComplexBuffer *Src, TOWRealComplex Offset, double Factor )
    {
        ProxyMethods()->NormalizeFrom( pProxy->Instance, Src->pProxy->Instance, *(TOWImplRealComplex *)&Offset, Factor );
    }

    TOWRealComplex Dot( TSLVCSimpleComplexBuffer *Src )
    {
        TOWImplRealComplex tmp = ProxyMethods()->Dot( pProxy->Instance, Src->pProxy->Instance );
        return *(TOWRealComplex*)&tmp;
    }

    void Threshold( double Threshold, TSLThresholdType Type )
    {
        ProxyMethods()->Threshold(pProxy->Instance, Threshold, Type);
    }

    void ThresholdFrom( TSLVCSimpleComplexBuffer *Src, double Threshold, TSLThresholdType Type )
    {
        ProxyMethods()->ThresholdFrom( pProxy->Instance, Src->pProxy->Instance, Threshold, Type );
    }

    void Sqr()
    {
        ProxyMethods()->Sqr(pProxy->Instance);
    }

    void SqrFrom( TSLVCSimpleComplexBuffer *Src )
    {
        ProxyMethods()->SqrFrom( pProxy->Instance, Src->pProxy->Instance );
    }

    void Sqrt()
    {
        ProxyMethods()->Sqrt( pProxy->Instance );
    }

    void SqrtFrom( TSLVCSimpleComplexBuffer *Src )
    {
        ProxyMethods()->SqrtFrom( pProxy->Instance, Src->pProxy->Instance );
    }

    void AutoCorr( TSLVCSimpleComplexBuffer *Src, TSLAutoCorrType type )
    {
        ProxyMethods()->AutoCorr( pProxy->Instance, Src->pProxy->Instance, type );
    }

    void CrossCorr( TSLVCSimpleComplexBuffer *Src1, TSLVCSimpleComplexBuffer *Src2, int LoLag )
    {
        ProxyMethods()->CrossCorr( pProxy->Instance, Src1->pProxy->Instance, Src2->pProxy->Instance, LoLag );
    }

protected:
    TSLComplexVCBufferProxyMethods *ProxyMethods() { return (TSLComplexVCBufferProxyMethods *)pProxy->Methods; }

};
//---------------------------------------------------------------------------
#endif
