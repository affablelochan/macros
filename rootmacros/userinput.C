//Here root file has trees. Root file should have only histogram and no folder or trees. 
// Opens 4 histograms and print their second bin content/ 

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
#include <TMath>

void printval(){

  string MCfilename; 
  cout<< "enter complete path of root file"<<endl;
  getline(cin,MCfilename);
  cout << MCfilename << endl;


 TFile* f = new TFile(MCfilename.c_str());
 f->TFile::Open(); //this can be done if the rootfile has only histograms in it

TH1F *h1 = f->Get("hist");
TH1F *h2 = f->Get("histTT");
TH1F *h3 = f->Get("histJE");
TH1F *h4 = f->Get("total");

cout << "total number of events ="<< h4->GetBinContent(2) <<endl;
cout << "total number of l15 events ="<< h1->GetBinContent(2) <<endl;
cout << "total number of TT events ="<< h2->GetBinContent(2) <<endl;
cout << "total number of JE events ="<< h3->GetBinContent(2) <<endl;


// gStyle->SetOptStat();
// h1->Draw(); 


}
