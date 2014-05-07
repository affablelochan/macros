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

TH2F *h1,*h2;

void colz(){

gStyle->SetPalette(1);

 TFile* f = new TFile("2011.root");
   //     f->TFile::Open();
   TDirectory* dataDir = (TDirectory*)(f->Get("2d"));
 //TH2F *h1   = (TH2F*)dataDir->Get("pvtx_roi2d");
  TH2F *h1   = (TH2F*)dataDir->Get("mu_roi2d");
         
h1->Draw("colz");
// h1->GetYaxis()->SetRange(-0.5,14.5);
 h1->GetXaxis()->SetRange(-0.5,14.5);
 h1->GetXaxis()->SetTitle(" Average Int. per lumiblock");
// h1->GetXaxis()->SetTitle("Number of Primary Vertex");
h1->GetYaxis()->SetTitle("ROI_centraljets");

TPaveText *pt = new TPaveText(0.466954,0.8199153,0.908046,0.8919492,"blNDC");
   pt->SetBorderSize(0);
   pt->SetTextFont(42); 
   pt->SetFillColor(0);
   text = pt->AddText("period D-I");   
   pt->Draw();


 
}
