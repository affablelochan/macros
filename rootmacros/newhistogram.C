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

void newhistogram(){
      TH1F *hist1= new TH1F("hist1", "title of histogram", 100, 5., 50.);
      hist1->Draw();

//filling data to histogram
             hist1->Fill(41,2.5);
             hist1->Fill(12,2);
             hist1->Fill(34,3);
             hist1->Fill(20,2.4);
      hist1->Draw();
//adding x and y labels
    hist1->GetXaxis()->SetTitle("Label of x axis                                         ");
    hist1->GetYaxis()->SetTitle("Label of y axis                                          ");

//changing colour of histogram plot
    //hist1->SetLineColor(2);
    //hist1->SetLineColor(kBlue);
    //hist1->Draw();

//hist1->Print("all");
// creaating another histogram
TH1F *hist2 = new TH1F("hist2","two histogram on same plot", 100,2.,100);
       hist2->Fill(45,10);
       hist2->Fill(20,6);
       hist2->Fill(13);

hist2->GetXaxis()->SetTitle("Label of x axis                                       ");
hist2->GetYaxis()->SetTitle("Label of y axis                                       ");
gStyle->SetOptStat(111111);      //Display title and total number of events only

     hist1->SetLineColor(8);       //green
     hist2->SetLineColor(4);       //blue

//legends




   hist2->Draw();             //draw our brand new histogram
   hist1->Draw("same");   //draw our original histogram on the same pad as hist2
  

  leg = new TLegend(0.5,0.6,0.75,0.83);  //the coordinates put the legend corners
                                       //various fractions of the way along the canvas
  leg->SetTextSize(0.04); 
  leg->AddEntry(hist1,"First histo","l"); //"l" for a line
  leg->AddEntry(hist2,"2nd histo","l");   //use "f" for a box to show which colour
  leg->Draw();


}

