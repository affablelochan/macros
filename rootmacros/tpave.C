// program to open a root file and write the histogram in the form of eps files
//in this example i am using two root files one is dijetanal and other is drmin 
//drmin has 16 histogram and names of histogram are either y1Ady or y1Adrmin or y2Ady 0r y2Adrmin
//dijetanal has histogram of the type    y1A ,y2A 

#include <TROOT.h>
#include <TFile.h>
#include <TH2D.h>
#include <TH1F.h>
#include <TH1.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TNtuple.h>
#include <TString.h>
#include <iostream>
#include<TLatex.h>
#include <cstring>
#include <string>
#include <TMath>


void tpave(){



        TFile* f = new TFile("newdrmin.root");
        f->TFile::Open();
        TFile* g = new TFile("dijetanal.root");
        g->TFile::Open();
        string D[]= {"75<pt<100","100<pt<145","145<pt<180","pt>180"};
        string C[]= {"A","B","C","D"};
        string N[]={"1","2"};
        string E[]={"Central Rapidity","Forward Rapidity"};

 for(int n=0;n<=1;n++)//change the n once completed
     {
  for(int i=0;i<4;i++) 
        {
             string drmin = "y"+N[n]+C[i]+"drmin"; cout<<drmin<<endl;
             //string y3hist= "y"+N[n]+C[i]+"dy"; cout<<y3hist<<endl;
             string lower = "y"+N[n]+C[i]; cout<<lower<<endl;

     TH1F *h1   = (TH1F*)g->Get(lower.c_str());
     TH1F *h2   = (TH1F*)f->Get(drmin.c_str());
             // TH1F *h3   = (TH1F*)f->Get(y3hist.c_str());



     string drmin1 = "y"+N[n]+C[i]+"drmin_N3"+".eps";
    // string y3hist1= "y"+N[n]+C[i]+"dy_N3"+".eps";
     string text1= D[i];
     string text2= E[n];
     string drmin2 = "N3/N2tot for dRmin";
     //string y3hist2 ="N3/N2tot plotted for y3";




    h2->SetMarkerStyle(9);// this gives shapes to marker
    h2->Draw("E P");
    h2->Sumw2();
    h2->SetMinimum(0);
    h2->SetTitle(drmin2.c_str());
    h2->GetXaxis()->SetTitle("");

    double c = 0.2; //binwidth
    h2->Scale(1/c);
    double s = h1->GetBinContent(1);
    cout<<"s value"<<s<<endl;
    h2->Scale(1/s);


//.......................................................................................................
  //  h3->SetMarkerStyle(9);// this gives shapes to marker
  //  h3->Draw("E P");
  //  h3->SetTitle(y3hist2.c_str());
  //  h3->SetMinimum(0);
  //  h3->GetXaxis()->SetTitle("");


TText *t1 = new TText();
t1->SetTextFont(62);
t1->SetTextColor(4);
t1->SetTextAlign(12);
t1->SetTextSize(0.035);//percentage of the pad height
t1->DrawTextNDC(0.68,0.77,text1.c_str());//use suitable cstring to adapt to requirement

TText *t3 = new TText();
t3->SetTextFont(62);
t3->SetTextColor(4);
t3->SetTextAlign(12);
t3->SetTextSize(0.035);//percentage of the pad height
t3->DrawTextNDC(0.68,0.82,text2.c_str());//use suitable cstring to adapt to requirement

//ylabel
TText *t2 = new TText();
t2->SetTextFont(62);
t2->SetTextColor(4);
t2->SetTextAlign(12);
t2->SetTextSize(0.035);//percentage of the pad height
t2->SetTextAngle(90);
t2->DrawTextNDC(0.02,0.32,"N3/N2tot");

//xlabel
TText *t4 = new TText();
t4->SetTextFont(62);
t4->SetTextColor(4);
t4->SetTextAlign(12);
t4->SetTextSize(0.035);//percentage of the pad height
t4->DrawTextNDC(0.32,0.025,"dRmin/binwidth");


c1->SaveAs(drmin1.c_str());


delete h2;

         }
     }



}

