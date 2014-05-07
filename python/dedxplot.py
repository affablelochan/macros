def main():
    import sys
    import user
    import ROOT
    
    ROOT.gROOT.ProcessLine('.L Loader.C+')
    # ROOT.gROOT.LoadMacro("Loader.C+")
    
    # output
    outF = ROOT.TFile('dedxplots.root','recreate')    
    
    # Histograms
    h2fDeDxTile = ROOT.TProfile("h2fDeDxTile", "h2fDeDxT", 100, 0, 1000)
    h2fDeDxPixel = ROOT.TProfile("h2fDeDxPixel", "h2fDeDxPixel", 100, 0, 1000)
    # input
    chain = ROOT.TChain("CollectionTree") 
    inputFiles = sys.argv[1].split(',')
    for inputFile in inputFiles:
        print "add %s" % inputFile
        chain.AddFile(inputFile)

    # event loop
    print chain.Print()    
    chain.SetBranchStatus("*", 1)
    for i in xrange(chain.GetEntries()):
        chain.GetEntry(i)
        for trk in xrange(chain.Trk_N):
            if chain.Trk_p_T[trk] > 20000:
                h2fDeDxTile.Fill(chain.Trk_p[trk]/1000, chain.Trk_dEdx[trk][8])
                if chain.Trk_dEdx[trk][0] > 0: h2fDeDxPixel.Fill(chain.Trk_p[trk]/1000, chain.Trk_dEdx[trk][0])
                if i % 100 == 0:
                    print chain.Trk_p[trk]
                    print [val for val in chain.Trk_dEdx[trk]]

    

    outF.Write()
    # Post production stuff
    # h2fDeDxTile.Draw()
    
    # print getattr(ROOT,'vector<vector<int> >')
    # print getattr(ROOT,'vector<vector<float> >')
    # raw_input("done[enter]")

if __name__ == "__main__":
    main()
