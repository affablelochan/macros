#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

gROOT->Reset();

void slimming()


{
   TChain *chain = new TChain("qcd");
   Int_t n = 0;
   
 //TChain fChain("qcd");
chain->Add("/home/rajivalochan/dataset2/user.terashi.SlimV1.data10_7TeV.00159113.physics_L1Calo.merge.NTUP_JETMET.f275_p209.p1.100826174921/*.root"); 



chain->SetBranchStatus("*", 0);
chain->SetBranchStatus("jet_AntiKt4H1Topo_n", 1);
chain->SetBranchStatus("jet_AntiKt4H1Topo_EMJES", 1);
chain->SetBranchStatus("jet_AntiKt4H1Topo_emscale_E", 1);
chain->SetBranchStatus("jet_AntiKt4H1Topo_emscale_phi", 1);
chain->SetBranchStatus("jet_AntiKt4H1Topo_PhiPhys", 1);
chain->SetBranchStatus("jet_AntiKt4H1Topo_phi", 1);
chain->SetBranchStatus("jet_AntiKt4H1Topo_emscale_eta", 1);
chain->SetBranchStatus("jet_AntiKt4H1Topo_EtaPhys", 1);
chain->SetBranchStatus("jet_AntiKt4H1Topo_eta", 1);
chain->SetBranchStatus("jet_AntiKt4H1Topo_m", 1);
chain->SetBranchStatus("jet_AntiKt4H1Topo_emscale_m", 1);
chain->SetBranchStatus("jet_AntiKt4H1Topo_MPhys", 1);
chain->SetBranchStatus("jet_AntiKt4H1Topo_n90", 1);
chain->SetBranchStatus("jet_AntiKt4H1Topo_hecf", 1); 
chain->SetBranchStatus("jet_AntiKt4H1Topo_quality", 1); 
chain->SetBranchStatus("jet_AntiKt4H1Topo_emfrac", 1); 
chain->SetBranchStatus("jet_AntiKt4H1Topo_timing", 1);


chain->SetBranchStatus("jet_AntiKt6H1Topo_n", 1);
chain->SetBranchStatus("jet_AntiKt6H1Topo_EMJES", 1);
chain->SetBranchStatus("jet_AntiKt6H1Topo_emscale_E", 1);
chain->SetBranchStatus("jet_AntiKt6H1Topo_emscale_phi", 1);
chain->SetBranchStatus("jet_AntiKt6H1Topo_PhiPhys", 1);
chain->SetBranchStatus("jet_AntiKt6H1Topo_phi", 1);
chain->SetBranchStatus("jet_AntiKt6H1Topo_emscale_eta", 1);
chain->SetBranchStatus("jet_AntiKt6H1Topo_EtaPhys", 1);
chain->SetBranchStatus("jet_AntiKt6H1Topo_eta", 1);
chain->SetBranchStatus("jet_AntiKt6H1Topo_m", 1);
chain->SetBranchStatus("jet_AntiKt6H1Topo_emscale_m", 1);
chain->SetBranchStatus("jet_AntiKt6H1Topo_MPhys", 1);
chain->SetBranchStatus("jet_AntiKt6H1Topo_n90", 1);
chain->SetBranchStatus("jet_AntiKt6H1Topo_hecf", 1); 
chain->SetBranchStatus("jet_AntiKt6H1Topo_quality", 1); 
chain->SetBranchStatus("jet_AntiKt6H1Topo_emfrac", 1); 
chain->SetBranchStatus("jet_AntiKt6H1Topo_timing", 1);   
    
    chain->SetBranchStatus("L1_J5", 1);
    chain->SetBranchStatus("L1_J10", 1);
    chain->SetBranchStatus("L1_J15", 1);
    chain->SetBranchStatus("L1_J30", 1);
    chain->SetBranchStatus("L1_J55", 1);
    chain->SetBranchStatus("L1_J75", 1);



TFile *newfile = new TFile("159113.root", "recreate");
TTree *newtree = chain->CloneTree();
newtree->Print();
newtree->Write();



 }



/*

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

gROOT->Reset();

void slimming()

{


 std::string argStr;
 std::cin >> argStr;
 std::vector<std::string> fileList;
 for (size_t i=0,n; i<= argStr.length(); i=n+1) {
   n = argStr.find_first_of(',',i);
   if (n == string::npos)
     n = argStr.length();
   string tmp = argStr.substr(i,n-i);
   fileList.push_back(tmp);
 }

 TChain *chain = new TChain("qcd");

 for (int iFile=0; iFile<fileList.size(); ++iFile) {
   std::cout << "open " << fileList[iFile].c_str() << std::endl;
   chain->Add(fileList[iFile].c_str());
 }





 TFile *newfile = new TFile("trimmed.root", "recreate");

 TTree *newtree = chain->CloneTree();
 newtree->Print();
 newtree->Write();
}
*/
