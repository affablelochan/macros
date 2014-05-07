//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat Aug  7 06:01:52 2010 by ROOT version 5.24/00
// from TTree qcd/qcd
// found on file: user10.JuliaAnnNovak.group10.perf-jets.data10_7TeV.00152166.physics_L1Calo.recon.ESD.r1297_JetEtMissDPDModifier000025.v1_EXT0.slimmed.vtx.V2._00001.output.root
//////////////////////////////////////////////////////////

#ifndef Analysis_skeleton_h
#define Analysis_skeleton_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

class Analysis_skeleton {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          RunNumber;
   UInt_t          EventNumber;
   UInt_t          lbn;
   UInt_t          bcid;
   Bool_t          collcand_passMBTSTime;
   Int_t           vxp_n;
   vector<float>   *vxp_x;
   vector<float>   *vxp_y;
   vector<float>   *vxp_z;
   vector<float>   *vxp_err_x;
   vector<float>   *vxp_err_y;
   vector<float>   *vxp_err_z;
   vector<float>   *vxp_cov_x;
   vector<float>   *vxp_cov_y;
   vector<float>   *vxp_cov_z;
   vector<float>   *vxp_chi2;
   vector<int>     *vxp_ndof;
   vector<float>   *vxp_px;
   vector<float>   *vxp_py;
   vector<float>   *vxp_pz;
   vector<float>   *vxp_E;
   vector<float>   *vxp_m;
   vector<int>     *vxp_nTracks;
   vector<float>   *vxp_sumPt;
   vector<int>     *vxp_type;
   vector<float>   *vxp_sumWeightInliers;
   vector<float>   *vxp_sumWeightOutliers;
   vector<float>   *vxp_sumWeightPileup;
   vector<float>   *vxp_sumWeightFakes;
   vector<int>     *vxp_nInliers;
   vector<int>     *vxp_nOutliers;
   vector<int>     *vxp_nPileUp;
   vector<int>     *vxp_nFakes;
   vector<float>   *vxp_purity;
   Int_t           jet_AntiKt4H1TopoNew_n;
   vector<float>   *jet_AntiKt4H1TopoNew_E;
   vector<float>   *jet_AntiKt4H1TopoNew_pt;
   vector<float>   *jet_AntiKt4H1TopoNew_m;
   vector<float>   *jet_AntiKt4H1TopoNew_eta;
   vector<float>   *jet_AntiKt4H1TopoNew_phi;
   vector<float>   *jet_AntiKt4H1TopoNew_EtaPhys;
   vector<float>   *jet_AntiKt4H1TopoNew_PhiPhys;
   vector<float>   *jet_AntiKt4H1TopoNew_MPhys;
   vector<float>   *jet_AntiKt4H1TopoNew_n90;
   vector<float>   *jet_AntiKt4H1TopoNew_BCH_CORR_CELL;
   vector<float>   *jet_AntiKt4H1TopoNew_BCH_CORR_DOTX;
   vector<float>   *jet_AntiKt4H1TopoNew_BCH_CORR_JET;
   vector<float>   *jet_AntiKt4H1TopoNew_BCH_CORR_JET_FORCELL;
   vector<float>   *jet_AntiKt4H1TopoNew_hecf;
   vector<float>   *jet_AntiKt4H1TopoNew_tgap3f;
   vector<int>     *jet_AntiKt4H1TopoNew_isGood;
   vector<float>   *jet_AntiKt4H1TopoNew_timing;
   vector<float>   *jet_AntiKt4H1TopoNew_quality;
   vector<float>   *jet_AntiKt4H1TopoNew_emfrac;
   vector<float>   *jet_AntiKt4H1TopoNew_GCWJES;
   vector<float>   *jet_AntiKt4H1TopoNew_EMJES;
   vector<float>   *jet_AntiKt4H1TopoNew_emscale_E;
   vector<float>   *jet_AntiKt4H1TopoNew_emscale_pt;
   vector<float>   *jet_AntiKt4H1TopoNew_emscale_m;
   vector<float>   *jet_AntiKt4H1TopoNew_emscale_eta;
   vector<float>   *jet_AntiKt4H1TopoNew_emscale_phi;
   vector<float>   *jet_AntiKt4H1TopoNew_e_HEC0;
   vector<float>   *jet_AntiKt4H1TopoNew_e_HEC1;
   vector<float>   *jet_AntiKt4H1TopoNew_e_HEC2;
   vector<float>   *jet_AntiKt4H1TopoNew_e_HEC3;
   Int_t           jet_AntiKt6H1TopoNew_n;
   vector<float>   *jet_AntiKt6H1TopoNew_E;
   vector<float>   *jet_AntiKt6H1TopoNew_pt;
   vector<float>   *jet_AntiKt6H1TopoNew_m;
   vector<float>   *jet_AntiKt6H1TopoNew_eta;
   vector<float>   *jet_AntiKt6H1TopoNew_phi;
   vector<float>   *jet_AntiKt6H1TopoNew_EtaPhys;
   vector<float>   *jet_AntiKt6H1TopoNew_PhiPhys;
   vector<float>   *jet_AntiKt6H1TopoNew_MPhys;
   vector<float>   *jet_AntiKt6H1TopoNew_n90;
   vector<float>   *jet_AntiKt6H1TopoNew_BCH_CORR_CELL;
   vector<float>   *jet_AntiKt6H1TopoNew_BCH_CORR_DOTX;
   vector<float>   *jet_AntiKt6H1TopoNew_BCH_CORR_JET;
   vector<float>   *jet_AntiKt6H1TopoNew_BCH_CORR_JET_FORCELL;
   vector<float>   *jet_AntiKt6H1TopoNew_hecf;
   vector<float>   *jet_AntiKt6H1TopoNew_tgap3f;
   vector<int>     *jet_AntiKt6H1TopoNew_isGood;
   vector<float>   *jet_AntiKt6H1TopoNew_timing;
   vector<float>   *jet_AntiKt6H1TopoNew_quality;
   vector<float>   *jet_AntiKt6H1TopoNew_emfrac;
   vector<float>   *jet_AntiKt6H1TopoNew_GCWJES;
   vector<float>   *jet_AntiKt6H1TopoNew_EMJES;
   vector<float>   *jet_AntiKt6H1TopoNew_emscale_E;
   vector<float>   *jet_AntiKt6H1TopoNew_emscale_pt;
   vector<float>   *jet_AntiKt6H1TopoNew_emscale_m;
   vector<float>   *jet_AntiKt6H1TopoNew_emscale_eta;
   vector<float>   *jet_AntiKt6H1TopoNew_emscale_phi;
   vector<float>   *jet_AntiKt6H1TopoNew_e_HEC0;
   vector<float>   *jet_AntiKt6H1TopoNew_e_HEC1;
   vector<float>   *jet_AntiKt6H1TopoNew_e_HEC2;
   vector<float>   *jet_AntiKt6H1TopoNew_e_HEC3;
   Int_t           trk_n;
   vector<float>   *trk_pt;
   vector<float>   *trk_eta;
   vector<float>   *trk_phi;
   vector<float>   *trk_d0;
   vector<float>   *trk_z0;
   vector<float>   *trk_theta;
   vector<float>   *trk_chi2;
   vector<int>     *trk_ndof;
   vector<int>     *trk_nPixelHits;
   vector<int>     *trk_nSCTHits;
   vector<int>     *trk_nTRTHits;
   vector<float>   *trk_d0_wrtPV;
   vector<float>   *trk_z0_wrtPV;
   Bool_t          L1_FJ3;
   Bool_t          L1_J10;
   Bool_t          L1_J15;
   Bool_t          L1_J30;
   Bool_t          L1_J5;
   Bool_t          L1_J55;
   Bool_t          L1_J75;
   Bool_t          L1_MBTS_1;
   Bool_t          L1_MBTS_1_1;
   vector<unsigned int> *trig_L1_TAV;
   vector<short>   *trig_L2_passedPhysics;
   vector<short>   *trig_EF_passedPhysics;
   vector<unsigned int> *trig_L1_TBP;
   vector<unsigned int> *trig_L1_TAP;
   UInt_t          trig_DB_SMK;
   UInt_t          trig_DB_L1PSK;
   UInt_t          trig_DB_HLTPSK;

   // List of branches
   TBranch        *b_RunNumber;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_lbn;   //!
   TBranch        *b_bcid;   //!
   TBranch        *b_collcand_passMBTSTime;   //!
   TBranch        *b_vxp_n;   //!
   TBranch        *b_vxp_x;   //!
   TBranch        *b_vxp_y;   //!
   TBranch        *b_vxp_z;   //!
   TBranch        *b_vxp_err_x;   //!
   TBranch        *b_vxp_err_y;   //!
   TBranch        *b_vxp_err_z;   //!
   TBranch        *b_vxp_cov_x;   //!
   TBranch        *b_vxp_cov_y;   //!
   TBranch        *b_vxp_cov_z;   //!
   TBranch        *b_vxp_chi2;   //!
   TBranch        *b_vxp_ndof;   //!
   TBranch        *b_vxp_px;   //!
   TBranch        *b_vxp_py;   //!
   TBranch        *b_vxp_pz;   //!
   TBranch        *b_vxp_E;   //!
   TBranch        *b_vxp_m;   //!
   TBranch        *b_vxp_nTracks;   //!
   TBranch        *b_vxp_sumPt;   //!
   TBranch        *b_vxp_type;   //!
   TBranch        *b_vxp_sumWeightInliers;   //!
   TBranch        *b_vxp_sumWeightOutliers;   //!
   TBranch        *b_vxp_sumWeightPileup;   //!
   TBranch        *b_vxp_sumWeightFakes;   //!
   TBranch        *b_vxp_nInliers;   //!
   TBranch        *b_vxp_nOutliers;   //!
   TBranch        *b_vxp_nPileUp;   //!
   TBranch        *b_vxp_nFakes;   //!
   TBranch        *b_vxp_purity;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_n;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_E;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_pt;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_m;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_eta;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_phi;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_EtaPhys;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_PhiPhys;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_MPhys;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_n90;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_BCH_CORR_CELL;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_BCH_CORR_DOTX;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_BCH_CORR_JET;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_hecf;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_tgap3f;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_isGood;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_timing;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_quality;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_emfrac;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_GCWJES;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_EMJES;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_emscale_E;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_emscale_pt;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_emscale_m;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_emscale_eta;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_emscale_phi;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_e_HEC0;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_e_HEC1;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_e_HEC2;   //!
   TBranch        *b_jet_AntiKt4H1TopoNew_e_HEC3;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_n;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_E;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_pt;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_m;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_eta;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_phi;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_EtaPhys;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_PhiPhys;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_MPhys;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_n90;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_BCH_CORR_CELL;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_BCH_CORR_DOTX;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_BCH_CORR_JET;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_hecf;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_tgap3f;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_isGood;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_timing;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_quality;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_emfrac;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_GCWJES;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_EMJES;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_emscale_E;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_emscale_pt;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_emscale_m;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_emscale_eta;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_emscale_phi;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_e_HEC0;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_e_HEC1;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_e_HEC2;   //!
   TBranch        *b_jet_AntiKt6H1TopoNew_e_HEC3;   //!
   TBranch        *b_trk_n;   //!
   TBranch        *b_trk_pt;   //!
   TBranch        *b_trk_eta;   //!
   TBranch        *b_trk_phi;   //!
   TBranch        *b_trk_d0;   //!
   TBranch        *b_trk_z0;   //!
   TBranch        *b_trk_theta;   //!
   TBranch        *b_trk_chi2;   //!
   TBranch        *b_trk_ndof;   //!
   TBranch        *b_trk_nPixelHits;   //!
   TBranch        *b_trk_nSCTHits;   //!
   TBranch        *b_trk_nTRTHits;   //!
   TBranch        *b_trk_d0_wrtPV;   //!
   TBranch        *b_trk_z0_wrtPV;   //!
   TBranch        *b_L1_FJ3;   //!
   TBranch        *b_L1_J10;   //!
   TBranch        *b_L1_J15;   //!
   TBranch        *b_L1_J30;   //!
   TBranch        *b_L1_J5;   //!
   TBranch        *b_L1_J55;   //!
   TBranch        *b_L1_J75;   //!
   TBranch        *b_L1_MBTS_1;   //!
   TBranch        *b_L1_MBTS_1_1;   //!
   TBranch        *b_trig_L1_TAV;   //!
   TBranch        *b_trig_L2_passedPhysics;   //!
   TBranch        *b_trig_EF_passedPhysics;   //!
   TBranch        *b_trig_L1_TBP;   //!
   TBranch        *b_trig_L1_TAP;   //!
   TBranch        *b_trig_DB_SMK;   //!
   TBranch        *b_trig_DB_L1PSK;   //!
   TBranch        *b_trig_DB_HLTPSK;   //!

   Analysis_skeleton(TTree *tree=0);
   virtual ~Analysis_skeleton();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Analysis_skeleton_cxx
Analysis_skeleton::Analysis_skeleton(TTree *tree)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("user10.JuliaAnnNovak.group10.perf-jets.data10_7TeV.00152166.physics_L1Calo.recon.ESD.r1297_JetEtMissDPDModifier000025.v1_EXT0.slimmed.vtx.V2._00001.output.root");
      if (!f) {
         f = new TFile("user10.JuliaAnnNovak.group10.perf-jets.data10_7TeV.00152166.physics_L1Calo.recon.ESD.r1297_JetEtMissDPDModifier000025.v1_EXT0.slimmed.vtx.V2._00001.output.root");
      }
      tree = (TTree*)gDirectory->Get("qcd");

   }
   Init(tree);
}

Analysis_skeleton::~Analysis_skeleton()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Analysis_skeleton::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Analysis_skeleton::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (!fChain->InheritsFrom(TChain::Class()))  return centry;
   TChain *chain = (TChain*)fChain;
   if (chain->GetTreeNumber() != fCurrent) {
      fCurrent = chain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Analysis_skeleton::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   vxp_x = 0;
   vxp_y = 0;
   vxp_z = 0;
   vxp_err_x = 0;
   vxp_err_y = 0;
   vxp_err_z = 0;
   vxp_cov_x = 0;
   vxp_cov_y = 0;
   vxp_cov_z = 0;
   vxp_chi2 = 0;
   vxp_ndof = 0;
   vxp_px = 0;
   vxp_py = 0;
   vxp_pz = 0;
   vxp_E = 0;
   vxp_m = 0;
   vxp_nTracks = 0;
   vxp_sumPt = 0;
   vxp_type = 0;
   vxp_sumWeightInliers = 0;
   vxp_sumWeightOutliers = 0;
   vxp_sumWeightPileup = 0;
   vxp_sumWeightFakes = 0;
   vxp_nInliers = 0;
   vxp_nOutliers = 0;
   vxp_nPileUp = 0;
   vxp_nFakes = 0;
   vxp_purity = 0;
   jet_AntiKt4H1TopoNew_E = 0;
   jet_AntiKt4H1TopoNew_pt = 0;
   jet_AntiKt4H1TopoNew_m = 0;
   jet_AntiKt4H1TopoNew_eta = 0;
   jet_AntiKt4H1TopoNew_phi = 0;
   jet_AntiKt4H1TopoNew_EtaPhys = 0;
   jet_AntiKt4H1TopoNew_PhiPhys = 0;
   jet_AntiKt4H1TopoNew_MPhys = 0;
   jet_AntiKt4H1TopoNew_n90 = 0;
   jet_AntiKt4H1TopoNew_BCH_CORR_CELL = 0;
   jet_AntiKt4H1TopoNew_BCH_CORR_DOTX = 0;
   jet_AntiKt4H1TopoNew_BCH_CORR_JET = 0;
   jet_AntiKt4H1TopoNew_BCH_CORR_JET_FORCELL = 0;
   jet_AntiKt4H1TopoNew_hecf = 0;
   jet_AntiKt4H1TopoNew_tgap3f = 0;
   jet_AntiKt4H1TopoNew_isGood = 0;
   jet_AntiKt4H1TopoNew_timing = 0;
   jet_AntiKt4H1TopoNew_quality = 0;
   jet_AntiKt4H1TopoNew_emfrac = 0;
   jet_AntiKt4H1TopoNew_GCWJES = 0;
   jet_AntiKt4H1TopoNew_EMJES = 0;
   jet_AntiKt4H1TopoNew_emscale_E = 0;
   jet_AntiKt4H1TopoNew_emscale_pt = 0;
   jet_AntiKt4H1TopoNew_emscale_m = 0;
   jet_AntiKt4H1TopoNew_emscale_eta = 0;
   jet_AntiKt4H1TopoNew_emscale_phi = 0;
   jet_AntiKt4H1TopoNew_e_HEC0 = 0;
   jet_AntiKt4H1TopoNew_e_HEC1 = 0;
   jet_AntiKt4H1TopoNew_e_HEC2 = 0;
   jet_AntiKt4H1TopoNew_e_HEC3 = 0;
   jet_AntiKt6H1TopoNew_E = 0;
   jet_AntiKt6H1TopoNew_pt = 0;
   jet_AntiKt6H1TopoNew_m = 0;
   jet_AntiKt6H1TopoNew_eta = 0;
   jet_AntiKt6H1TopoNew_phi = 0;
   jet_AntiKt6H1TopoNew_EtaPhys = 0;
   jet_AntiKt6H1TopoNew_PhiPhys = 0;
   jet_AntiKt6H1TopoNew_MPhys = 0;
   jet_AntiKt6H1TopoNew_n90 = 0;
   jet_AntiKt6H1TopoNew_BCH_CORR_CELL = 0;
   jet_AntiKt6H1TopoNew_BCH_CORR_DOTX = 0;
   jet_AntiKt6H1TopoNew_BCH_CORR_JET = 0;
   jet_AntiKt6H1TopoNew_BCH_CORR_JET_FORCELL = 0;
   jet_AntiKt6H1TopoNew_hecf = 0;
   jet_AntiKt6H1TopoNew_tgap3f = 0;
   jet_AntiKt6H1TopoNew_isGood = 0;
   jet_AntiKt6H1TopoNew_timing = 0;
   jet_AntiKt6H1TopoNew_quality = 0;
   jet_AntiKt6H1TopoNew_emfrac = 0;
   jet_AntiKt6H1TopoNew_GCWJES = 0;
   jet_AntiKt6H1TopoNew_EMJES = 0;
   jet_AntiKt6H1TopoNew_emscale_E = 0;
   jet_AntiKt6H1TopoNew_emscale_pt = 0;
   jet_AntiKt6H1TopoNew_emscale_m = 0;
   jet_AntiKt6H1TopoNew_emscale_eta = 0;
   jet_AntiKt6H1TopoNew_emscale_phi = 0;
   jet_AntiKt6H1TopoNew_e_HEC0 = 0;
   jet_AntiKt6H1TopoNew_e_HEC1 = 0;
   jet_AntiKt6H1TopoNew_e_HEC2 = 0;
   jet_AntiKt6H1TopoNew_e_HEC3 = 0;
   trk_pt = 0;
   trk_eta = 0;
   trk_phi = 0;
   trk_d0 = 0;
   trk_z0 = 0;
   trk_theta = 0;
   trk_chi2 = 0;
   trk_ndof = 0;
   trk_nPixelHits = 0;
   trk_nSCTHits = 0;
   trk_nTRTHits = 0;
   trk_d0_wrtPV = 0;
   trk_z0_wrtPV = 0;
   trig_L1_TAV = 0;
   trig_L2_passedPhysics = 0;
   trig_EF_passedPhysics = 0;
   trig_L1_TBP = 0;
   trig_L1_TAP = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("lbn", &lbn, &b_lbn);
   fChain->SetBranchAddress("bcid", &bcid, &b_bcid);
   fChain->SetBranchAddress("collcand_passMBTSTime", &collcand_passMBTSTime, &b_collcand_passMBTSTime);
   fChain->SetBranchAddress("vxp_n", &vxp_n, &b_vxp_n);
   fChain->SetBranchAddress("vxp_x", &vxp_x, &b_vxp_x);
   fChain->SetBranchAddress("vxp_y", &vxp_y, &b_vxp_y);
   fChain->SetBranchAddress("vxp_z", &vxp_z, &b_vxp_z);
   fChain->SetBranchAddress("vxp_err_x", &vxp_err_x, &b_vxp_err_x);
   fChain->SetBranchAddress("vxp_err_y", &vxp_err_y, &b_vxp_err_y);
   fChain->SetBranchAddress("vxp_err_z", &vxp_err_z, &b_vxp_err_z);
   fChain->SetBranchAddress("vxp_cov_x", &vxp_cov_x, &b_vxp_cov_x);
   fChain->SetBranchAddress("vxp_cov_y", &vxp_cov_y, &b_vxp_cov_y);
   fChain->SetBranchAddress("vxp_cov_z", &vxp_cov_z, &b_vxp_cov_z);
   fChain->SetBranchAddress("vxp_chi2", &vxp_chi2, &b_vxp_chi2);
   fChain->SetBranchAddress("vxp_ndof", &vxp_ndof, &b_vxp_ndof);
   fChain->SetBranchAddress("vxp_px", &vxp_px, &b_vxp_px);
   fChain->SetBranchAddress("vxp_py", &vxp_py, &b_vxp_py);
   fChain->SetBranchAddress("vxp_pz", &vxp_pz, &b_vxp_pz);
   fChain->SetBranchAddress("vxp_E", &vxp_E, &b_vxp_E);
   fChain->SetBranchAddress("vxp_m", &vxp_m, &b_vxp_m);
   fChain->SetBranchAddress("vxp_nTracks", &vxp_nTracks, &b_vxp_nTracks);
   fChain->SetBranchAddress("vxp_sumPt", &vxp_sumPt, &b_vxp_sumPt);
   fChain->SetBranchAddress("vxp_type", &vxp_type, &b_vxp_type);
   fChain->SetBranchAddress("vxp_sumWeightInliers", &vxp_sumWeightInliers, &b_vxp_sumWeightInliers);
   fChain->SetBranchAddress("vxp_sumWeightOutliers", &vxp_sumWeightOutliers, &b_vxp_sumWeightOutliers);
   fChain->SetBranchAddress("vxp_sumWeightPileup", &vxp_sumWeightPileup, &b_vxp_sumWeightPileup);
   fChain->SetBranchAddress("vxp_sumWeightFakes", &vxp_sumWeightFakes, &b_vxp_sumWeightFakes);
   fChain->SetBranchAddress("vxp_nInliers", &vxp_nInliers, &b_vxp_nInliers);
   fChain->SetBranchAddress("vxp_nOutliers", &vxp_nOutliers, &b_vxp_nOutliers);
   fChain->SetBranchAddress("vxp_nPileUp", &vxp_nPileUp, &b_vxp_nPileUp);
   fChain->SetBranchAddress("vxp_nFakes", &vxp_nFakes, &b_vxp_nFakes);
   fChain->SetBranchAddress("vxp_purity", &vxp_purity, &b_vxp_purity);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_n", &jet_AntiKt4H1TopoNew_n, &b_jet_AntiKt4H1TopoNew_n);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_E", &jet_AntiKt4H1TopoNew_E, &b_jet_AntiKt4H1TopoNew_E);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_pt", &jet_AntiKt4H1TopoNew_pt, &b_jet_AntiKt4H1TopoNew_pt);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_m", &jet_AntiKt4H1TopoNew_m, &b_jet_AntiKt4H1TopoNew_m);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_eta", &jet_AntiKt4H1TopoNew_eta, &b_jet_AntiKt4H1TopoNew_eta);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_phi", &jet_AntiKt4H1TopoNew_phi, &b_jet_AntiKt4H1TopoNew_phi);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_EtaPhys", &jet_AntiKt4H1TopoNew_EtaPhys, &b_jet_AntiKt4H1TopoNew_EtaPhys);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_PhiPhys", &jet_AntiKt4H1TopoNew_PhiPhys, &b_jet_AntiKt4H1TopoNew_PhiPhys);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_MPhys", &jet_AntiKt4H1TopoNew_MPhys, &b_jet_AntiKt4H1TopoNew_MPhys);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_n90", &jet_AntiKt4H1TopoNew_n90, &b_jet_AntiKt4H1TopoNew_n90);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_BCH_CORR_CELL", &jet_AntiKt4H1TopoNew_BCH_CORR_CELL, &b_jet_AntiKt4H1TopoNew_BCH_CORR_CELL);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_BCH_CORR_DOTX", &jet_AntiKt4H1TopoNew_BCH_CORR_DOTX, &b_jet_AntiKt4H1TopoNew_BCH_CORR_DOTX);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_BCH_CORR_JET", &jet_AntiKt4H1TopoNew_BCH_CORR_JET, &b_jet_AntiKt4H1TopoNew_BCH_CORR_JET);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_BCH_CORR_JET_FORCELL", &jet_AntiKt4H1TopoNew_BCH_CORR_JET_FORCELL, &b_jet_AntiKt4H1TopoNew_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_hecf", &jet_AntiKt4H1TopoNew_hecf, &b_jet_AntiKt4H1TopoNew_hecf);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_tgap3f", &jet_AntiKt4H1TopoNew_tgap3f, &b_jet_AntiKt4H1TopoNew_tgap3f);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_isGood", &jet_AntiKt4H1TopoNew_isGood, &b_jet_AntiKt4H1TopoNew_isGood);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_timing", &jet_AntiKt4H1TopoNew_timing, &b_jet_AntiKt4H1TopoNew_timing);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_quality", &jet_AntiKt4H1TopoNew_quality, &b_jet_AntiKt4H1TopoNew_quality);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_emfrac", &jet_AntiKt4H1TopoNew_emfrac, &b_jet_AntiKt4H1TopoNew_emfrac);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_GCWJES", &jet_AntiKt4H1TopoNew_GCWJES, &b_jet_AntiKt4H1TopoNew_GCWJES);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_EMJES", &jet_AntiKt4H1TopoNew_EMJES, &b_jet_AntiKt4H1TopoNew_EMJES);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_emscale_E", &jet_AntiKt4H1TopoNew_emscale_E, &b_jet_AntiKt4H1TopoNew_emscale_E);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_emscale_pt", &jet_AntiKt4H1TopoNew_emscale_pt, &b_jet_AntiKt4H1TopoNew_emscale_pt);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_emscale_m", &jet_AntiKt4H1TopoNew_emscale_m, &b_jet_AntiKt4H1TopoNew_emscale_m);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_emscale_eta", &jet_AntiKt4H1TopoNew_emscale_eta, &b_jet_AntiKt4H1TopoNew_emscale_eta);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_emscale_phi", &jet_AntiKt4H1TopoNew_emscale_phi, &b_jet_AntiKt4H1TopoNew_emscale_phi);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_e_HEC0", &jet_AntiKt4H1TopoNew_e_HEC0, &b_jet_AntiKt4H1TopoNew_e_HEC0);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_e_HEC1", &jet_AntiKt4H1TopoNew_e_HEC1, &b_jet_AntiKt4H1TopoNew_e_HEC1);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_e_HEC2", &jet_AntiKt4H1TopoNew_e_HEC2, &b_jet_AntiKt4H1TopoNew_e_HEC2);
   fChain->SetBranchAddress("jet_AntiKt4H1TopoNew_e_HEC3", &jet_AntiKt4H1TopoNew_e_HEC3, &b_jet_AntiKt4H1TopoNew_e_HEC3);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_n", &jet_AntiKt6H1TopoNew_n, &b_jet_AntiKt6H1TopoNew_n);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_E", &jet_AntiKt6H1TopoNew_E, &b_jet_AntiKt6H1TopoNew_E);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_pt", &jet_AntiKt6H1TopoNew_pt, &b_jet_AntiKt6H1TopoNew_pt);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_m", &jet_AntiKt6H1TopoNew_m, &b_jet_AntiKt6H1TopoNew_m);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_eta", &jet_AntiKt6H1TopoNew_eta, &b_jet_AntiKt6H1TopoNew_eta);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_phi", &jet_AntiKt6H1TopoNew_phi, &b_jet_AntiKt6H1TopoNew_phi);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_EtaPhys", &jet_AntiKt6H1TopoNew_EtaPhys, &b_jet_AntiKt6H1TopoNew_EtaPhys);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_PhiPhys", &jet_AntiKt6H1TopoNew_PhiPhys, &b_jet_AntiKt6H1TopoNew_PhiPhys);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_MPhys", &jet_AntiKt6H1TopoNew_MPhys, &b_jet_AntiKt6H1TopoNew_MPhys);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_n90", &jet_AntiKt6H1TopoNew_n90, &b_jet_AntiKt6H1TopoNew_n90);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_BCH_CORR_CELL", &jet_AntiKt6H1TopoNew_BCH_CORR_CELL, &b_jet_AntiKt6H1TopoNew_BCH_CORR_CELL);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_BCH_CORR_DOTX", &jet_AntiKt6H1TopoNew_BCH_CORR_DOTX, &b_jet_AntiKt6H1TopoNew_BCH_CORR_DOTX);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_BCH_CORR_JET", &jet_AntiKt6H1TopoNew_BCH_CORR_JET, &b_jet_AntiKt6H1TopoNew_BCH_CORR_JET);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_BCH_CORR_JET_FORCELL", &jet_AntiKt6H1TopoNew_BCH_CORR_JET_FORCELL, &b_jet_AntiKt6H1TopoNew_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_hecf", &jet_AntiKt6H1TopoNew_hecf, &b_jet_AntiKt6H1TopoNew_hecf);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_tgap3f", &jet_AntiKt6H1TopoNew_tgap3f, &b_jet_AntiKt6H1TopoNew_tgap3f);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_isGood", &jet_AntiKt6H1TopoNew_isGood, &b_jet_AntiKt6H1TopoNew_isGood);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_timing", &jet_AntiKt6H1TopoNew_timing, &b_jet_AntiKt6H1TopoNew_timing);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_quality", &jet_AntiKt6H1TopoNew_quality, &b_jet_AntiKt6H1TopoNew_quality);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_emfrac", &jet_AntiKt6H1TopoNew_emfrac, &b_jet_AntiKt6H1TopoNew_emfrac);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_GCWJES", &jet_AntiKt6H1TopoNew_GCWJES, &b_jet_AntiKt6H1TopoNew_GCWJES);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_EMJES", &jet_AntiKt6H1TopoNew_EMJES, &b_jet_AntiKt6H1TopoNew_EMJES);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_emscale_E", &jet_AntiKt6H1TopoNew_emscale_E, &b_jet_AntiKt6H1TopoNew_emscale_E);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_emscale_pt", &jet_AntiKt6H1TopoNew_emscale_pt, &b_jet_AntiKt6H1TopoNew_emscale_pt);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_emscale_m", &jet_AntiKt6H1TopoNew_emscale_m, &b_jet_AntiKt6H1TopoNew_emscale_m);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_emscale_eta", &jet_AntiKt6H1TopoNew_emscale_eta, &b_jet_AntiKt6H1TopoNew_emscale_eta);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_emscale_phi", &jet_AntiKt6H1TopoNew_emscale_phi, &b_jet_AntiKt6H1TopoNew_emscale_phi);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_e_HEC0", &jet_AntiKt6H1TopoNew_e_HEC0, &b_jet_AntiKt6H1TopoNew_e_HEC0);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_e_HEC1", &jet_AntiKt6H1TopoNew_e_HEC1, &b_jet_AntiKt6H1TopoNew_e_HEC1);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_e_HEC2", &jet_AntiKt6H1TopoNew_e_HEC2, &b_jet_AntiKt6H1TopoNew_e_HEC2);
   fChain->SetBranchAddress("jet_AntiKt6H1TopoNew_e_HEC3", &jet_AntiKt6H1TopoNew_e_HEC3, &b_jet_AntiKt6H1TopoNew_e_HEC3);
   fChain->SetBranchAddress("trk_n", &trk_n, &b_trk_n);
   fChain->SetBranchAddress("trk_pt", &trk_pt, &b_trk_pt);
   fChain->SetBranchAddress("trk_eta", &trk_eta, &b_trk_eta);
   fChain->SetBranchAddress("trk_phi", &trk_phi, &b_trk_phi);
   fChain->SetBranchAddress("trk_d0", &trk_d0, &b_trk_d0);
   fChain->SetBranchAddress("trk_z0", &trk_z0, &b_trk_z0);
   fChain->SetBranchAddress("trk_theta", &trk_theta, &b_trk_theta);
   fChain->SetBranchAddress("trk_chi2", &trk_chi2, &b_trk_chi2);
   fChain->SetBranchAddress("trk_ndof", &trk_ndof, &b_trk_ndof);
   fChain->SetBranchAddress("trk_nPixelHits", &trk_nPixelHits, &b_trk_nPixelHits);
   fChain->SetBranchAddress("trk_nSCTHits", &trk_nSCTHits, &b_trk_nSCTHits);
   fChain->SetBranchAddress("trk_nTRTHits", &trk_nTRTHits, &b_trk_nTRTHits);
   fChain->SetBranchAddress("trk_d0_wrtPV", &trk_d0_wrtPV, &b_trk_d0_wrtPV);
   fChain->SetBranchAddress("trk_z0_wrtPV", &trk_z0_wrtPV, &b_trk_z0_wrtPV);
   fChain->SetBranchAddress("L1_FJ3", &L1_FJ3, &b_L1_FJ3);
   fChain->SetBranchAddress("L1_J10", &L1_J10, &b_L1_J10);
   fChain->SetBranchAddress("L1_J15", &L1_J15, &b_L1_J15);
   fChain->SetBranchAddress("L1_J30", &L1_J30, &b_L1_J30);
   fChain->SetBranchAddress("L1_J5", &L1_J5, &b_L1_J5);
   fChain->SetBranchAddress("L1_J55", &L1_J55, &b_L1_J55);
   fChain->SetBranchAddress("L1_J75", &L1_J75, &b_L1_J75);
   fChain->SetBranchAddress("L1_MBTS_1", &L1_MBTS_1, &b_L1_MBTS_1);
   fChain->SetBranchAddress("L1_MBTS_1_1", &L1_MBTS_1_1, &b_L1_MBTS_1_1);
   fChain->SetBranchAddress("trig_L1_TAV", &trig_L1_TAV, &b_trig_L1_TAV);
   fChain->SetBranchAddress("trig_L2_passedPhysics", &trig_L2_passedPhysics, &b_trig_L2_passedPhysics);
   fChain->SetBranchAddress("trig_EF_passedPhysics", &trig_EF_passedPhysics, &b_trig_EF_passedPhysics);
   fChain->SetBranchAddress("trig_L1_TBP", &trig_L1_TBP, &b_trig_L1_TBP);
   fChain->SetBranchAddress("trig_L1_TAP", &trig_L1_TAP, &b_trig_L1_TAP);
   fChain->SetBranchAddress("trig_DB_SMK", &trig_DB_SMK, &b_trig_DB_SMK);
   fChain->SetBranchAddress("trig_DB_L1PSK", &trig_DB_L1PSK, &b_trig_DB_L1PSK);
   fChain->SetBranchAddress("trig_DB_HLTPSK", &trig_DB_HLTPSK, &b_trig_DB_HLTPSK);
   Notify();
}

Bool_t Analysis_skeleton::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Analysis_skeleton::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Analysis_skeleton::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Analysis_skeleton_cxx

