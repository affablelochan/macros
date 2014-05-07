//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Dec 21 02:45:04 2009 by ROOT version 5.12/00
// from TChain tree/
//////////////////////////////////////////////////////////

#ifndef myana_h
#define myana_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

class myana {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leave types
   Float_t         zvtx;
   Float_t         chi2vtx;
   Float_t         MBprobvtx;
   Int_t           ntrkvtx;
   Int_t           nvtx;
   Float_t         vtxeff;
   Float_t         vtxz[19];   //[nvtx]
   Int_t           vtxntrk[19];   //[nvtx]
   Float_t         vtxMBprob[19];   //[nvtx]
   Float_t         vtxchi2[19];   //[nvtx]
   Bool_t          jt8;
   Bool_t          jt15;
   Bool_t          jt25;
   Bool_t          jt45;
   Bool_t          jt65;
   Bool_t          jt95;
   Bool_t          jt125;
   Bool_t          minbias;
   Bool_t          m225;
   Bool_t          m250;
   Bool_t          m380;
   Bool_t          m430;
   Bool_t          L2Conf;
   Int_t           lbn;
   Float_t         ilum;
   Int_t           run;
   Int_t           evt;
   Int_t           tick;
   Float_t         solcur;
   Int_t           store;
   Float_t         met;
   Float_t         djmass;
   Float_t         chi;
   Float_t         trijmass;
   Bool_t          evtgood;
   Bool_t          calfail;
   Int_t           njets;
   Float_t         jpt[26];   //[njets]
   Float_t         jpx[26];   //[njets]
   Float_t         jpy[26];   //[njets]
   Float_t         jpz[26];   //[njets]
   Float_t         jy[26];   //[njets]
   Float_t         jeta[26];   //[njets]
   Float_t         jetaD[26];   //[njets]
   Float_t         jphi[26];   //[njets]
   Float_t         je[26];   //[njets]
   Float_t         jC[26];   //[njets]
   Float_t         jCup[26];   //[njets]
   Float_t         jCdown[26];   //[njets]
   Bool_t          jgood[26];   //[njets]
   Bool_t          jisEM[26];   //[njets]
   Int_t           jindex[26];   //[njets]
   Float_t         jemf[26];   //[njets]
   Float_t         jchf[26];   //[njets]
   Float_t         jicdf[26];   //[njets]
   Float_t         jL1[26];   //[njets]
   Bool_t          jL1conf[26];   //[njets]
   Float_t         jL1pt[26];   //[njets]
   Float_t         jhotcell[26];   //[njets]
   Int_t           jn90[26];   //[njets]
   Float_t         jetawid[26];   //[njets]
   Int_t           jnItems[26];   //[njets]
   Float_t         jfhf[26];   //[njets]
   Float_t         jccmgetf[26];   //[njets]
   Float_t         jecmgetf[26];   //[njets]
   Float_t         jcpf0[26];   //[njets]
   Float_t         jwidth[26];   //[njets]
   Float_t         jphiwid[26];   //[njets]
   Int_t           jsmword[26];   //[njets]
   Int_t           jntrkMult0[26];   //[njets]
   Int_t           jncells[26];   //[njets]
   Float_t         jeff[26];   //[njets]
   Float_t         juncorrpt[26];   //[njets]
   Float_t         juncorrpx[26];   //[njets]
   Float_t         juncorrpy[26];   //[njets]
   Float_t         juncorrpz[26];   //[njets]
   Float_t         juncorry[26];   //[njets]
   Float_t         juncorreta[26];   //[njets]
   Float_t         juncorrphi[26];   //[njets]
   Float_t         juncorre[26];   //[njets]

   // List of branches
   TBranch        *b_zvtx;   //!
   TBranch        *b_chi2vtx;   //!
   TBranch        *b_MBprobvtx;   //!
   TBranch        *b_ntrkvtx;   //!
   TBranch        *b_nvtx;   //!
   TBranch        *b_vtxeff;   //!
   TBranch        *b_vtxz;   //!
   TBranch        *b_vtxntrk;   //!
   TBranch        *b_vtxMBprob;   //!
   TBranch        *b_vtxchi2;   //!
   TBranch        *b_jt8;   //!
   TBranch        *b_jt15;   //!
   TBranch        *b_jt25;   //!
   TBranch        *b_jt45;   //!
   TBranch        *b_jt65;   //!
   TBranch        *b_jt95;   //!
   TBranch        *b_jt125;   //!
   TBranch        *b_minbias;   //!
   TBranch        *b_m225;   //!
   TBranch        *b_m250;   //!
   TBranch        *b_m380;   //!
   TBranch        *b_m430;   //!
   TBranch        *b_L2Conf;   //!
   TBranch        *b_lbn;   //!
   TBranch        *b_ilum;   //!
   TBranch        *b_run;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_tick;   //!
   TBranch        *b_solcur;   //!
   TBranch        *b_store;   //!
   TBranch        *b_met;   //!
   TBranch        *b_djmass;   //!
   TBranch        *b_chi;   //!
   TBranch        *b_trijmass;   //!
   TBranch        *b_evtgood;   //!
   TBranch        *b_calfail;   //!
   TBranch        *b_njets;   //!
   TBranch        *b_jpt;   //!
   TBranch        *b_jpx;   //!
   TBranch        *b_jpy;   //!
   TBranch        *b_jpz;   //!
   TBranch        *b_jy;   //!
   TBranch        *b_jeta;   //!
   TBranch        *b_jetaD;   //!
   TBranch        *b_jphi;   //!
   TBranch        *b_je;   //!
   TBranch        *b_jC;   //!
   TBranch        *b_jCup;   //!
   TBranch        *b_jCdown;   //!
   TBranch        *b_jgood;   //!
   TBranch        *b_jisEM;   //!
   TBranch        *b_jindex;   //!
   TBranch        *b_jemf;   //!
   TBranch        *b_jchf;   //!
   TBranch        *b_jicdf;   //!
   TBranch        *b_jL1;   //!
   TBranch        *b_jL1conf;   //!
   TBranch        *b_jL1pt;   //!
   TBranch        *b_jhotcell;   //!
   TBranch        *b_jn90;   //!
   TBranch        *b_jetawid;   //!
   TBranch        *b_jnItems;   //!
   TBranch        *b_jfhf;   //!
   TBranch        *b_jccmgetf;   //!
   TBranch        *b_jecmgetf;   //!
   TBranch        *b_jcpf0;   //!
   TBranch        *b_jwidth;   //!
   TBranch        *b_jphiwid;   //!
   TBranch        *b_jsmword;   //!
   TBranch        *b_jntrkMult0;   //!
   TBranch        *b_jncells;   //!
   TBranch        *b_jeff;   //!
   TBranch        *b_juncorrpt;   //!
   TBranch        *b_juncorrpx;   //!
   TBranch        *b_juncorrpy;   //!
   TBranch        *b_juncorrpz;   //!
   TBranch        *b_juncorry;   //!
   TBranch        *b_juncorreta;   //!
   TBranch        *b_juncorrphi;   //!
   TBranch        *b_juncorre;   //!

   myana(TTree *tree=0);
   virtual ~myana();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef myana_cxx
myana::myana(TTree *tree)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {

#ifdef SINGLE_TREE
      // The following code should be used if you want this class to access
      // a single tree instead of a chain
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Memory Directory");
      if (!f) {
         f = new TFile("Memory Directory");
         f->cd("Rint:/");
      }
      tree = (TTree*)gDirectory->Get("tree");

#else // SINGLE_TREE

      // The following code should be used if you want this class to access a chain
      // of trees.
      TChain * chain = new TChain("tree","");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_0_20080521233206-824819.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_10_20080521233238-824843.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_11_20080521233240-824846.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_1_20080521233213-824822.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_12_20080521233243-824848.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_13_20080521233246-824851.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_14_20080521233248-824853.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_15_20080521233251-824856.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_16_20080521233253-824859.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_17_20080521233256-824861.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_18_20080521233258-824864.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_19_20080521233301-824888.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_20_20080521233351-824898.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_21_20080521233402-824906.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_2_20080521233216-824824.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_22_20080521233422-824920.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_23_20080521233454-824927.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_24_20080521233505-824939.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_25_20080521233524-824952.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_26_20080521233542-824957.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_27_20080521233556-824965.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_28_20080521233602-824970.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_29_20080521233608-824974.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_30_20080521233612-824978.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_31_20080521233617-824982.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_3_20080521233219-824826.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_32_20080521233623-824985.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_33_20080521233627-824990.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_34_20080521233635-824996.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_35_20080521233645-825001.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_36_20080521233652-825003.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_37_20080521233658-825010.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_38_20080521233706-825017.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_39_20080521233725-825018.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_4_20080521233221-824829.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_5_20080521233225-824831.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_6_20080521233227-824834.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_7_20080521233230-824836.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_8_20080521233233-824838.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data1_9_20080521233235-824841.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_0_20080521233806-825031.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_10_20080521233915-825045.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_11_20080521233918-825046.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_1_20080521233843-825036.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_12_20080521233921-825047.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_13_20080521233923-825048.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_14_20080521233926-825049.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_15_20080521233929-825050.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_16_20080521233931-825051.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_17_20080521233934-825052.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_18_20080521233937-825053.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_19_20080521233940-825054.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_20_20080521233943-825055.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_21_20080521233945-825056.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_2_20080521233851-825037.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_22_20080521233948-825057.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_23_20080521233951-825060.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_24_20080521233954-825062.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_25_20080521233957-825065.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_26_20080521234000-825068.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_27_20080521234004-825071.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_28_20080521234007-825074.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_29_20080521234011-825077.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_30_20080521234014-825080.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_31_20080521234018-825082.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_3_20080521233853-825038.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_32_20080521234022-825085.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_33_20080521234026-825088.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_34_20080521234029-825091.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_35_20080521234033-825093.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_36_20080521234036-825096.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_37_20080521234039-825099.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_38_20080521234043-825101.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_39_20080521234046-825103.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_4_20080521233856-825039.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_5_20080521233858-825040.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_6_20080521233901-825041.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_7_20080521233905-825042.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_8_20080521233908-825043.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data2_9_20080521233911-825044.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_0_20080521234302-825151.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_10_20080521234335-825169.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_11_20080521234339-825172.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_1_20080521234309-825152.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_12_20080521234341-825174.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_13_20080521234345-825177.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_14_20080521234348-825179.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_15_20080521234351-825182.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_16_20080521234353-825184.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_17_20080521234357-825187.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_18_20080521234400-825189.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_19_20080521234403-825193.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_20_20080521234406-825196.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_21_20080521234410-825199.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_2_20080521234312-825153.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_22_20080521234413-825201.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_23_20080521234416-825204.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_24_20080521234419-825206.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_25_20080521234422-825209.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_26_20080521234425-825212.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_27_20080521234428-825214.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_28_20080521234430-825215.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_29_20080521234433-825216.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_30_20080521234436-825217.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_31_20080521234438-825218.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_3_20080521234315-825154.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_32_20080521234441-825220.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_33_20080521234443-825221.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_34_20080521234446-825222.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_35_20080521234449-825223.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_36_20080521234451-825224.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_37_20080521234454-825225.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_38_20080521234456-825226.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_39_20080521234459-825228.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_4_20080521234317-825155.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_5_20080521234320-825158.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_6_20080521234323-825160.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_7_20080521234326-825162.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_8_20080521234329-825165.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      chain->Add("/prj_root/3011/qcd_write/kdevaugh/QCD_p17DATA_20080521/data3_9_20080521234332-825167.timber-clued0.fnal.gov/QCD_p17Data_roottuple.root/tree");
      tree = chain;
#endif // SINGLE_TREE

   }
   Init(tree);
}

myana::~myana()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t myana::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t myana::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->IsA() != TChain::Class()) return centry;
   TChain *chain = (TChain*)fChain;
   if (chain->GetTreeNumber() != fCurrent) {
      fCurrent = chain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void myana::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normaly not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("zvtx", &zvtx, &b_zvtx);
   fChain->SetBranchAddress("chi2vtx", &chi2vtx, &b_chi2vtx);
   fChain->SetBranchAddress("MBprobvtx", &MBprobvtx, &b_MBprobvtx);
   fChain->SetBranchAddress("ntrkvtx", &ntrkvtx, &b_ntrkvtx);
   fChain->SetBranchAddress("nvtx", &nvtx, &b_nvtx);
   fChain->SetBranchAddress("vtxeff", &vtxeff, &b_vtxeff);
   fChain->SetBranchAddress("vtxz", vtxz, &b_vtxz);
   fChain->SetBranchAddress("vtxntrk", vtxntrk, &b_vtxntrk);
   fChain->SetBranchAddress("vtxMBprob", vtxMBprob, &b_vtxMBprob);
   fChain->SetBranchAddress("vtxchi2", vtxchi2, &b_vtxchi2);
   fChain->SetBranchAddress("jt8", &jt8, &b_jt8);
   fChain->SetBranchAddress("jt15", &jt15, &b_jt15);
   fChain->SetBranchAddress("jt25", &jt25, &b_jt25);
   fChain->SetBranchAddress("jt45", &jt45, &b_jt45);
   fChain->SetBranchAddress("jt65", &jt65, &b_jt65);
   fChain->SetBranchAddress("jt95", &jt95, &b_jt95);
   fChain->SetBranchAddress("jt125", &jt125, &b_jt125);
   fChain->SetBranchAddress("minbias", &minbias, &b_minbias);
   fChain->SetBranchAddress("m225", &m225, &b_m225);
   fChain->SetBranchAddress("m250", &m250, &b_m250);
   fChain->SetBranchAddress("m380", &m380, &b_m380);
   fChain->SetBranchAddress("m430", &m430, &b_m430);
   fChain->SetBranchAddress("L2Conf", &L2Conf, &b_L2Conf);
   fChain->SetBranchAddress("lbn", &lbn, &b_lbn);
   fChain->SetBranchAddress("ilum", &ilum, &b_ilum);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("tick", &tick, &b_tick);
   fChain->SetBranchAddress("solcur", &solcur, &b_solcur);
   fChain->SetBranchAddress("store", &store, &b_store);
   fChain->SetBranchAddress("met", &met, &b_met);
   fChain->SetBranchAddress("djmass", &djmass, &b_djmass);
   fChain->SetBranchAddress("chi", &chi, &b_chi);
   fChain->SetBranchAddress("trijmass", &trijmass, &b_trijmass);
   fChain->SetBranchAddress("evtgood", &evtgood, &b_evtgood);
   fChain->SetBranchAddress("calfail", &calfail, &b_calfail);
   fChain->SetBranchAddress("njets", &njets, &b_njets);
   fChain->SetBranchAddress("jpt", jpt, &b_jpt);
   fChain->SetBranchAddress("jpx", jpx, &b_jpx);
   fChain->SetBranchAddress("jpy", jpy, &b_jpy);
   fChain->SetBranchAddress("jpz", jpz, &b_jpz);
   fChain->SetBranchAddress("jy", jy, &b_jy);
   fChain->SetBranchAddress("jeta", jeta, &b_jeta);
   fChain->SetBranchAddress("jetaD", jetaD, &b_jetaD);
   fChain->SetBranchAddress("jphi", jphi, &b_jphi);
   fChain->SetBranchAddress("je", je, &b_je);
   fChain->SetBranchAddress("jC", jC, &b_jC);
   fChain->SetBranchAddress("jCup", jCup, &b_jCup);
   fChain->SetBranchAddress("jCdown", jCdown, &b_jCdown);
   fChain->SetBranchAddress("jgood", jgood, &b_jgood);
   fChain->SetBranchAddress("jisEM", jisEM, &b_jisEM);
   fChain->SetBranchAddress("jindex", jindex, &b_jindex);
   fChain->SetBranchAddress("jemf", jemf, &b_jemf);
   fChain->SetBranchAddress("jchf", jchf, &b_jchf);
   fChain->SetBranchAddress("jicdf", jicdf, &b_jicdf);
   fChain->SetBranchAddress("jL1", jL1, &b_jL1);
   fChain->SetBranchAddress("jL1conf", jL1conf, &b_jL1conf);
   fChain->SetBranchAddress("jL1pt", jL1pt, &b_jL1pt);
   fChain->SetBranchAddress("jhotcell", jhotcell, &b_jhotcell);
   fChain->SetBranchAddress("jn90", jn90, &b_jn90);
   fChain->SetBranchAddress("jetawid", jetawid, &b_jetawid);
   fChain->SetBranchAddress("jnItems", jnItems, &b_jnItems);
   fChain->SetBranchAddress("jfhf", jfhf, &b_jfhf);
   fChain->SetBranchAddress("jccmgetf", jccmgetf, &b_jccmgetf);
   fChain->SetBranchAddress("jecmgetf", jecmgetf, &b_jecmgetf);
   fChain->SetBranchAddress("jcpf0", jcpf0, &b_jcpf0);
   fChain->SetBranchAddress("jwidth", jwidth, &b_jwidth);
   fChain->SetBranchAddress("jphiwid", jphiwid, &b_jphiwid);
   fChain->SetBranchAddress("jsmword", jsmword, &b_jsmword);
   fChain->SetBranchAddress("jntrkMult0", jntrkMult0, &b_jntrkMult0);
   fChain->SetBranchAddress("jncells", jncells, &b_jncells);
   fChain->SetBranchAddress("jeff", jeff, &b_jeff);
   fChain->SetBranchAddress("juncorrpt", juncorrpt, &b_juncorrpt);
   fChain->SetBranchAddress("juncorrpx", juncorrpx, &b_juncorrpx);
   fChain->SetBranchAddress("juncorrpy", juncorrpy, &b_juncorrpy);
   fChain->SetBranchAddress("juncorrpz", juncorrpz, &b_juncorrpz);
   fChain->SetBranchAddress("juncorry", juncorry, &b_juncorry);
   fChain->SetBranchAddress("juncorreta", juncorreta, &b_juncorreta);
   fChain->SetBranchAddress("juncorrphi", juncorrphi, &b_juncorrphi);
   fChain->SetBranchAddress("juncorre", juncorre, &b_juncorre);
   Notify();
}

Bool_t myana::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normaly not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void myana::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t myana::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef myana_cxx
