// -------------------------------------------------------------------------
// -----                      R3BmTofDigi header file                  -----
// -----                  Created 28/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------


/**  R3BmTofDigi.h
 **/


#ifndef R3BMTOFDIGI_H
#define R3BMTOFDDIGI_H



#include "TObject.h"
#include "TVector3.h"



class R3BmTofDigi : public TObject
{

 public:

  /** Default constructor **/
  R3BmTofDigi();
  R3BmTofDigi(Int_t ntmul,Double_t ntfx,Double_t ntfy,Double_t ntft,Double_t ntfpath);
  
  /** Copy constructor **/
  R3BmTofDigi(const R3BmTofDigi& point) { *this = point; };

  /** Destructor **/
  virtual ~R3BmTofDigi();

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


  void Setntmul(Int_t mul){Ntmul = mul;}
  Double_t Getntmul(){return Ntmul;}
  
  void Setntfx(Double_t pos){Ntx = pos;}
  Double_t Getntfx(){return Ntx;}
  
  void Setntfy(Double_t pos){Nty = pos;}
  Double_t Getntfy(){return Nty;}
  
  void Setntft(Double_t time){Ntt = time;}
  Double_t Getntft(){return Ntt;}
  
  void Setntfpath(Double_t length){Ntpath = length;}
  Double_t Getntfpath(){return Ntpath;}


 protected:

   Int_t Ntmul;
   Double32_t Ntx;
   Double32_t Nty;
   Double32_t Ntt;
   Double32_t Ntpath;

  ClassDef(R3BmTofDigi,1)


};

#endif
