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




void ratiohistos(){



         TFile* f = new TFile("lochan2.root");
         f->TFile::Open();



                         float L[5];
                         float L15= .914357*.0987;
                         float L45= .9188*17.1763;
                         float L65= .915148*72.9970;
                         float L95= .9239*507.72;
                         float L125= .9284*707.2509;
                         float L25= .917114*1.5374;
                         L[0]=L15/L25;
                         L[1]=L25/L45;
                         L[2]=L45/L65;L[3]=L65/L95;L[4]=L95/L125;
                         float F[]={20,40,60,80,100};//this is for setting range for plotting
                         string C[]= {"15","25","45","65","95","125"};
                         string N[]={"1","2"};
  for(int n=1;n<=2;n++)
     {
       for(int i=0;i<5;i++)
       {

          string lower = "pT"+C[i]+"_y"+N[n-1]; cout<<lower<<endl;
          string upper = "pT"+C[i+1]+"_y"+N[n-1]; cout<<upper<<endl;

            TH1F *h1   = (TH1F*)f->Get(lower.c_str());
            TH1F *h2   = (TH1F*)f->Get(upper.c_str());


                 int c=h1->GetXaxis()->GetNbins();
	         double xl = h1->GetBinLowEdge(1);
	         double xh = h1->GetBinLowEdge(c)+h1->GetBinWidth(c);

         //cout<<"lower "<<xl<< endl;
         //cout<<"higher"<<xh<< endl;cout<<"number of bins "<<c<< endl;

         string divide= "JT_y"+N[n-1]+"_"+C[i+1]+"/"+C[i];
         TH1 *h3 = new TH1F("h3",divide.c_str(),c,xl,xh);
         h3->Sumw2();
         h3->Divide(h2,h1,1,1,"B"); // B for binomial errors




          h3->Scale(L[i]); // multiplying with constant
          h3->SetMaximum(1.4); //to set the y axis maximum
          h3->SetMinimum(0.5); // to set the y axis minimum
          h3->GetXaxis()->SetTitle("PT");
          h3->GetYaxis()->SetTitle("Cross section");
          h3->SetAxisRange(F[i]+30,F[i]+110); //was140-210 and later 160 to 210 



string printing = "Dijet"+C[i+1]+"/"+C[i]+"y"+N[n-1]+".eps";
c1->SaveAs(printing.c_str());

delete h1;
delete h2;
delete h3;

            }//close for inner for loop 

           }//close for the outer for loop

                   }

