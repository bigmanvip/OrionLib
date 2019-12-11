////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//     This software is supplied under the terms of a license agreement or    //
//     nondisclosure agreement with Boian Mitov and may not be copied         //
//     or disclosed except in accordance with the terms of that agreement.    //
//          Copyright(c) 2002-2011 Boian Mitov. All Rights Reserved.          //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef SLCRealMatrixBufferH
#define SLCRealMatrixBufferH
//---------------------------------------------------------------------------
#include <SLCGenericBuffer.h>
#ifdef __BORLANDC__
  #if __BORLANDC__ >= 0x0620
    #pragma warn -8118
  #endif
#endif

#ifdef __CLR_VER
namespace Mitov
{
namespace SignalLab
{
#endif

#ifndef __BORLANDC__
  typedef TSLVCSimpleRealMatrixBuffer TSLRealMatrix;

#endif

#ifdef __CLR_VER

#define TSLCRealMatrixBuffer     RealMatrixBuffer
#define TSLCRealMatrixBufferRow  RealMatrixBufferRow

ref class TSLCRealMatrixBuffer;
ref class TSLCRealMatrixBufferRow;

#else

class PACKAGE TSLCRealMatrixBuffer;
class PACKAGE TSLCRealMatrixBufferRow;

#endif

//==============================================================================
//   CLASS TALCAudioBufferItemChannel -- Audio Data Buffer Sample Channel support class
//==============================================================================

#ifndef __CLR_VER
class PACKAGE TSLCRealMatrixBufferRowElement
{
  friend class TSLCRealMatrixBufferRow;

protected:
  TSLCRealMatrixBuffer __REF FOwner;
  int                        FRow;
  int                        FCol;

public:
  operator double() const;
  TSLCRealMatrixBufferRowElement &operator = ( double AValue );
  TSLCRealMatrixBufferRowElement &operator = ( const TSLCRealMatrixBufferRowElement &AValue );

protected:
  TSLCRealMatrixBufferRowElement( TSLCRealMatrixBuffer & AOwner, int ARow, int ACol ) : FOwner( AOwner ), FRow( ARow ), FCol( ACol ) {}

};
#endif

//==============================================================================
//   CLASS TSLCRealMatrixBufferRow -- Matrix Data Buffer Sample support class
//==============================================================================

__CLASSDEF TSLCRealMatrixBufferRow
{
#ifndef __CLR_VER
  friend class TSLCRealMatrixBuffer;
#endif

protected:
  TSLCRealMatrixBuffer __REF FOwner;
  int                        FRow;

INTERNAL:
  TSLCRealMatrixBufferRow( TSLCRealMatrixBuffer __REF AOwner, int ARow ) : FOwner( AOwner ), FRow( ARow ) {}

public:
#ifdef __CLR_VER
  property double default[int] { double get( int col ); void set( int col, double value );  }
  property double default[unsigned int] { double get( unsigned int col ); void set( unsigned int col, double value );  }
#else
  TSLCRealMatrixBufferRowElement operator [] ( int ACol ) const;
#endif

  int GetCount() __CONST;
};

//==============================================================================
//   CLASS TSLCRealMatrixBuffer -- Real Matrix Data Buffer Class
//==============================================================================

#ifdef __CLR_VER
class TSLExposedRealMatrix : public TSLRealMatrix
{
  friend ref class TSLCRealMatrixBuffer;
};

__CLASSDEF TSLCRealMatrixBuffer : public TSLCDataBuffer
{
#else
__CLASSDEF TSLCRealMatrixBuffer : public TSLCDataBuffer
{
  class TSLExposedRealMatrix : public TSLRealMatrix
  {
    friend class TSLCRealMatrixBuffer;
  };

#endif

public:
    //
    //  Member Functions
    TSLCRealMatrixBuffer()
#ifdef __BORLANDC__
        :  pPasBuffer( (TSLExposedRealMatrix *)new TSLRealMatrix( ( new TSLRealMatrixBuffer( (unsigned int)0 )->GetMatArrayIntf() )))
#else
        :  pPasBuffer( (TSLExposedRealMatrix *)new TSLRealMatrix( (unsigned int)0, (unsigned int)0 ))
#endif
        {
        pPasBuffer->_AddRef();
        PopulateCahces();
        }

    TSLCRealMatrixBuffer( int ARows, int ACols );
    TSLCRealMatrixBuffer(const TSLCRealMatrixBuffer __REF other);
#ifdef __CLR_VER
    TSLCRealMatrixBuffer( bool, int Handle ) {}
//    TSLCRealMatrixBuffer( array<const double> ^ AData );
#endif
//    TSLCRealMatrixBuffer( TSLRealMatrixBuffer *PascalBuffer );
    TSLCRealMatrixBuffer( TSLRealMatrix *PascalBuffer );
    TSLCRealMatrixBuffer( double *AData, int ARows, int ACols );

#ifdef __BORLANDC__
    TSLCRealMatrixBuffer( Slsimpledatabuffer::_di_ISLRealMatrixBuffer other );    
#else
    // Provides VC++ buffer access proxy.
    TSLCRealMatrixBuffer( TSLUniVCBufferProxy *VCBufferProxy );
#endif

    virtual ~TSLCRealMatrixBuffer();

#ifndef __BORLANDC__
    // Provides VC++ buffer access proxy.
    void *GetInterfaceProxy() { return pPasBuffer->GetInterfaceProxy(); }
#endif

#ifndef __CLR_VER
    TSLCRealMatrixBuffer & operator ()()
        { return *this; };
#endif

    void Resize( int ARows, int ACols, bool preserve_data )
        {
        pPasBuffer->Resize( ARows, ACols, preserve_data );
        PopulateCahces();
        }

    void Resize( int ARows, int ACols )
        {
        pPasBuffer->Resize( ARows, ACols, false );
        PopulateCahces();
        }

public:
//    void      Copy(__CONST TSLCRealMatrixBuffer __REF Src);
    void      Set(double value);
    void      Zero();
    void      Add(double value);
    void      Add( __CONST TSLCRealMatrixBuffer __REF Src);
    void      Multiply(double value);
    void      Multiply( __CONST TSLCRealMatrixBuffer __REF Src);
    void      Divide(double value);
    void      Divide( __CONST TSLCRealMatrixBuffer __REF Src);
    void      Subtract(double value);
    void      Subtract( __CONST TSLCRealMatrixBuffer __REF Src);

    bool      IsEqual(__CONST TSLCRealMatrixBuffer __REF Other) __CONST;

public:
#ifdef __CLR_VER
  property TSLCRealMatrixBufferRow ^ default[int] { TSLCRealMatrixBufferRow ^ get( int index ) { return gcnew TSLCRealMatrixBufferRow( this, index ); } }
  property TSLCRealMatrixBufferRow ^ default[unsigned int] { TSLCRealMatrixBufferRow ^ get( unsigned int index ) { return gcnew TSLCRealMatrixBufferRow( this, index ); } }
#else
  TSLCRealMatrixBufferRow __IREF operator [] ( int ARow )
    {
    return __GCNEW TSLCRealMatrixBufferRow( *this, ARow );
    }

#endif

  double  GetItem( unsigned int ARow, unsigned int ACol ) __CONST { return pPasBuffer->GetCell( ARow, ACol ); }
  void    SetItem( unsigned int ARow, unsigned int ACol, double AValue ) { pPasBuffer->SetCell( ARow, ACol, AValue ); }

  int     GetCols() __CONST { return pPasBuffer->GetCount(); }
  int     GetCols( int ARow ) __CONST { return pPasBuffer->GetColCount( ARow ); }
  int     GetRows() __CONST { return pPasBuffer->GetMaxSize(); }

public:

#ifdef __BORLANDC__
    operator Slsimpledatabuffer::_di_ISLRealBufferArray ()
      { return *pPasBuffer; }
#endif

#ifndef __CLR_VER
    TSLCRealMatrixBuffer& operator = (const TSLCRealMatrixBuffer & rhs) { Assign( rhs ); return *this; }
    TSLCRealMatrixBuffer& operator = (double rhs)                     { Set( rhs ); return *this; }
    TSLCRealMatrixBuffer& operator += (const TSLCRealMatrixBuffer& rhs) { Add( rhs ); return *this; }
    TSLCRealMatrixBuffer& operator += (double rhs)                    { Add( rhs ); return *this; }
    TSLCRealMatrixBuffer& operator -= (const TSLCRealMatrixBuffer& rhs) { Subtract( rhs ); return *this; }
    TSLCRealMatrixBuffer& operator -= (double rhs)                    { Subtract( rhs ); return *this; }
    TSLCRealMatrixBuffer& operator *= (const TSLCRealMatrixBuffer& rhs) { Multiply( rhs ); return *this; }
    TSLCRealMatrixBuffer& operator *= (double rhs)                    { Multiply( rhs ); return *this; }
    TSLCRealMatrixBuffer& operator /= (const TSLCRealMatrixBuffer& rhs) { Divide( rhs ); return *this; }
    TSLCRealMatrixBuffer& operator /= (double rhs)                    { Divide( rhs ); return *this; }
#else
    static TSLCRealMatrixBuffer ^ operator + ( TSLCRealMatrixBuffer ^ lhs, TSLCRealMatrixBuffer ^ rhs) { TSLCRealMatrixBuffer ^ tmp = gcnew TSLCRealMatrixBuffer( lhs ); tmp->Add( rhs ); return tmp; }
    static TSLCRealMatrixBuffer ^ operator + ( TSLCRealMatrixBuffer ^ lhs, double rhs) { TSLCRealMatrixBuffer ^ tmp = gcnew TSLCRealMatrixBuffer( lhs ); tmp->Add( rhs ); return tmp; }
    static TSLCRealMatrixBuffer ^ operator + ( double lhs, TSLCRealMatrixBuffer ^ rhs) { TSLCRealMatrixBuffer ^ tmp = gcnew TSLCRealMatrixBuffer( rhs ); tmp->Add( lhs ); return tmp; }

    static TSLCRealMatrixBuffer ^ operator - ( TSLCRealMatrixBuffer ^ lhs, TSLCRealMatrixBuffer ^ rhs) { TSLCRealMatrixBuffer ^ tmp = gcnew TSLCRealMatrixBuffer( lhs ); tmp->Subtract( rhs ); return tmp; }
    static TSLCRealMatrixBuffer ^ operator - ( TSLCRealMatrixBuffer ^ lhs, double rhs) { TSLCRealMatrixBuffer ^ tmp = gcnew TSLCRealMatrixBuffer( lhs ); tmp->Subtract( rhs ); return tmp; }
    static TSLCRealMatrixBuffer ^ operator - ( double lhs, TSLCRealMatrixBuffer ^ rhs) { TSLCRealMatrixBuffer ^ tmp = gcnew TSLCRealMatrixBuffer( rhs ); tmp->Subtract( lhs ); return tmp; }

    static TSLCRealMatrixBuffer ^ operator * ( TSLCRealMatrixBuffer ^ lhs, TSLCRealMatrixBuffer ^ rhs) { TSLCRealMatrixBuffer ^ tmp = gcnew TSLCRealMatrixBuffer( lhs ); tmp->Multiply( rhs ); return tmp; }
    static TSLCRealMatrixBuffer ^ operator * ( TSLCRealMatrixBuffer ^ lhs, double rhs) { TSLCRealMatrixBuffer ^ tmp = gcnew TSLCRealMatrixBuffer( lhs ); tmp->Multiply( rhs ); return tmp; }
    static TSLCRealMatrixBuffer ^ operator * ( double lhs, TSLCRealMatrixBuffer ^ rhs) { TSLCRealMatrixBuffer ^ tmp = gcnew TSLCRealMatrixBuffer( rhs ); tmp->Multiply( lhs ); return tmp; }

    static TSLCRealMatrixBuffer ^ operator / ( TSLCRealMatrixBuffer ^ lhs, TSLCRealMatrixBuffer ^ rhs) { TSLCRealMatrixBuffer ^ tmp = gcnew TSLCRealMatrixBuffer( lhs ); tmp->Divide( rhs ); return tmp; }
    static TSLCRealMatrixBuffer ^ operator / ( TSLCRealMatrixBuffer ^ lhs, double rhs) { TSLCRealMatrixBuffer ^ tmp = gcnew TSLCRealMatrixBuffer( lhs ); tmp->Divide( rhs ); return tmp; }

    static bool operator == ( TSLCRealMatrixBuffer ^ lhs, TSLCRealMatrixBuffer ^ rhs) { return lhs->IsEqual( rhs ); }
    static bool operator != ( TSLCRealMatrixBuffer ^ lhs, TSLCRealMatrixBuffer ^ rhs) { return ! lhs->IsEqual( rhs ); }
#endif

#ifdef __CLR_VER
internal:
    mutable TSLExposedRealMatrix *  pPasBuffer;
#else
protected:
    mutable TSLExposedRealMatrix *  pPasBuffer;
#endif

public:
    virtual void *GetPasBuffer() __OVERRIDE __CONST { return pPasBuffer; }

protected:
    //
    //  Member functions
    virtual void Assign( const TSLCRealMatrixBuffer __REF other );
//    virtual void Assign( const double *AData, int ARows, int ACols );

protected:
    virtual void PopulateCahces() __CONST {}

public :
    virtual unsigned int GetCount() __CONST { return pPasBuffer->GetCount(); };

};

#ifndef __CLR_VER
//---------------------------------------------------------------------------
inline TSLCRealMatrixBufferRowElement::operator double() const { return FOwner.GetItem( FRow, FCol ); };
inline TSLCRealMatrixBufferRowElement &TSLCRealMatrixBufferRowElement::operator = ( double AValue ) { FOwner.SetItem( FRow, FCol, AValue ); return *this; }
inline TSLCRealMatrixBufferRowElement &TSLCRealMatrixBufferRowElement::operator = ( const TSLCRealMatrixBufferRowElement &AValue ) { FOwner.SetItem( FRow, FCol, AValue ); return *this; }
//---------------------------------------------------------------------------
TSLCRealMatrixBuffer operator + (const TSLCRealMatrixBuffer& lhs, const TSLCRealMatrixBuffer& rhs);
TSLCRealMatrixBuffer operator + (const double value, const TSLCRealMatrixBuffer& rhs);
TSLCRealMatrixBuffer operator + (const TSLCRealMatrixBuffer& lhs, const double value);
TSLCRealMatrixBuffer operator - (const TSLCRealMatrixBuffer& lhs, const TSLCRealMatrixBuffer& rhs);
TSLCRealMatrixBuffer operator - (const TSLCRealMatrixBuffer& lhs, const double value);

TSLCRealMatrixBuffer operator - (const TSLCRealMatrixBuffer& lhs);
TSLCRealMatrixBuffer operator * (const TSLCRealMatrixBuffer& lhs, const TSLCRealMatrixBuffer& rhs);
TSLCRealMatrixBuffer operator * (const double value, const TSLCRealMatrixBuffer& rhs);
TSLCRealMatrixBuffer operator * (const TSLCRealMatrixBuffer& lhs, const double value);

TSLCRealMatrixBuffer operator / (const TSLCRealMatrixBuffer& lhs, const TSLCRealMatrixBuffer& rhs);
TSLCRealMatrixBuffer operator / (const TSLCRealMatrixBuffer& lhs, const double value);

bool operator == (const TSLCRealMatrixBuffer & lhs, const TSLCRealMatrixBuffer & rhs);
bool operator != (const TSLCRealMatrixBuffer & lhs, const TSLCRealMatrixBuffer & rhs);


inline TSLCRealMatrixBuffer operator + (const TSLCRealMatrixBuffer& lhs, const TSLCRealMatrixBuffer& rhs) { TSLCRealMatrixBuffer tmp( lhs ); return tmp += rhs; }
inline TSLCRealMatrixBuffer operator + (const double value, const TSLCRealMatrixBuffer& rhs) { TSLCRealMatrixBuffer tmp( rhs ); return tmp += value; }
inline TSLCRealMatrixBuffer operator + (const TSLCRealMatrixBuffer& lhs, const double value) { TSLCRealMatrixBuffer tmp( lhs ); return tmp += value; }
inline TSLCRealMatrixBuffer operator - (const TSLCRealMatrixBuffer& lhs, const TSLCRealMatrixBuffer& rhs) { TSLCRealMatrixBuffer tmp( lhs ); return tmp -= rhs; }
inline TSLCRealMatrixBuffer operator - (const TSLCRealMatrixBuffer& lhs, const double value) { TSLCRealMatrixBuffer tmp( lhs ); return tmp -= value; }

inline TSLCRealMatrixBuffer operator - (const TSLCRealMatrixBuffer& lhs) { TSLCRealMatrixBuffer tmp( lhs ); tmp.Multiply(-1.0); return tmp; }
inline TSLCRealMatrixBuffer operator * (const TSLCRealMatrixBuffer& lhs, const TSLCRealMatrixBuffer& rhs) { TSLCRealMatrixBuffer tmp( rhs ); return tmp *= rhs; }
inline TSLCRealMatrixBuffer operator * (const double value, const TSLCRealMatrixBuffer& rhs) { TSLCRealMatrixBuffer tmp( rhs ); return tmp *= value; }
inline TSLCRealMatrixBuffer operator * (const TSLCRealMatrixBuffer& lhs, const double value) { TSLCRealMatrixBuffer tmp( lhs ); return tmp *= value; }

inline TSLCRealMatrixBuffer operator / (const TSLCRealMatrixBuffer& lhs, const TSLCRealMatrixBuffer& rhs) { TSLCRealMatrixBuffer tmp( lhs ); return tmp /= rhs; }
inline TSLCRealMatrixBuffer operator / (const TSLCRealMatrixBuffer& lhs, const double value) { TSLCRealMatrixBuffer tmp( lhs ); return tmp /= value; }

inline bool operator == (const TSLCRealMatrixBuffer & lhs, const TSLCRealMatrixBuffer & rhs) { return lhs.IsEqual( rhs ); }
inline bool operator != (const TSLCRealMatrixBuffer & lhs, const TSLCRealMatrixBuffer & rhs) { return ! lhs.IsEqual( rhs ); }
//------------------------------------------------------------------------------
inline TSLCRealMatrixBufferRowElement TSLCRealMatrixBufferRow::operator [] ( int ACol ) const
{
  return __GCNEW TSLCRealMatrixBufferRowElement( FOwner, FRow, ACol );
}
//------------------------------------------------------------------------------
#endif
//---------------------------------------------------------------------------
#ifdef __CLR_VER
} // namespace Mitov
} // namespace SignalLab
#endif
//---------------------------------------------------------------------------
#ifdef __BORLANDC__
  #if __BORLANDC__ >= 0x0620
    #pragma warn .8118
  #endif
#endif

#endif
