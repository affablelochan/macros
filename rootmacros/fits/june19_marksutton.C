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

void june19(){

string titeta[8] = {"0 < |#eta| <0.8","0.8 < |#eta| <1.6","1.6 < |#eta| <2.5","2.5 < |#eta| <3.2","3.2 < #eta <4","-3.2 > #eta >-4.0","4.0 < #eta <4.9","-4.0 > #eta >-4.9"};


string open = "twod.pdf("; 
string close = "twod.pdf)";
string pdfname = "twod.pdf";

string namehist[8] ={"hist08","hist0816","hist1625","hist2532","hist3240","histn3240","hist4049","histn4049"};
string eps[8] ={"hist08.eps","hist0816.eps","hist1625.eps","hist2532.eps","hist3240.eps","histn3240.eps","hist4049.eps","histn4049.eps"};

 TCanvas *c1 = new TCanvas("c1", "c1",15,49,1047,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-76.80999,-1.40678,404.2372,1.124294);
gPad->SetLogx(1);gPad->SetGridx(); gPad->SetGridy();

 string MCfilename = "demo1.root"; 
 cout << MCfilename << endl;

 TFile* f = new TFile(MCfilename.c_str());
       // f->TFile::Open();
         gStyle->SetOptFit(1);

TF1 *function[8], *function2[8];

for (int i=0;i<8;i++){
//int i=7;
          TH1F *h1   = (TH1F*)f->Get(namehist[i].c_str());	         
    h1->Sumw2();
h1->SetMinimum(-0.5);
h1->SetMaximum(0.1);
//if(i<4 || i==7){
int start = 0; 
//int start=400;
//if(i==3){start=250;}
//if(i==7){start=30;}
//if(i>5){start=30;}
//if(i==4 || i==5){start=20;}
//eta0_08= new TF1("eta0_08","0.5*([0]+[1]*TMath::Log(x)+[2]*(TMath::Log(x)*TMath::Log(x))+[3]*(TMath::Log(x)*TMath::Log(x)))",0,1000); 
//eta0_08= new TF1("eta0_08","0.5*([0]+[1]*TMath::Log(x)+[2]*(TMath::Log(x)*TMath::Log(x)))",start,1000); 
/*
//eta0_08= new TF1("eta0_08","0.5*([0]+[1]*TMath::Log(x)+[2]*(TMath::Log(x)*TMath::Log(x))+[3]*(TMath::Log(x)*TMath::Log(x)*TMath::Log(x)))",0,1000); 
eta0_08= new TF1("eta0_08","[0]+[1]*(1/TMath::Log(x))+[2]*((1/TMath::Log(x))*(1/TMath::Log(x)))+[3]*((1/TMath::Log(x))*(1/TMath::Log(x))*(1/TMath::Log(x)))",20,5000); 

*/       
          if(i>4){llim=0;
       eta0_08 = new TF1("eta0_08", "([0] + (1/log10(x))*( [1] +  (1/log10(x))*[2] + [3]*(1/log10(x))*(1/log10(x)) + [4]*(1/log10(x))*(1/log10(x))*(1/log10(x))  ))", 10, 5000);
     // eta0_08 = new TF1("eta0_08", "([0] + (1/log10(x))*( [1] + ( (1/log10(x))*[2] ) ))", 10, 5000);
                  }
   

    else{   
      eta0_08 = new TF1("eta0_08", "([0] + (1/log10(x))*( [1] + ( (1/log10(x))*[2] ) ))", 10, 5000);}
     

/*
if(i>5)
{
eta0_08= new TF1("eta0_08","[0]+[1]*(1/TMath::Log(x))",20,5000);
//
}*/
/*
if(i <=4){
 for (ii=0; ii<3; ii++) {
      eta0_08->SetParLimits(ii, -10, 0);
   }
       }

*/


if(i>4){
 for (ii=0; ii<5; ii++) {
      eta0_08->SetParLimits(ii, -10, 0);
   }
       }


//eta0_08->SetNpx(2000);
eta0_08->SetLineColor(2); 

//eta0_08_2->SetLineColor(3);

        h1->Fit("eta0_08","R"); 
  //      h1->Fit("eta0_08_2","R+"); 
//}


                 h1->GetYaxis()->SetRangeUser(-0.6,0.6);  
        h1->GetXaxis()->SetTitle("E_{T} [GeV]");
        h1->GetYaxis()->SetTitle("Mean residual");  
        h1->Draw();





  TLegend *leg = new TLegend(0.1831256,0.6824926,0.451582,0.8605341,NULL,"brNDC");
  leg->SetFillColor(kWhite);
  leg->AddEntry(h1,titeta[i].c_str(),"l");


  leg->SetBorderSize(0);
  leg->Draw("same");


if (i==7){c1->Print(close.c_str());}
else if(i==0){c1->Print(open.c_str());}
else{c1->Print(pdfname.c_str());}

c1->SaveAs(eps[i].c_str());
}//end of i loop 

// TFile *myfile = new TFile("fit.root","UPDATE");
//for(int j=0;j<8;j++){
//eta0_08->Write();
//eta0_08_2->Write();


}//end of main



