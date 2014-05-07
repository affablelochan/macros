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

void M3jet(){
   

// Set up varibles
//************************************
    string pTmin;
    cout << "pTmin " << endl;
    cin >> pTmin;
//************************************    
      string data;
      cout << "data" << endl;
      cin >> data;
//**************************************8
 string MCfilename = "Data_JT"+data+"_pTmin"+pTmin+".histos.root"; 
 cout << MCfilename << endl;    
 TFile* f = new TFile(MCfilename.c_str());
 f->TFile::Open();

 TH1F *M3jet   = (TH1F*)f->Get("M3jet");

    TCanvas* c1=new TCanvas("Data_JT95"," ");
    c1->cd(1);// this is not necessary as we re plotting only one plot
    M3jet->Draw();
    c1->SaveAs("M3jet2.eps");
}
