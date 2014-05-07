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
 string MCfilename = "ana090129.root"; 
 cout << MCfilename << endl;

 TFile* f = new TFile(MCfilename.c_str());
        f->TFile::Open();

          TH1F *h1   = (TH1F*)f->Get("y1JT45");
	  h1->Sumw2();
       
          h1->Draw();
          TH1F *h2   = (TH1F*)f->Get("y1JT65");
          h2->Sumw2();
       

          TH1 *h3 = new TH1F("h3","JT 65/45",60,20,120);
          h3->Divide(h2,h1,1,1,"B");

float L15= .914357*.0987;
float L45= .9188*17.1763;
float L65= .915148*72.9970;
float L95= .9239*507.72;
float L125= .9284*707.2509;
float L25= .917114*1.5374;

         float L=(L45/L65); // always smaller by larger since it is reciprocal


         h3->Scale(L); // multiplying with constant
       
         h3->Draw();
         h3->SetMaximum(1.4); //to set the y axis maximum
         h3->SetMinimum(.5); // to set the y axis minimum
         h3->GetXaxis()->SetTitle("PT");
         h3->GetYaxis()->SetTitle("Cross section");
         h3->GetXaxis()->SetRangeUser(40,70);
//gStyle->SetOptfit(111);
         //gStyle->SetCanvasBorderMode(0);
         //h3->Fit("pol2");
//TF1* func1 = new TF1(“func1”, “[0]*x*exp([1]*x)”);

TF1* func1= new TF1("func1","[0]*x*x+([1]*x)+[2]");
func1->SetParameters(50.0,.5,-50); //“[0]*x*exp([1]*x)”)
h3->Fit("func1");

//TF1* func2 = new TF1("func1","pol2(0)+expo(1)");
//h3->Fit("func1");
//TLegend *legend=new TLegend(0.6,0.65,0.88,0.85);
   //legend->SetTextFont(72);
   //legend->SetTextSize(0.04);
   //legend->AddEntry(h3,"Divided histogram","l");
   //legend->AddEntry(backFcn,"Background fit","l");
   //legend->AddEntry(signalFcn,"Signal fit","l");
   //legend->AddEntry(fitFcn,"Global Fit","l");
   //legend->Draw();
   


//c1->SaveAs("fJT6545.eps");

}
