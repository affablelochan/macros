// -*- C++ -*-//pt neighbour >60 deta
#include <TROOT.h>
#include <TFile.h>
#include <TH2D.h>
#include <TH1F.h>
#include <TH1.h>
#include <TProfile2D.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TNtuple.h>
#include <TString.h>
#include <iostream>
#include <cstring>
#include <string>



 


TH1F *h1, *h2, *h5, *h6, *hh, *R2, *R3;

 
void compare60(){
  gROOT->SetStyle("Plain");
  gStyle->SetTitleBorderSize(0);
  gStyle->SetFrameFillColor(kWhite); // needed when using root v5
  gStyle->SetPalette(1);
  gStyle->SetOptStat(0);



  int ni=600,pi=450;
 string MCfilename = "A2_F.root"; 
 cout << MCfilename << endl;
string names[4] = {"histy11","histy12","histy13","histy14","histy15"};
string pnames[4] = {"pisty11","pisty12","pisty13","pisty14","pisty15"};
string nnames[4] = {"nisty11","nisty12","nisty13","nisty14","nisty15"};
string deltaR[4] = {"0.6 < #DeltaR <1.0","1.0 < #DeltaR <1.4","1.4 < #DeltaR <1.8","1.8 < #DeltaR <2.2","2.2 < #DeltaR <2.6" };
string eps[4] = {"pt60region1.eps","pt60region2.eps","pt60region3.eps","pt60region4.eps","pt60region5.eps" };
string pdf[4] = {"pt60region1.pdf","pt60region2.pdf","pt60region3.pdf","pt60region4.pdf","pt60region5.pdf" };
string ptneigh = "p_{T}neighbour >60 GeV";

 TFile* f = new TFile(MCfilename.c_str());
        f->TFile::Open();

          TH1F *h1   = (TH1F*)f->Get("hist");
	  h1->Sumw2();
        
          TH1F *P1   = (TH1F*)f->Get("pist");
	  P1->Sumw2();
         
          TH1F *N1   = (TH1F*)f->Get("nist");
	  N1->Sumw2();

          Double_t bins[15] = {80, 110, 160, 210,260,310,400,500,600,800,1000,1200,1500,1800,2500};

for (int i=0; i<5;i++)
        {

          TH1F *h5   = (TH1F*)f->Get(names[i].c_str());
          h5->Sumw2();
          R2 = new TH1F("R2", " ", 14, bins);          
          R2->Divide(h5,h1,1,1,"B");
          R2->Draw("E1");      
          R2->GetXaxis()->SetTitle("p_{T} (GeV)"); 

         
         if(i==4) {
                     R2->SetMaximum(0.01); //to set the y axis maximum
                     R2->SetMinimum(0.00); // to set the y axis minimum
                     R2->SetAxisRange(0,pi);
                   }
         else  
                   {
                      R2->SetMaximum(0.01); //to set the y axis maximum
                      R2->SetMinimum(0.00); // to set the y axis minimum
                      R2->SetAxisRange(0,ni);
                    }
          R2->SetMarkerStyle(20); R2->SetMarkerColor(3);
         // R2->SetMarkerSize(7);
          


          TH1F *h6   = (TH1F*)f->Get(pnames[i].c_str());
          h6->Sumw2();
          R3 = new TH1F("R3", "", 14, bins);          
          R3->Divide(h6,P1,1,1,"B");
          R3->Draw("E1,same");
          R3->SetMarkerStyle(21);// R2->SetMarkerColor(20);




          TH1F *h2   = (TH1F*)f->Get(nnames[i].c_str());
          h2->Sumw2();
          hh = new TH1F("hh","",14,bins);
          hh->Divide(h2,N1,1,1,"B");        
          hh->Draw("E1,same");
          hh->SetMarkerStyle(5);

  
        c1->SetLogx(1);
          
  leg = new TLegend(0.125,0.6,0.5,0.85);  
  leg->SetTextSize(0.03);   leg->SetBorderSize(0);
  leg->AddEntry(R2,"only JES correction");
  leg->AddEntry(R3,"JES+Positive uncertainity"); //"l" for a line
  leg->AddEntry(hh,"JES-negative Uncertainity");  
  leg->Draw();

   TPaveText *pt = new TPaveText(0.04,0.9190678,0.7406322,0.997,"blNDC");
   text = pt->AddText(ptneigh.c_str()); text = pt->AddText(deltaR[i].c_str()); pt->SetBorderSize(0);pt->SetTextSize(0.035);
   pt->Draw();


  //ylabel
TText *t2 = new TText();
t2->SetTextFont(62);
t2->SetTextAlign(12);
t2->SetTextSize(0.05);//percentage of the pad height
t2->SetTextAngle(90);
t2->DrawTextNDC(0.015,0.32,"fraction");
//t2->SetBorderSize(0);

   
c1->SaveAs(eps[i].c_str());
c1->SaveAs(pdf[i].c_str());


delete hh; delete R2; delete R3;

   }//end of for loop 

}



