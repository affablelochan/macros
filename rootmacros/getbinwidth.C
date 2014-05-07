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

void divide_histos(){

TCanvas *c1 = new TCanvas("c1", "c1");
 string MCfilename = "second.root"; 
 cout << MCfilename << endl;

 TFile* f = new TFile(MCfilename.c_str());
        f->TFile::Open();

          TH1F *h1   = (TH1F*)f->Get("pT15_y2");
          TH1F *h2   = (TH1F*)f->Get("pT25_y2");
         
         int c=h1->GetXaxis()->GetNbins();
         double xl = h1->GetBinLowEdge(1);
         double xh = h1->GetBinLowEdge(c)+h1->GetBinWidth(c);
         cout<<"lower "<<xl<< endl;
         cout<<"higher"<<xh<< endl;cout<<"number of bins "<<c<< endl;


          TH1 *h3 = new TH1F("h3","JTy2_25/15",c,xl,xh);
          //  TH1 *h3 = new TH1F("h3","JT 25/15",96,20,500);
             h3->Divide(h2,h1,1,1,"B");


//float L15= .914357*.0987;
//float L45= .9188*17.1763;
//float L65= .915148*72.9970;
//float L95= .9239*507.72;
//float L125= .9284*707.2509;
//float L25= .917114*1.5374;

  //       float L=(L45/L65); // always smaller by larger since it is reciprocal


    //     h3->Scale(L); // multiplying with constant

         h3->Draw();
//         h3->SetMaximum(1.4); //to set the y axis maximum
//         h3->SetMinimum(.5); // to set the y axis minimum
         h3->GetXaxis()->SetTitle("PT");
         h3->GetYaxis()->SetTitle("Trigger Efficiency");
         h3->SetAxisRange(25,300);
//c1->SaveAs("JTeff4525.eps");

}
