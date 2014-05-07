//Here root file has trees. Trees has leaves also called histograms. 
//this code opens a root file. Then it opens the tree inside. Then plot any leaves/histogram inside
 // http://www-pnp.physics.ox.ac.uk/~wilson/Teaching/root_tut/LearnRoot.html#link_root  This link is good
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

void opentree(){



 TFile* f = new TFile("group10.perf-jets.data10_7TeV.00155118.physics_MinBias.recon.ESD.r1299_JetEtMissDPDModifier000025.v1.EXT0._00014.qcd.root");
   //     f->TFile::Open(); this can be done if the rootfile has only histograms in it


//TDirectory* dataDir = (TDirectory*)(f->Get("CollectionTree")); 

//----- Get the tree
TTree* dTree = (TTree*)(f->Get("CollectionTree"));
dTree->Print();//to print information in a tree
dTree->Draw("RunNumber");
c1->SaveAs("runnmber.jpg"); 


}
