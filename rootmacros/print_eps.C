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


void prnt(){

string run[13] = {"183544","183581","183780","183963","184066","184074","184130","183580","183602","184022","184072","184088","184169","periodH"};

for(i=0;i<14;i++)
{

 string MCfilename ="root/"+run[i]+".root"; 
 cout << MCfilename << endl;
 string plot = "lb_roi/"+run[i]+".eps" ;
 cout << plot <<endl;
 string event = "lb_event/"+run[i]+".eps" ;
 cout << event <<endl;

 string tex = "2011 periodH "+run[i];
 cout <<tex <<endl;


 TFile* f = new TFile(MCfilename.c_str());
        f->TFile::Open();

          TH1F *h1   = (TH1F*)f->Get("J10_lbn_vs_n_rois");
	  h1->Sumw2();
          TH1F *h2   = (TH1F*)f->Get("J10_lbn_vs_n_events");
          h2->Sumw2();
         
h1->Draw(); 
h1->SetMarkerStyle(1);
 TPaveText *pt = new TPaveText(.4,0.3290678,0.8406322,0.3695,"blNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   text = pt->AddText(tex.c_str());   
   pt->Draw();
c1->SaveAs(plot.c_str());

h2->Draw();
h2->SetMarkerStyle(1);
 TPaveText *pt = new TPaveText(.4,0.3290678,0.8406322,0.3695,"blNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   text = pt->AddText(tex.c_str());
   pt->Draw();
c1->SaveAs(event.c_str());



}
}
