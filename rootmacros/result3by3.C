// -*- C++ -*-//pt neighbour >40 deta
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



 


TH1F *h1, *h2, *h5, *h6, *hh, *R2, *R3, *P1, *N1;
int count =0; 
 
void result3by3(){
  gROOT->SetStyle("Plain");
  gStyle->SetTitleBorderSize(0);
  gStyle->SetFrameFillColor(kWhite);
  gStyle->SetPalette(1);
  gStyle->SetOptStat(0);

   //gStyle->SetPadTopMargin(0.);//
   gStyle->SetPadBottomMargin(0.);
   gStyle->SetPadLeftMargin(0.);
   //gStyle->SetPadRightMargin(0.); //kc not using
   //gStyle->SetTitle("Result");

  string MCfilename = "A_F.root"; 
  cout << MCfilename << endl;

string names[8] = {"histy1","histy3","histy5","histy11","histy13","histy15","histy111","histy113","histy115"};
string pnames[8] ={"pisty1","pisty3","pisty5","pisty11","pisty13","pisty15","pisty111","pisty113","pisty115"};
string nnames[8] = {"nisty1","nisty3","nisty5","nisty11","nisty13","nisty15","nisty111","nisty113","nisty115"};

string deltaR[2] = {"0.6 < #DeltaR <1.0","1.4 < #DeltaR <1.8","2.2 < #DeltaR <2.6" }; // loop with j
string ptneigh[2] ={"p_{T}neighbour >40 GeV","p_{T}neighbour >60 GeV","p_{T}neighbour >80 GeV"};//loop with i 
double xmax[3]={0.013,0.01,0.008};

 TFile* f = new TFile(MCfilename.c_str());
        f->TFile::Open();

          TH1F *h1   = (TH1F*)f->Get("hist");
	  h1->Sumw2();
        
          TH1F *P1   = (TH1F*)f->Get("pist");
	  P1->Sumw2();
         
          TH1F *N1   = (TH1F*)f->Get("nist");
	  N1->Sumw2();
 
          Double_t bins[15] = {80, 110, 160, 210,260,310,400,500,600,800,1000,1200,1500,1800,2500};

TCanvas *c1 = new TCanvas("c1", "Results-Detector Level");//we are not creating a canvas because it will again be created in TH1F
c1->Divide(3,3);




for (int i=0; i<3;i++)  //for neighbout 40 60 80 loop
        { 
        for (int j=0; j<3;j++)  //for delta r 3 regions
             {
       

                     c1->cd(count+1);
                     TH1F *h5   = (TH1F*)f->Get(names[count].c_str());
                     h5->Sumw2();
                     R2 = new TH1F("R2", " ", 14, bins);          
                     R2->Divide(h5,h1,1,1,"B");
                     R2->Draw("E1");      
                     R2->GetXaxis()->SetTitle("p_{T} (GeV)"); 
                     R2->SetMaximum(xmax[i]); //to set the y axis maximum
                     R2->SetMinimum(0.00); // to set the y axis minimum
                     R2->SetAxisRange(0,450);
                     R2->SetMarkerStyle(20); 
                     R2->SetMarkerColor(3);                         
                     R2->GetXaxis()->SetNoExponent(1);
                     R2->GetXaxis()->SetMoreLogLabels(1);
 
                     TH1F *h6   = (TH1F*)f->Get(pnames[count].c_str());
                     h6->Sumw2();
                     R3 = new TH1F("R3", "", 14, bins);          
                     R3->Divide(h6,P1,1,1,"B");
                     R3->Draw("E1,same");
                     R3->SetMarkerStyle(21);


                    TH1F *h2   = (TH1F*)f->Get(nnames[count].c_str());
                    h2->Sumw2();
                    hh = new TH1F("hh","",14,bins);
                    hh->Divide(h2,N1,1,1,"B");        
                    hh->Draw("E1,same");
                    hh->SetMarkerStyle(5);
                     c1-> cd(count+1)->SetLogx(1);
                     
                     //delete hh; delete R2; delete R3; 
                     count=count+1;
            
                  if(i==1 && j==1)
                            {
             			 leg = new TLegend(0.125,0.4,0.5,0.85);  
  			  leg->SetTextSize(0.03);   leg->SetBorderSize(0);
			  leg->AddEntry(R2,"only JES correction");
			  leg->AddEntry(R3,"JES+Positive uncertainity"); //"l" for a line
			  leg->AddEntry(hh,"JES-negative Uncertainity");  
			  leg->Draw();
                            }
                     
              }
         }


//c1->SaveAs("by3.eps");
//c1->SaveAs("by3.pdf");c1->SaveAs("by3.eps");

 }
