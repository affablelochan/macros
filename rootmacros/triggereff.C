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

void single(){
  gStyle->SetOptStat(0);
  gStyle->SetPalette(1);
  gROOT->SetStyle("Plain");


 string MCfilename = "effnotrig.root"; 
 cout << MCfilename << endl;

Double_t xbins[13] = {0,10,20,30,40,50,60,70,80,100,150,200,250};
int nbins = 12;
 TFile* f = new TFile(MCfilename.c_str());
        f->TFile::Open();
 TFile* g = new TFile("sept11.root");
        g->TFile::Open();
          TH1F *h   = (TH1F*)f->Get("Denom");
	  h->Sumw2();
          h->Rebin(nbins,"hnew",xbins);     



          TH1F *h20   = (TH1F*)f->Get("a4tt20");
          h20->Sumw2(); h20->Rebin(nbins,"hnew20",xbins);
          TH1F *h20h   = (TH1F*)f->Get("a4ttjes20");
          h20h->Sumw2();h20h->Rebin(nbins,"hnew20h",xbins);

    
      



          TH1F *h5 = new TH1F("h5","L2FS_6j20  Efficiency",nbins,xbins);
          h5->Divide(hnew20,hnew,1,1,"B");

          TH1F *h6 = new TH1F("h6","L2FS_6j20had  Efficiency",nbins,xbins);
          h6->Divide(hnew20h,hnew,1,1,"B");
      

       


 TCanvas *c1 = new TCanvas("c1", "c1",15,49,1047,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-76.80999,-1.40678,404.2372,1.124294);


   gPad->SetTickx(1);
   gPad->SetTicky(1);







    



         h5->Draw("E1");h5->SetMarkerStyle(22); h5->SetMarkerSize(1.6);
         //c1->SetGridx();         c1->SetGridy();
         h5->SetMaximum(1.5); //to set the y axis maximum
         h5->SetMinimum(0.); // to set the y axis minimum
         h5->GetXaxis()->SetRangeUser(0.,300.);
         h5->GetXaxis()->SetTitle("Sixth jet E_{T} [GeV]");
         h5->GetYaxis()->SetTitle("Efficiency");
         //c1->Print(pdfname.c_str());


         h6->Draw("E1,same");h6->SetMarkerStyle(26);h6->SetMarkerColor(2); h6->SetMarkerSize(1.6);
         //c1->SetGridx();         c1->SetGridy();
         h6->SetMaximum(1.2); //to set the y axis maximum
         h6->SetMinimum(0.); // to set the y axis minimum
         h6->GetXaxis()->SetRangeUser(0.,300.);
         
 TLegend *leg = new TLegend(0.506182,0.2016529,0.75163,0.4,NULL,"brNDC");
leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
  leg->AddEntry(h5,"L2FS em scale");    
  leg->AddEntry(h6,"L2FS em+jes");     
  leg->Draw("same");

  TPaveText *pt = new TPaveText(0.5704698,0.6755952,0.8849473,0.8839286,"blNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextSize(0.05);
   TText *text = pt->AddText("ATLAS internal");
   text = pt->AddText("#geq 6_{offline} jets");
   text = pt->AddText("Data 2012 ");
   text = pt->AddText("#sqrt{s} = 8 TeV");
   pt->Draw("same");


         c1->SaveAs("j20.eps");



        
}
