// -*- C++ -*-
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


void divide_histo(){

string run[12] = {"183544","183581","183780","183963","184066","184074","184130","183580","183602","184022","184072","184088","184169"};

for(i=0;i<13;i++)
{

 string MCfilename = run[i]+".root"; 
 cout << MCfilename << endl;
 string plot = "plots/"+run[i]+".eps" ;
 cout << plot <<endl;
 string tex = "2011 periodH "+run[i];
 cout <<tex <<endl;


 TFile* f = new TFile(MCfilename.c_str());
        f->TFile::Open();

          TH1F *h1   = (TH1F*)f->Get("J10_lbn_vs_n_rois");
	  h1->Sumw2();
          TH1F *h2   = (TH1F*)f->Get("J10_lbn_vs_n_events");
          h2->Sumw2();


          TH1 *h3 = new TH1F("J10_Ratio","ratio",1515,-0.5,1514.5);
          h3->Divide(h1,h2,1,1,"B");

         h3->Draw();
         h3->GetYaxis()->SetTitle("N_ROI/N_events");
         h3->GetXaxis()->SetTitle("Lumi Block");
         h3->GetYaxis()->SetTitleOffset(1.6);
         h3->GetXaxis()->SetTitleSize(0.04);
         h3->GetYaxis()->SetTitleSize(0.04);
         h3->SetMarkerStyle(1);
         
 
 TPaveText *pt = new TPaveText(.4,0.3290678,0.8406322,0.3695,"blNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   text = pt->AddText(tex.c_str());   
   pt->Draw();


c1->SaveAs(plot.c_str());
}
}
