// -*- C++ -*-
//i found how to change the x axis limits without affecting the data. 
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


void tline(){
  TCanvas *c1 = new TCanvas("c1");
  TH1 *h= new TH1F("h","test",100,-4,4);
  h->FillRandom("gaus",10000);
  h->Draw();
  Float_t ymax = h->GetMaximum();
  TLine *line = new TLine(-3,ymax,3,ymax);
  line->SetLineColor(kRed);
  line->Draw();
}
