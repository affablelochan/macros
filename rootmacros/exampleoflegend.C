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
	M3jet->Sumw2();
//TH2D *h2= new TH2F("2","2d hist title",num_bins,x_low,x_high);

    TCanvas* c1=new TCanvas("Data_JT95"," ");
    c1->cd(1);
    M3jet->SetLineColor(2);
    M3jet->Draw();
    M3jet->GetXaxis()->SetTitle("Label of x axis        ");
    M3jet->GetYaxis()->SetTitle("Label of y axis        ");
//M3jet->TAttLine(1,30,1);
    //M3jet->Fit("landau");
M3jet->Fit("landau");
    leg = new TLegend(0.4,0.6,0.70,0.8);  //the coordinates put the legend corners
                                       //various fractions of the way along the canvas
 leg->SetTextSize(0.04);

  leg->AddEntry(M3jet,"M3jet with error bars","l"); //"l" for a line
  //leg->AddEntry("+","error bars","l");   //use "f" for a box to show which
  leg->Draw();

   // c1->SaveAs("M3jet.eps");
}
