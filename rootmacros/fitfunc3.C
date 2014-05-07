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

void userdef2(){



 TFile* f = new TFile("ana090129.root");
        f->TFile::Open();

          TH1F *h1   = (TH1F*)f->Get("y1JT95");
          TH1F *h2   = (TH1F*)f->Get("y1JT125");

                 int c=h1->GetXaxis()->GetNbins();
	         double xl = h1->GetBinLowEdge(1);
	         double xh = h1->GetBinLowEdge(c)+h1->GetBinWidth(c);

         cout<<"lower "<<xl<< endl;
         cout<<"higher"<<xh<< endl;cout<<"number of bins "<<c<< endl;

          //creating of new histogram using the bin specification of first two
          TH1 *h3 = new TH1F("h3","JT 125/95",c,xl,xh);
          h3->Sumw2();
          h3->Divide(h2,h1,1,1,"B"); // B for binomial errors
         
                         float L15= .914357*.0987;
                         float L45= .9188*17.1763;
                         float L65= .915148*72.9970;
                         float L95= .9239*507.72;
                         float L125= .9284*707.2509;
                         float L25= .917114*1.5374;

         float L=(L95/L125); // always smaller by larger since it is reciprocal


         h3->Scale(L); // multiplying with constant
         h3->Draw();
         h3->SetMaximum(1.2); //to set the y axis maximum
         h3->SetMinimum(0); // to set the y axis minimum
         h3->GetXaxis()->SetTitle("PT");
         h3->GetYaxis()->SetTitle("Cross section");
         h3->SetAxisRange(110,310); //was140-210 and later 160 to 210 



//TF1* func1= new TF1("func1","0.5+0.5*TMath::Erf([0]*x/(1+TMath::Abs([1]+[2]*log(x)+[3]*(log(x)*log(x)))))",30,300);
TF1* func1= new TF1("func1","[0]*TMath::Erf((x-[1])/[2])",3,300);
func1->SetParameters(1,130,28.57);//32.85

//func1->SetParameters(0,1);//x2
//func1->SetParameters(1,140);//x0
//func1->SetParameters(2,32.85);//x1

func1->SetParNames("x2","x0","x1");
h3->Fit("func1");


           gStyle->SetOptFit(10111);



//c1->SaveAs("fJ12595fitlandau.eps");

}
