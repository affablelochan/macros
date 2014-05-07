#!/usr/bin/python

from ROOT import *
#import rootlogon
ROOT.gROOT.SetBatch(1)

import sys
print "sys.argv = ", sys.argv

if not len(sys.argv)>=2:  raise(Exception, "Must specify inputFiles as argument!")

inputFiles = sys.argv[1].split(',')
print "inputFiles = ", inputFiles

#get main tree
ch = TChain("qcd")
#set max size = 10 times of default ~20 GB
ch.SetMaxTreeSize(1900000000*10)
for file in inputFiles:
    ch.Add(file)

nEntries = ch.GetEntries()
print "nEntries = ", nEntries

#*****set brances*****

#set branche satus, at first, all off
ch.SetBranchStatus("*", 0)

#event information
ch.SetBranchStatus("RunNumber",1)
ch.SetBranchStatus("EventNumber",1)
ch.SetBranchStatus("lbn",1)
ch.SetBranchStatus("bcid",1)
ch.SetBranchStatus("vxp_n",1)
ch.SetBranchStatus("vxp_x",1)
ch.SetBranchStatus("vxp_y",1)
ch.SetBranchStatus("vxp_z",1)
ch.SetBranchStatus("vxp_nTracks",1)
ch.SetBranchStatus("beamSpot_x",1)
ch.SetBranchStatus("beamSpot_y",1)
ch.SetBranchStatus("beamSpot_z",1)

#trigger bit (only a few triggers to check with TrigConfTree)
ch.SetBranchStatus("L1_J15", 1)

#TrigDecition Object
ch.SetBranchStatus("trig_L1_TAV",1);
ch.SetBranchStatus("trig_L2_passedPhysics",1);
ch.SetBranchStatus("trig_EF_passedPhysics",1);
ch.SetBranchStatus("trig_L1_TBP",1);
ch.SetBranchStatus("trig_L1_TAP",1);
ch.SetBranchStatus("trig_L2_passedRaw",1);
ch.SetBranchStatus("trig_EF_passedRaw",1);
ch.SetBranchStatus("trig_L2_resurrected",1);
ch.SetBranchStatus("trig_EF_resurrected",1);
ch.SetBranchStatus("trig_L2_passedThrough",1);
ch.SetBranchStatus("trig_EF_passedThrough",1);
ch.SetBranchStatus("trig_DB_SMK",1);
ch.SetBranchStatus("trig_DB_L1PSK",1);
ch.SetBranchStatus("trig_DB_HLTPSK",1);

#electron
ch.SetBranchStatus("el_n", 1)
ch.SetBranchStatus("el_E",1)
ch.SetBranchStatus("el_Et",1)
ch.SetBranchStatus("el_pt",1)
ch.SetBranchStatus("el_m",1)
ch.SetBranchStatus("el_eta",1)
ch.SetBranchStatus("el_phi",1)
ch.SetBranchStatus("el_px",1)
ch.SetBranchStatus("el_py",1)
ch.SetBranchStatus("el_pz",1)
ch.SetBranchStatus("el_charge",1)
ch.SetBranchStatus("el_author",1)
ch.SetBranchStatus("el_isEM",1)
ch.SetBranchStatus("el_loose",1)
ch.SetBranchStatus("el_medium",1)
ch.SetBranchStatus("el_mediumIso",1)
ch.SetBranchStatus("el_tight",1)
ch.SetBranchStatus("el_tightIso",1)
ch.SetBranchStatus("el_Etcone45",1)
ch.SetBranchStatus("el_Etcone20",1)
ch.SetBranchStatus("el_Etcone30",1)
ch.SetBranchStatus("el_Etcone40",1)
ch.SetBranchStatus("el_Es2",1)
ch.SetBranchStatus("el_etas2",1)
ch.SetBranchStatus("el_phis2",1)
ch.SetBranchStatus("el_cl_E",1)
ch.SetBranchStatus("el_cl_pt",1)
ch.SetBranchStatus("el_cl_eta",1)
ch.SetBranchStatus("el_cl_phi",1)

ch.SetBranchStatus("el_trackd0",1)
ch.SetBranchStatus("el_trackz0",1)
ch.SetBranchStatus("el_trackphi",1)
ch.SetBranchStatus("el_tracktheta",1)
ch.SetBranchStatus("el_trackqoverp",1)
ch.SetBranchStatus("el_trackpt",1)
ch.SetBranchStatus("el_tracketa",1)

ch.SetBranchStatus("el_refittedtrackqoverp",1)
ch.SetBranchStatus("el_refittedtrackd0",1)
ch.SetBranchStatus("el_refittedtrackz0",1)
ch.SetBranchStatus("el_refittedtracktheta",1)
ch.SetBranchStatus("el_refittedtrackphi",1)

ch.SetBranchStatus("el_vertx",1)
ch.SetBranchStatus("el_verty",1)
ch.SetBranchStatus("el_vertz",1)

#photon
ch.SetBranchStatus("ph_n",1);
ch.SetBranchStatus("ph_E",1)
ch.SetBranchStatus("ph_Et",1)
ch.SetBranchStatus("ph_pt",1)
ch.SetBranchStatus("ph_m",1)
ch.SetBranchStatus("ph_eta",1)
ch.SetBranchStatus("ph_phi",1)
ch.SetBranchStatus("ph_px",1)
ch.SetBranchStatus("ph_py",1)
ch.SetBranchStatus("ph_pz",1)
ch.SetBranchStatus("ph_author",1)
ch.SetBranchStatus("ph_isEM",1)
ch.SetBranchStatus("ph_loose",1)
ch.SetBranchStatus("ph_tight",1)
ch.SetBranchStatus("ph_tightIso",1)
ch.SetBranchStatus("ph_Etcone45",1)
ch.SetBranchStatus("ph_Etcone20",1)
ch.SetBranchStatus("ph_Etcone30",1)
ch.SetBranchStatus("ph_Etcone40",1)
ch.SetBranchStatus("ph_cl_E",1)
ch.SetBranchStatus("ph_cl_pt",1)
ch.SetBranchStatus("ph_cl_eta",1)
ch.SetBranchStatus("ph_cl_phi",1)
ch.SetBranchStatus("ph_Es2",1)
ch.SetBranchStatus("ph_etas2",1)
ch.SetBranchStatus("ph_phis2",1)

#muon
ch.SetBranchStatus("mu_staco_n",1)
ch.SetBranchStatus("mu_staco_E",1)
ch.SetBranchStatus("mu_staco_px",1)
ch.SetBranchStatus("mu_staco_py",1)
ch.SetBranchStatus("mu_staco_pz",1)
ch.SetBranchStatus("mu_staco_charge",1)
ch.SetBranchStatus("mu_staco_author",1)
ch.SetBranchStatus("mu_staco_matchchi2",1)
ch.SetBranchStatus("mu_staco_matchndof",1)
ch.SetBranchStatus("mu_staco_etcone20",1)
ch.SetBranchStatus("mu_staco_etcone30",1)
ch.SetBranchStatus("mu_staco_etcone40",1)
ch.SetBranchStatus("mu_staco_nucone20",1)
ch.SetBranchStatus("mu_staco_nucone30",1)
ch.SetBranchStatus("mu_staco_nucone40",1)
ch.SetBranchStatus("mu_staco_ptcone20",1)
ch.SetBranchStatus("mu_staco_ptcone30",1)
ch.SetBranchStatus("mu_staco_ptcone40",1)
ch.SetBranchStatus("mu_staco_bestMatch",1)
ch.SetBranchStatus("mu_staco_isStandAloneMuon",1)
ch.SetBranchStatus("mu_staco_isCombinedMuon",1)
ch.SetBranchStatus("mu_staco_isLowPtReconstructedMuon",1)
ch.SetBranchStatus("mu_staco_d0_exPV",1)
ch.SetBranchStatus("mu_staco_z0_exPV",1)

ch.SetBranchStatus("mu_staco_ms_phi",1)
ch.SetBranchStatus("mu_staco_ms_theta",1)
ch.SetBranchStatus("mu_staco_ms_qoverp",1)
ch.SetBranchStatus("mu_staco_id_phi",1)
ch.SetBranchStatus("mu_staco_id_theta",1)
ch.SetBranchStatus("mu_staco_id_qoverp",1)

#jet
for jetBase in [ "jet_AntiKt4H1Topo_", "jet_AntiKt6H1Tower_" ]:
    ch.SetBranchStatus(jetBase+"n",1)
    ch.SetBranchStatus(jetBase+"E",1)
    ch.SetBranchStatus(jetBase+"pt",1)
    ch.SetBranchStatus(jetBase+"m",1)
    ch.SetBranchStatus(jetBase+"eta",1)
    ch.SetBranchStatus(jetBase+"phi",1)
    ch.SetBranchStatus(jetBase+"EtaPhys",1)
    ch.SetBranchStatus(jetBase+"PhiPhys",1)
    ch.SetBranchStatus(jetBase+"MPhys",1)
    ch.SetBranchStatus(jetBase+"n90",1)
    ch.SetBranchStatus(jetBase+"fracSamplingMax",1)
    ch.SetBranchStatus(jetBase+"SamplingMax",1)
    ch.SetBranchStatus(jetBase+"BCH_CORR_CELL",1)
    ch.SetBranchStatus(jetBase+"BCH_CORR_DOTX",1)
    ch.SetBranchStatus(jetBase+"hecf",1)
    ch.SetBranchStatus(jetBase+"tgap3f",1)
    ch.SetBranchStatus(jetBase+"isGood",1)
    ch.SetBranchStatus(jetBase+"timing",1)
    ch.SetBranchStatus(jetBase+"quality",1)
    ch.SetBranchStatus(jetBase+"emfrac",1)
    ch.SetBranchStatus(jetBase+"GCWJES",1)
    ch.SetBranchStatus(jetBase+"EMJES",1)
    ch.SetBranchStatus(jetBase+"emscale_E",1)
    ch.SetBranchStatus(jetBase+"emscale_pt",1)
    ch.SetBranchStatus(jetBase+"emscale_m",1)
    ch.SetBranchStatus(jetBase+"emscale_eta",1)
    ch.SetBranchStatus(jetBase+"emscale_phi",1)

#turth jet
for truthJetBase in [ "AntiKt4TruthNew_", "AntiKt6Truth_" ]:
    ch.SetBranchStatus(truthJetBase+"n",1)
    ch.SetBranchStatus(truthJetBase+"E",1)
    ch.SetBranchStatus(truthJetBase+"pt",1)
    ch.SetBranchStatus(truthJetBase+"m",1)
    ch.SetBranchStatus(truthJetBase+"eta",1)
    ch.SetBranchStatus(truthJetBase+"phi",1)

#met
ch.SetBranchStatus("MET_RefFinal_etx",1)
ch.SetBranchStatus("MET_RefFinal_ety",1)
ch.SetBranchStatus("MET_RefFinal_sumet",1)

ch.SetBranchStatus("MET_RefJet_etx",1)
ch.SetBranchStatus("MET_RefJet_ety",1)
ch.SetBranchStatus("MET_RefJet_sumet",1)

ch.SetBranchStatus("MET_CellOut_etx",1)
ch.SetBranchStatus("MET_CellOut_ety",1)
ch.SetBranchStatus("MET_CellOut_sumet",1)

ch.SetBranchStatus("MET_RefGamma_etx",1)
ch.SetBranchStatus("MET_RefGamma_ety",1)
ch.SetBranchStatus("MET_RefGamma_sumet",1)

ch.SetBranchStatus("MET_RefEle_etx",1)
ch.SetBranchStatus("MET_RefEle_ety",1)
ch.SetBranchStatus("MET_RefEle_sumet",1)

ch.SetBranchStatus("MET_LocHadTopoObj_etx",1)
ch.SetBranchStatus("MET_LocHadTopoObj_ety",1)
ch.SetBranchStatus("MET_LocHadTopoObj_sumet",1)

ch.SetBranchStatus("MET_LocHadTopo_etx",1)
ch.SetBranchStatus("MET_LocHadTopo_ety",1)
ch.SetBranchStatus("MET_LocHadTopo_sumet",1)

ch.SetBranchStatus("MET_Topo_etx",1)
ch.SetBranchStatus("MET_Topo_ety",1)
ch.SetBranchStatus("MET_Topo_sumet",1)

ch.SetBranchStatus("MET_RefMuon_etx",1)
ch.SetBranchStatus("MET_RefMuon_ety",1)
ch.SetBranchStatus("MET_RefMuon_sumet",1)

ch.SetBranchStatus("MET_RefMuon_Track_etx",1)
ch.SetBranchStatus("MET_RefMuon_Track_ety",1)
ch.SetBranchStatus("MET_RefMuon_Track_sumet",1)

ch.SetBranchStatus("MET_MuonBoy_etx",1)
ch.SetBranchStatus("MET_MuonBoy_ety",1)
ch.SetBranchStatus("MET_MuonBoy_sumet",1)

ch.SetBranchStatus("MET_MuonBoy_Track_etx",1)
ch.SetBranchStatus("MET_MuonBoy_Track_ety",1)
ch.SetBranchStatus("MET_MuonBoy_Track_sumet",1)

ch.SetBranchStatus("MET_MuonBoy_Spectro_etx",1)
ch.SetBranchStatus("MET_MuonBoy_Spectro_ety",1)
ch.SetBranchStatus("MET_MuonBoy_Spectro_sumet",1)

ch.SetBranchStatus("MET_Truth_NonInt_etx",1)
ch.SetBranchStatus("MET_Truth_NonInt_ety",1)
ch.SetBranchStatus("MET_Truth_NonInt_sumet",1)

ch.SetBranchStatus("MET_Truth_Int_etx",1)
ch.SetBranchStatus("MET_Truth_Int_ety",1)
ch.SetBranchStatus("MET_Truth_Int_sumet",1)

ch.SetBranchStatus("MET_Truth_IntMuons_etx",1)
ch.SetBranchStatus("MET_Truth_IntMuons_ety",1)
ch.SetBranchStatus("MET_Truth_IntMuons_sumet",1)


#mc
ch.SetBranchStatus("mcevt_n",1)
ch.SetBranchStatus("mcevt_signal_process_id",1)
ch.SetBranchStatus("mcevt_event_number",1)
ch.SetBranchStatus("mcevt_event_scale",1)
ch.SetBranchStatus("mcevt_alphaQCD",1)
ch.SetBranchStatus("mcevt_alphaQED",1)
ch.SetBranchStatus("mcevt_pdf_id1",1)
ch.SetBranchStatus("mcevt_pdf_id2",1)
ch.SetBranchStatus("mcevt_pdf_x1",1)
ch.SetBranchStatus("mcevt_pdf_x2",1)
ch.SetBranchStatus("mcevt_pdf_scale",1)
ch.SetBranchStatus("mcevt_pdf1",1)
ch.SetBranchStatus("mcevt_pdf2",1)
ch.SetBranchStatus("mcevt_weight",1)
ch.SetBranchStatus("mc_n",1)
ch.SetBranchStatus("mc_pt",1)
ch.SetBranchStatus("mc_eta",1)
ch.SetBranchStatus("mc_phi",1)
ch.SetBranchStatus("mc_status",1)
ch.SetBranchStatus("mc_barcode",1)
ch.SetBranchStatus("mc_parents",1)
ch.SetBranchStatus("mc_children",1)
ch.SetBranchStatus("mc_pdgId",1)

#*****end set brances*****

#get qcd trigger
chTri = TChain("qcdMeta/TrigConfTree")
chTri.SetMaxTreeSize(1900000000*1000)
for file in inputFiles:
    chTri.Add(file)

# Write to new file
outFile = "qcd.root"
newFile = TFile(outFile, "RECREATE")

#start qcd

#event selection

#----- GoodRunList example
def grlCut(RunNumber, lbn):
    #--- Data
    if   (RunNumber==153599):
        # JetEtMiss 413-519
        if (lbn>=413 and lbn<=519):  return True
    elif (RunNumber==153565):
        # JetEtMiss 258-953
        if (lbn>=258 and lbn<=953):  return True

    #--- Monte Carlo
    elif (RunNumber>=105009 and RunNumber<=105015):     # MC:  Dijet JX
        return True

    #--- Not recognized (reject by default)
    else:
        return False

#new tree
ch_new = ch.CloneTree(0)
for i in range(nEntries):
    ch.GetEntry(i)

    if True: # path through
        ch_new.Fill()

    #if grlCut(ch.RunNumber, ch.lbn): #grl cut
    #    ch_new.Fill()

    #if ch.L1_J15: #trigger
    #    ch_new.Fill()

    #if i%100==0: # random prescale
    #    ch_new.Fill()

    #for j in range(ch.jet_AntiKt4H1Topo_n):
    #    if ch.jet_AntiKt4H1Topo_emscale_pt[j] > 30*1000: #cut on leading jet 30 GeV
    #        ch_new.Fill()


newFile.cd()
ch_new.Write()
nEntriesNew = ch_new.GetEntries()
print "nEntriesForNewFile = ", nEntriesNew
#end qcd

#start qcdMeta
newdir = newFile.mkdir( "qcdMeta", "qcdMeta" )
newdir.cd()
chTri_new = chTri.CloneTree()
chTri_new.Write()

#end qcdMeta
