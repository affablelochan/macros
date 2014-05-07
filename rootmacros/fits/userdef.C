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
#include <TMath>

void userdef(){



 TFile* f = new TFile("lochan2.root");
        f->TFile::Open();

         TH1F *h1   = (TH1F*)f->Get("pT15_y2");
         TH1F *h2   = (TH1F*)f->Get("pT25_y2");

                 int c=h1->GetXaxis()->GetNbins();
	         double xl = h1->GetBinLowEdge(1);
	         double xh = h1->GetBinLowEdge(c)+h1->GetBinWidth(c);

         cout<<"lower "<<xl<< endl;
         cout<<"higher"<<xh<< endl;cout<<"number of bins "<<c<< endl;

          //creating of new histogram using the bin specification of first two
          TH1 *h3 = new TH1F("h3","JT_y2_25/15",c,xl,xh);
          h3->Sumw2();
          h3->Divide(h2,h1,1,1,"B"); // B for binomial errors

                         float L15= .914357*.0987;
                         float L45= .9188*17.1763;
                         float L65= .915148*72.9970;
                         float L95= .9239*507.72;
                         float L125= .9284*707.2509;
                         float L25= .917114*1.5374;

         float L=(L15/L25); // always smaller by larger since it is reciprocal


         h3->Scale(L); // multiplying with constant
         h3->Draw();
         h3->SetMaximum(1.6); //to set the y axis maximum
         h3->SetMinimum(0); // to set the y axis minimum
         h3->GetXaxis()->SetTitle("PT");
         h3->GetYaxis()->SetTitle("Cross section");
         //h3->GetXaxis()->SetRangeUser(65,85);
         h3->SetAxisRange(10,120); //was140-210 and later 160 to 210 



         func1= new TF1("func1","0.5+0.5*TMath::Erf((x-[0])/TMath::Abs([1]+[2]*log(x)+[3]*(log(x)*log(x))))",0,300);
         //func1->SetParameters(60,20,10,10); //generalise soon   
float za=75;
float zb=10;
float zc=(0.5)*zb;
float zd=(1/20)*zb;
func1->SetParameters(za,zb,zc,zd);
        func1->SetParNames("Mu","sigma0","Sigma1","sigma2");
         gStyle->SetOptFit(10111);
         h3->Fit("func1");


//TLegend *legend=new TLegend(0.6,0.65,0.88,0.85);
   //legend->SetTextFont(72);
   //legend->SetTextSize(0.04);
   //legend->AddEntry(h3,"Divided histogram","l");
   //legend->AddEntry(backFcn,"Background fit","l");
   //legend->AddEntry(signalFcn,"Signal fit","l");
   //legend->AddEntry(fitFcn,"Global Fit","l");
   //legend->Draw();



//c1->SaveAs("fJ6545fit.jpg");

}
