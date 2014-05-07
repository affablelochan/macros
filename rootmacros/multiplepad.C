//New histogram with x,y labels and title...
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

void multiplepad(){
      
//TCanvas* c1 = new TCanvas("hist1","title of histogram",100,5.,50.);
TCanvas *c1 = new TCanvas("c1", "c1");//we are not creating a canvas because it will again be created in TH1F
c1->Divide(2,2);
 
      TH1F *hist1= new TH1F("hist1", "title of histogram", 100, 5., 50.);



       

//filling data to histogram
             hist1->Fill(41,2.5);
             hist1->Fill(12,2);
             hist1->Fill(34,3);
             hist1->Fill(20,2.4);
    c1->cd(1);
    
    hist1->Draw("");
c1->cd(2);   
hist1->Draw("E");
c1->cd(3);
hist1->Draw("");
//adding x and y labels
    hist1->GetXaxis()->SetTitle("Label of x axis");
    hist1->GetYaxis()->SetTitle("Label of y axis");

//changing colour of histogram plot
    //hist1->SetLineColor(2);
    //hist1->SetLineColor(kBlue);
    //hist1->Draw();

//hist1->Print("all");

}

