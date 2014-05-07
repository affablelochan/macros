#define myana_cxx
#include "myana.h"
#include <TH1.h>
#include <TStyle.h>
#include <TCanvas.h>

TH1F *trigJT015y1, *trigJT025y1, *trigJT045y1, *trigJT065y1, *trigJT095y1, *trigJT125y1;
TH1F *trigJT015y2, *trigJT025y2, *trigJT045y2, *trigJT065y2, *trigJT095y2, *trigJT125y2;
TH1F *trigJT015y3, *trigJT025y3, *trigJT045y3, *trigJT065y3, *trigJT095y3, *trigJT125y3;




void myana::Loop()
{
//   In a ROOT session, you can do:
   if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;

   cout << "Booking pTmax histograms..." << endl;
   BookHistos(); // Booking pTmax histograms

  // Making only the desired branches visible //
    fChain->SetBranchStatus("*", 0);
    fChain->SetBranchStatus("njets", 1);
    fChain->SetBranchStatus("jgood", 1);
    fChain->SetBranchStatus("evtgood", 1);
    fChain->SetBranchStatus("jy", 1);
    fChain->SetBranchStatus("jpt", 1);
    fChain->SetBranchStatus("jphi", 1);
    fChain->SetBranchStatus("jt15", 1);
    fChain->SetBranchStatus("jt25", 1);
    fChain->SetBranchStatus("jt45", 1);
    fChain->SetBranchStatus("jt65", 1);
    fChain->SetBranchStatus("jt95", 1);
    fChain->SetBranchStatus("jt125", 1);

   //events processing for p17data     

   for (Long64_t jentry=0; jentry<nentries;jentry++) {

      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   
      
      if (jentry > 0 && jentry%100000 == 0) cout << jentry << " events processed." << endl;

      Float_t JET_PT_CUT =30.0; // PT CUT 30 GEV
      
      //applying jet cuts
       if (evtgood && njets >=2 && (jgood[0] && jgood[1])
                                && (jpt[0] >= JET_PT_CUT && jpt[1] >= JET_PT_CUT)) {    // pT1 > pT2 always => pT2 > 40 GeV is enough.
                        double pTmax, absY1 = fabs(jy[0]), absY2 = fabs(jy[1]);

                        if (jpt[0] >= jpt[1]) pTmax = jpt[0];   // pTmax is always the first jet.
                        else pTmax = jpt[1];                                    // This is never encountered.

                        

                        if (absY1 < 0.5 && absY2 < 0.5) {       // Both jets are in central region
                                if (jt15)       trigJT015y1->Fill(pTmax);
                                if (jt25)       trigJT025y1->Fill(pTmax);
                                if (jt45)       trigJT045y1->Fill(pTmax);
                                if (jt65)       trigJT065y1->Fill(pTmax);
                                if (jt95)       trigJT095y1->Fill(pTmax);
                                if (jt125)      trigJT125y1->Fill(pTmax);
                        }
                       
                        else if ((absY1 > 0.5 && absY1 < 1.5) && (absY2 > 0.5 && absY2 < 1.5)
                                && (jy[0]*jy[1] < 0)) {         // Both jets are in ICR and on opposite sides
                                if (jt15)       trigJT015y2->Fill(pTmax);
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
                        }

       }
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
                        trigJT015y1 = new TH1F("pT15_y1", "pT 15; 0.0 < |y| < 0.5", 96, 20, 500);
                        trigJT025y1 = new TH1F("pT25_y1", "pT 25; 0.0 < |y| < 0.5", 96, 20, 500);
                        trigJT045y1 = new TH1F("pT45_y1", "pT 45; 0.0 < |y| < 0.5", 96, 20, 500);
                        trigJT065y1 = new TH1F("pT65_y1", "pT 65; 0.0 < |y| < 0.5", 96, 20, 500);
                        trigJT095y1 = new TH1F("pT95_y1", "pT 95; 0.0 < |y| < 0.5", 96, 20, 500);
                        trigJT125y1 = new TH1F("pT125_y1", "pT 125; 0.0 < |y| < 0.5", 96, 20, 500);

                        trigJT015y2 = new TH1F("pT15_y2", "pT 15; 0.5 < |y| < 1.5", 96, 20, 500);
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
                        trigJT125y3 = new TH1F("pT125_y3", "pT 125; 1.5 < |y| < 2.5", 96, 20, 500);
}


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

		cnvPlots->Close();
		myfirstanalysis->Close();
		delete cnvPlots;
		delete myfirstanalysis;
}


void myana::Cleanup()
{
    // pT histograms //
    delete trigJT015y1;
    delete trigJT025y1;
    delete trigJT045y1;
    delete trigJT065y1;
    delete trigJT095y1;
    delete trigJT125y1;

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
}
