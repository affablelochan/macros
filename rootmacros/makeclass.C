
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
#include <TMath>


makeclass()
 {
   TFile *f1 = new TFile("/home/rajivalochan/Desktop/analysis/group10.perf-jets.data10_7TeV.00155118.physics_MinBias.recon.ESD.r1299_JetEtMissDPDModifier000025.v1.EXT0._00007.qcd.root");
    TTree *t = (TTree *)f1->Get("qcd");
    t->MakeClass("Analysis_rajiv");
  
   //TChain fChain("qcd");
   //fChain.Add("/home/rajivalochan/Desktop/analysis/group10.perf*.root");
   //fChain.Draw("jet_AntiKt4H1TopoNew_pt");
}

/*
or simply from root prompt  
 f = new TFile("F00017566_0000.sntp.root","READ");
 t = (TTree*)(f->Get("NtpSR"));
 t -> MakeClass();

*/
