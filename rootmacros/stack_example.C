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

void stack_example(){


TH1F h1("h1","",100,-3,3);
TH1F h2("h2","",100,-3,3);
TH1F h3("h3","",100,-3,3);
h1.FillRandom("gaus",10000);
h2.FillRandom("pol0",5000);
h3.FillRandom("pol3",1000);

THStack stack("stack", "stacked histo example");
stack.Add(&h1);
stack.Add(&h2);
stack.Add(&h3);

h1.SetFillColor(kBlue);
h2.SetFillColor(kRed);
h3.SetFillColor(kGreen);

stack.Draw();
}
