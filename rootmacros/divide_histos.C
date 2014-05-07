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

void divide_histos(){


 string MCfilename = "ana090129.root"; 
 cout << MCfilename << endl;

 TFile* f = new TFile(MCfilename.c_str());
        f->TFile::Open();

          TH1F *h1   = (TH1F*)f->Get("y1JT15");
	  h1->Sumw2();
          TH1F *h2   = (TH1F*)f->Get("y1JT25");
          h2->Sumw2();

          TH1 *h3 = new TH1F("h3","JT 25/15",60,20,320);
          h3->Divide(h2,h1,1,1,"B");

float L15= .914357*.0987;
float L45= .9188*17.1763;
float L65= .915148*72.9970;
float L95= .9239*507.72;
float L125= .9284*707.2509;
float L25= .917114*1.5374;

         float L=(L15/L25); // always smaller by larger since it is reciprocal


         h3->Scale(L); // multiplying with constant
         h3->Draw();
         h3->SetMaximum(2); //to set the y axis maximum
         h3->SetMinimum(0); // to set the y axis minimum
         h3->GetXaxis()->SetTitle("PT");
         h3->GetYaxis()->SetTitle("Cross section");

  h3->Fit("pol2");

//c1->SaveAs("fJT2515.eps");

}
