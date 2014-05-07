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

//TH2F *h1,*h2;

void colz(){

gStyle->SetPalette(1);

 TFile* f = new TFile("r0000194374_lEoR_ATLAS_MDA-HistogrammingHLT_HistogrammingHLT.root");
        f->TFile::Open();
        
TDirectory* da = (TDirectory*)(f->Get("HistogrammingHLT/Top-LVL2-L2-Segment-1-Gatherer/EXPERT/T2L1CaloFullScanFastJet_TT_Jet"));
TH2F *h1   = (TH2F*)da->Get("Eta_vs_E");
TH2F *h2   = (TH2F*)da->Get("Eta_vs_Eem");
TH2F *h3   = (TH2F*)da->Get("Eta_vs_Ehad");
TH2F *h4   = (TH2F*)da->Get("Eta_vs_Et");
TH2F *h5   = (TH2F*)da->Get("Eta_vs_Etem");
TH2F *h6   = (TH2F*)da->Get("Eta_vs_Ethad");
TH2F *h7   = (TH2F*)da->Get("Eta_vs_Phi");
TH2F *h8   = (TH2F*)da->Get("Phi_vs_E");
TH2F *h9   = (TH2F*)da->Get("Phi_vs_Et");
TH2F *h10   = (TH2F*)da->Get("Phi_vs_Ethad");
TH2F *h11   = (TH2F*)da->Get("Phi_vs_Etem");




TFile *myfile = new TFile("194374.root","UPDATE");
myfile->mkdir("TTofficial");
myfile->cd("TTofficial");
h1->Write();
h2->Write();
h3->Write();
h4->Write();
h5->Write();
h6->Write();
h7->Write();
h8->Write();
h9->Write();
h10->Write();
h11->Write();




/*
TH2F *h1   = (TH2F*)da->Get("Eta_vs_Ehad");

//          TH2F *h2   = (TH2F*)f->Get("etacorr");
 //         TH1F *h3   = (TH1F*)f->Get("residualcorrection");

         
h1->Draw("colz");



 TFile* g = new TFile("194287.root");
        g->TFile::Open();
        
TDirectory* de = (TDirectory*)(g->Get("JE"));
TH2F *h2   = (TH2F*)de->Get("etaEhadJE");
//h2->Draw("colz");

// h1->GetYaxis()->SetRange(-0.5,14.5);
//h1->GetXaxis()->SetRange(-0.5,59.5);

//h1->GetXaxis()->SetTitle("Calibrated offline jet Energy [MeV]");
//h1->GetYaxis()->SetTitle("residual correction");
//h1->SetTitle("");
//c1->SaveAs("ecorr.eps");

//h1->Draw("colz");
//h1->GetXaxis()->SetTitle("#eta offline jets");
//h2->GetYaxis()->SetTitle("Residual correction");
//h2->SetTitle("");
//c1->SaveAs("etacorr.eps");
//          gStyle->SetOptStat(0);


//h3->Draw();
//h3->GetYaxis()->SetTitle("Nevents");
//h3->GetXaxis()->SetTitle("residual correction");
//c1->SaveAs("corr.eps");



//TPaveText *pt = new TPaveText(0.466954,0.8199153,0.908046,0.8919492,"blNDC");
 //  pt->SetBorderSize(0);
 //  pt->SetTextFont(42); 
 //  pt->SetFillColor(0);
 //  text = pt->AddText("period D-I");   
 //  pt->Draw();
*/

 
}
