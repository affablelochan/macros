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

void demo()

     {
                  char name[10], title[20];
                  TObjArray Hlist(0);       // create an array of Histograms
                  TH1F* g;                  // create a pointer to a histogram
  // make and fill 15 histograms and add them to the object array
          for (Int_t i = 0; i < 15; i++) {
                      sprintf(name,"lochan%d",i);
                      sprintf(title,"histo number:%d",i);
                      g = new TH1F(name,title,100,-4,4);
                      Hlist.Add(g); //changed from -> to .
                      g->FillRandom("gaus",1000);
                     }
  // open a file and write the array to the file
  TFile f("lochan.root","recreate");
  f->mkdir("Wed011003");
  f->cd("Wed011003");
  Hlist.Write(); //changed from -> to .
  f.Close();
}



