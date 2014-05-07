
import ROOT
import sys
import user
import PyCintex; PyCintex.Cintex.Enable()


from ROOT import TFile, TTree
from array import array
from optparse import OptionParser 
ROOT.gSystem.Load( "libTriggerD3PDHelpers.so" )
tdt = ROOT.D3PD.PyTrigDecisionToolD3PD()

parser = OptionParser()
parser.add_option("-i", "--inputlist", help="comma separated list of D3PDs to use", metavar="<list>", dest="inputlist")
(options, args) = parser.parse_args()



if not options.inputlist:
   print "No list of files to slim given. Use -I to give a file or -i a list containing the list of D3PDS, this analysis will not work."
   d3pds = []
else :
   print "using list of D3PDs given on the command line"
   d3pds=options.inputlist.split(",")


eventTree = ROOT.TChain("qcd")
metaTree = ROOT.TChain("qcdMeta/TrigConfTree")


for inputFile in d3pds:
   print "add %s" % inputFile
   eventTree.Add(inputFile)
   metaTree.Add(inputFile)


if not tdt.SetEventTree( eventTree ):
   HandleTheProblem()
   pass
if not tdt.GetConfigSvc().SetConfigTree( metaTree ):
   HandleTheProblem()
   pass

myHis = ROOT.TH2F("ROI_mu","A Histogram Example",100,0,20,50,-0.5,49.5)
Rpvtx = ROOT.TH2F("ROI_pvtx","roinpvtx",30,-0.5,29.5,50,-0.5,49.5)
myHis15 = ROOT.TH2F("ROI_mu15","A Histogram Example",100,0,20,50,-0.5,49.5)
Rpvtx15 = ROOT.TH2F("ROI_pvtx15","roinpvtx",30,-0.5,29.5,50,-0.5,49.5)
myHis20 = ROOT.TH2F("ROI_mu20","A Histogram Example",100,0,20,50,-0.5,49.5)
Rpvtx20 = ROOT.TH2F("ROI_pvtx20","roinpvtx",30,-0.5,29.5,50,-0.5,49.5)

my_His = ROOT.TH2F("ROI_mu_1","A Histogram Example",100,0,20,50,-0.5,49.5)
R_pvtx = ROOT.TH2F("ROI_pvtx_1","roinpvtx",30,-0.5,29.5,50,-0.5,49.5)
my_His15 = ROOT.TH2F("ROI_mu15_1","A Histogram Example",100,0,20,50,-0.5,49.5)
R_pvtx15 = ROOT.TH2F("ROI_pvtx15_1","roinpvtx",30,-0.5,29.5,50,-0.5,49.5)
my_His20 = ROOT.TH2F("ROI_mu20_1","A Histogram Example",100,0,20,50,-0.5,49.5)
R_pvtx20 = ROOT.TH2F("ROI_pvtx20_1","roinpvtx",30,-0.5,29.5,50,-0.5,49.5)



n_entries = eventTree.GetEntries()
print "Total entries: ",n_entries
    

for i in range(1000):
   eventTree.GetEntry(i)
   tdt.GetEntry(i)
   cg = tdt.GetChainGroup("EF_j10_a4tc_EFFS")
   cg1 = tdt.GetChainGroup("EF_j15_a4tc_EFFS")
   cg2 = tdt.GetChainGroup("EF_j20_a4tc_EFFS")

   
   if cg.IsPassed() or cg1.IsPassed() or cg2.IsPassed() :
      n_l1_jet_rois =0
      n_l1_jet_15rois =0
      n_l1_jet_20rois =0
      pvtn =0
      mu =0
      for i in range(eventTree.trig_L1_jet_n):
         if "J10" in eventTree.trig_L1_jet_thrNames[i]: n_l1_jet_rois+=1
         if "J15" in eventTree.trig_L1_jet_thrNames[i]: n_l1_jet_15rois+=1
         if "J20" in eventTree.trig_L1_jet_thrNames[i]: n_l1_jet_20rois+=1
      n_roisef = n_l1_jet_rois
      pvtn = eventTree.vxp_n
      mu = eventTree.averageIntPerXing
      Rpvtx.Fill(pvtn,n_roisef,1)      
      myHis.Fill(mu,n_roisef,1)     
      Rpvtx15.Fill(pvtn,n_l1_jet_15rois,1)      
      myHis15.Fill(mu,n_l1_jet_15rois,1)
      Rpvtx20.Fill(pvtn,n_l1_jet_20rois,1)      
      myHis20.Fill(mu,n_l1_jet_20rois,1)     
     
   if cg.IsPassed() :
      n_l1_jet_rois =0
      pvtn =0
      mu =0
      for i in range(eventTree.trig_L1_jet_n):
         if "J10" in eventTree.trig_L1_jet_thrNames[i]: n_l1_jet_rois+=1
      n_roisef = n_l1_jet_rois
      pvtn = eventTree.vxp_n
      mu = eventTree.averageIntPerXing
      R_pvtx.Fill(pvtn,n_roisef,1)
      my_His.Fill(mu,n_roisef,1)
     

   if cg1.IsPassed() :
      n_l1_jet_15rois =0
      pvtn =0
      mu =0
      for i in range(eventTree.trig_L1_jet_n):
         if "J15" in eventTree.trig_L1_jet_thrNames[i]: n_l1_jet_15rois+=1
      pvtn = eventTree.vxp_n
      mu = eventTree.averageIntPerXing
      R_pvtx15.Fill(pvtn,n_l1_jet_15rois,1)
      my_His15.Fill(mu,n_l1_jet_15rois,1)


   if cg2.IsPassed() :
      n_l1_jet_20rois =0
      pvtn =0
      mu =0
      for i in range(eventTree.trig_L1_jet_n):
         if "J20" in eventTree.trig_L1_jet_thrNames[i]: n_l1_jet_20rois+=1
      pvtn = eventTree.vxp_n
      mu = eventTree.averageIntPerXing
      R_pvtx20.Fill(pvtn,n_l1_jet_20rois,1)
      my_His20.Fill(mu,n_l1_jet_20rois,1)



f = TFile("out1.root", "RECREATE")

f.mkdir("EF10")
f.cd("EF10")
myHis.Write()
Rpvtx.Write()
f.cd()

f.mkdir("EF15")
f.cd("EF15")
myHis15.Write()
Rpvtx15.Write()
f.cd()

f.mkdir("EF20")
f.cd("EF20")
myHis20.Write()
Rpvtx20.Write()
f.cd()

f.mkdir("Higgs")
f.cd("Higgs")
my_His.Write()
R_pvtx.Write()
my_His15.Write()
R_pvtx15.Write()
my_His20.Write()
R_pvtx20.Write()
f.Write()
f.Close()
   

