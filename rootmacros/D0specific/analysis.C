#define Analysis_skeleton_cxx
#include "Analysis_skeleton.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

TH1F *trigJT30, *trigJT55, *trigJT75, *trigJT5, *trigJT10;
//TH1F *trigJT015y2, *trigJT025y2, *trigJT045y2, *trigJT065y2, *trigJT095y2, *trigJT125y2;
//TH1F *trigJT015y3, *trigJT025y3, *trigJT045y3, *trigJT065y3, *trigJT095y3, *trigJT125y3;

 
void Analysis_skeleton::Loop()
{
//   In a ROOT session, you can do:
   if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;

   cout << "Booking pTmax histograms..." << endl;
   BookHistos(); // Booking pTmax histograms

  // Making only the desired branches visible //
  //  fChain->SetBranchStatus("*", 0);
  //  fChain->SetBranchStatus("njets", 1);
  //  fChain->SetBranchStatus("jgood", 1);
  //  fChain->SetBranchStatus("evtgood", 1);
  //  fChain->SetBranchStatus("jy", 1);
    
  //  fChain->SetBranchStatus("jphi", 1);


    fChain->SetBranchStatus("*jet_AntiKt4H1TopoNew_pt", 1);
    fChain->SetBranchStatus("L1_J10", 1);
    fChain->SetBranchStatus("L1_J15", 1);
    fChain->SetBranchStatus("L1_J30", 1);
    fChain->SetBranchStatus("L1_J55", 1);
    fChain->SetBranchStatus("L1_J75", 1);
    fChain->SetBranchStatus("L1_J5", 1);

   //events processing for p17data     

   for (Long64_t jentry=0; jentry<nentries;jentry++) {

      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   
      
      if (jentry > 0 && jentry%100000 == 0) cout << jentry << " events processed." << endl;

      Float_t JET_PT_CUT =30.0; // PT CUT 30 GEV
      
      //applying jet cuts
      // if (evtgood && njets >=2 && (jgood[0] && jgood[1])
        //                        && (jpt[0] >= JET_PT_CUT && jpt[1] >= JET_PT_CUT)) {    // pT1 > pT2 always => pT2 > 40 GeV is enough.
          //              double pTmax, absY1 = fabs(jy[0]), absY2 = fabs(jy[1]);

        //                if (jpt[0] >= jpt[1]) pTmax = jpt[0];   // pTmax is always the first jet.
         //               else pTmax = jpt[1];                                    // This is never encountered.

                        

                      //  if (absY1 < 0.5 && absY2 < 0.5) {       // Both jets are in central region
                                if (L1_J15)       trigJT015y1->Fill(pTmax);
                                if (L1_J30)       trigJT030y1->Fill(pTmax);
                                if (L1_J55)       trigJT055y1->Fill(pTmax);
                                if (L1_J75)       trigJT075y1->Fill(pTmax);
                                if (L1_J5)        trigJT05y1->Fill(pTmax);
                                if (L1_J10)       trigJT10->Fill(pTmax);
                    //    }
                       
                     //   else if ((absY1 > 0.5 && absY1 < 1.5) && (absY2 > 0.5 && absY2 < 1.5)
                      //          && (jy[0]*jy[1] < 0)) {         // Both jets are in ICR and on opposite sides
                      /*          if (jt15)       trigJT015y2->Fill(pTmax);
                                if (jt25)       trigJT025y2->Fill(pTmax);
                                if (jt65)       trigJT065y2->Fill(pTmax);
                                if (jt95)       trigJT095y2->Fill(pTmax);
                                if (jt125)      trigJT125y2->Fill(pTmax);
                        }
                        
			else if ((absY1 > 1.5 && absY1 < 2.5) && (absY2 > 1.5 && absY2 < 2.5)
                                && (jy[0]*jy[1] < 0)) {         // Both jets are in forward region and on opposite sides
                                if (jt15)       trigJT015y3->Fill(pTmax);
                                if (jt25)       trigJT025y3->Fill(pTmax);
                                if (jt45)       trigJT045y3->Fill(pTmax);
                                if (jt65)       trigJT065y3->Fill(pTmax);
                                if (jt95)       trigJT095y3->Fill(pTmax);
                                if (jt125)      trigJT125y3->Fill(pTmax);
                        }  */

      // }
   }
 
   cout << "Writing all histograms..." << endl;

   WriteHistos();

   cout << "Histograms written to file. Cleaning up now..." << endl;

   // Cleaning up all pointers //
   Cleanup();
}



//Book histograms
void myana::BookHistos()
{
   
                                // y1 = 0.0 < |y| < 0.5; y2 = 0.5 < |y| < 1.5; y3 = 1.5 < |y| < 2.5 //
                        trigJT10 = new TH1F("pT10", "pT 10", 96, 20, 500);
                        trigJT30 = new TH1F("pT30", "pT 30", 96, 20, 500);
                        trigJT55 = new TH1F("pT55", "pT 55", 96, 20, 500);
                        trigJT75 = new TH1F("pT75", "pT 75", 96, 20, 500);
                        trigJT5 = new TH1F("pT5", "pT 95", 96, 20, 500);
                        

                      /*  trigJT015y2 = new TH1F("pT15_y2", "pT 15; 0.5 < |y| < 1.5", 96, 20, 500);
                        trigJT025y2 = new TH1F("pT25_y2", "pT 25; 0.5 < |y| < 1.5", 96, 20, 500);
                        trigJT045y2 = new TH1F("pT45_y2", "pT 45; 0.5 < |y| < 1.5", 96, 20, 500);
                        trigJT065y2 = new TH1F("pT65_y2", "pT 65; 0.5 < |y| < 1.5", 96, 20, 500);
                        trigJT095y2 = new TH1F("pT95_y2", "pT 95; 0.5 < |y| < 1.5", 96, 20, 500);
                        trigJT125y2 = new TH1F("pT125_y2", "pT 125; 0.5 < |y| < 1.5", 96, 20, 500);

                        trigJT015y3 = new TH1F("pT15_y3", "pT 15; 1.5 < |y| < 2.5", 96, 20, 500);
                        trigJT025y3 = new TH1F("pT25_y3", "pT 25; 1.5 < |y| < 2.5", 96, 20, 500);
                        trigJT045y3 = new TH1F("pT45_y3", "pT 45; 1.5 < |y| < 2.5", 96, 20, 500);
                        trigJT065y3 = new TH1F("pT65_y3", "pT 65; 1.5 < |y| < 2.5", 96, 20, 500);
                        trigJT095y3 = new TH1F("pT95_y3", "pT 95; 1.5 < |y| < 2.5", 96, 20, 500);
                        trigJT125y3 = new TH1F("pT125_y3", "pT 125; 1.5 < |y| < 2.5", 96, 20, 500);  */
}

//TH1F *trigJT30, *trigJT55, *trigJT75, *trigJT5, *trigJT10;
void myana::WriteHistos()
{

                TFile *myfirstanalysis = new TFile("myfirstanalysis.root", "RECREATE");
                TCanvas *cnvPlots = new TCanvas();

                trigJT015y1->Write();
                trigJT025y1->Write();
                trigJT045y1->Write();
                trigJT065y1->Write();
                trigJT095y1->Write();
                trigJT125y1->Write();
  
/*             
                trigJT015y2->Write();
                trigJT025y2->Write();
                trigJT045y2->Write();
                trigJT065y2->Write();
                trigJT095y2->Write();
                trigJT125y2->Write();

                trigJT015y3->Write();
                trigJT025y3->Write();
                trigJT045y3->Write();
                trigJT065y3->Write();
                trigJT095y3->Write();
                trigJT125y3->Write();

*/
		cnvPlots->Close();
		myfirstanalysis->Close();
		delete cnvPlots;
		delete myfirstanalysis;
}
//TH1F *trigJT30, *trigJT55, *trigJT75, *trigJT5, *trigJT10;

void myana::Cleanup()
{
    // pT histograms //
    delete trigJT5;
    delete trigJT30;
    delete trigJT55;
    delete trigJT75;
    delete trigJT10;
    

/*
    delete trigJT015y2;
    delete trigJT025y2;
    delete trigJT045y2;
    delete trigJT065y2;
    delete trigJT095y2;
    delete trigJT125y2;

    delete trigJT015y3;
    delete trigJT025y3;
    delete trigJT045y3;
    delete trigJT065y3;
    delete trigJT095y3;
    delete trigJT125y3;
*/
}

  
