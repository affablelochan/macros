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
#include "TGraphAsymmErrors.h"
void singlejeteff(){


Double_t xbins[13] = {10,20,30,35,40,45,50,60,80,90,100,150,200};
int nbins = 12;

 TFile* g = new TFile("oct9/effoct11.root");
        g->TFile::Open();
          TH1F *h   = (TH1F*)g->Get("Denom");
	  h->Sumw2();
          h->Rebin(2,"hnew");




          TH1F *h20   = (TH1F*)g->Get("a4tt/hista4tt15");
          //h20->Sumw2();  h20->Rebin(nbins,"hnew20",xbins); 
          h20->Rebin(2,"hnew20");


          TH1F *h20h   = (TH1F*)g->Get("a4ttjes/hista4ttjes35");
          //h20h->Sumw2();  h20h->Rebin(nbins,"hnew20h",xbins); 
          h20h->Rebin(2,"hnew20h");

    
     
      
       TGraphAsymmErrors *h5=new TGraphAsymmErrors(hnew20,hnew);
         h5->Draw("AP");
         h5->SetMarkerStyle(20); //h5->SetMarkerSize(1.6);
         h5->SetMaximum(1.2); //to set the y axis maximum
         h5->SetMinimum(0.1); // to set the y axis minimum
         h5->GetXaxis()->SetRangeUser(0.,120.);
         h5->GetXaxis()->SetTitle("Leading jet p_{T,offline} (EM+JES) [GeV]");
         h5->GetYaxis()->SetTitle("Efficiency");


     
        TGraphAsymmErrors *h6=new TGraphAsymmErrors(hnew20h,hnew);
        h6->Draw("P,same");
        h6->SetMarkerStyle(22);h6->SetMarkerColor(2);h6->SetLineColor(2);h6->SetLineStyle(2);   



       

TPaveText *pt = new TPaveText(0.506182,0.4016529,0.75163,0.65,"blNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);            
   pt->AddText("| #eta_{offline} | <2.8");
   pt->Draw("same");




  TLegend *leg = new TLegend(0.506182,0.2016529,0.75163,0.4,"","brNDC");leg->SetFillColor(kWhite);  leg->SetBorderSize(0);
  leg->SetTextSize(0.05);
  leg->SetTextFont(42);
  leg->AddEntry(h5,"L2FS EM J15");    
  leg->AddEntry(h6,"L2FS EM+JES J35");  
  leg->SetBorderSize(0);
  leg->SetTextSize(0.05);   
  leg->SetTextFont(42);   
  leg->Draw("same");

         //c1->SetGridx();         c1->SetGridy();
                        //  c1->SetGridx();         c1->SetGridy();         //c1->SetLogx(1);
 //h6->Draw("HIST,C,same");h6->SetLineColor(2); 

       //c1->SetGridx();         c1->SetGridy();
  

          //TH1F *h5 = new TH1F("h5","L2FS_6j25  Efficiency",nbins,xbins);
         // TH1F *h5 = new TH1F("h5","L2FS_6j25  Efficiency",125,0,500);
         // h5->Divide(hnew20,hnew,1,1,"B");

}
