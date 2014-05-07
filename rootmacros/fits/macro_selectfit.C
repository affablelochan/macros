void macro_selectfit()
{
	gROOT->SetStyle("Plain");
	// Read pTratios.root file and load all the histograms therein //
	TFile f("D:\\Kiran\\Academic Archive\\PhD Stuff\\Research\\dphi-2\\pTratios.root");
	
	TH1F *r025_015y1_dphitot = (TH1F*)f.Get("r025_015y1_dphitot");
	TH1F *r025_015y1_dphi1 = (TH1F*)f.Get("r025_015y1_dphi1");
	TH1F *r025_015y1_dphi2 = (TH1F*)f.Get("r025_015y1_dphi2");
	TH1F *r025_015y1_dphi3 = (TH1F*)f.Get("r025_015y1_dphi3");
	TH1F *r045_025y1_dphitot = (TH1F*)f.Get("r045_025y1_dphitot");
	TH1F *r045_025y1_dphi1 = (TH1F*)f.Get("r045_025y1_dphi1");
	TH1F *r045_025y1_dphi2 = (TH1F*)f.Get("r045_025y1_dphi2");
	TH1F *r045_025y1_dphi3 = (TH1F*)f.Get("r045_025y1_dphi3");
	TH1F *r065_045y1_dphitot = (TH1F*)f.Get("r065_045y1_dphitot");
	TH1F *r065_045y1_dphi1 = (TH1F*)f.Get("r065_045y1_dphi1");
	TH1F *r065_045y1_dphi2 = (TH1F*)f.Get("r065_045y1_dphi2");
	TH1F *r065_045y1_dphi3 = (TH1F*)f.Get("r065_045y1_dphi3");
	TH1F *r095_065y1_dphitot = (TH1F*)f.Get("r095_065y1_dphitot");
	TH1F *r095_065y1_dphi1 = (TH1F*)f.Get("r095_065y1_dphi1");
	TH1F *r095_065y1_dphi2 = (TH1F*)f.Get("r095_065y1_dphi2");
	TH1F *r095_065y1_dphi3 = (TH1F*)f.Get("r095_065y1_dphi3");
	TH1F *r125_095y1_dphitot = (TH1F*)f.Get("r125_095y1_dphitot");
	TH1F *r125_095y1_dphi1 = (TH1F*)f.Get("r125_095y1_dphi1");
	TH1F *r125_095y1_dphi2 = (TH1F*)f.Get("r125_095y1_dphi2");
	TH1F *r125_095y1_dphi3 = (TH1F*)f.Get("r125_095y1_dphi3");
	
	TH1F *r025_015y2_dphitot = (TH1F*)f.Get("r025_015y2_dphitot");
	TH1F *r025_015y2_dphi1 = (TH1F*)f.Get("r025_015y2_dphi1");
	TH1F *r025_015y2_dphi2 = (TH1F*)f.Get("r025_015y2_dphi2");
	TH1F *r025_015y2_dphi3 = (TH1F*)f.Get("r025_015y2_dphi3");
	TH1F *r045_025y2_dphitot = (TH1F*)f.Get("r045_025y2_dphitot");
	TH1F *r045_025y2_dphi1 = (TH1F*)f.Get("r045_025y2_dphi1");
	TH1F *r045_025y2_dphi2 = (TH1F*)f.Get("r045_025y2_dphi2");
	TH1F *r045_025y2_dphi3 = (TH1F*)f.Get("r045_025y2_dphi3");
	TH1F *r065_045y2_dphitot = (TH1F*)f.Get("r065_045y2_dphitot");
	TH1F *r065_045y2_dphi1 = (TH1F*)f.Get("r065_045y2_dphi1");
	TH1F *r065_045y2_dphi2 = (TH1F*)f.Get("r065_045y2_dphi2");
	TH1F *r065_045y2_dphi3 = (TH1F*)f.Get("r065_045y2_dphi3");
	TH1F *r095_065y2_dphitot = (TH1F*)f.Get("r095_065y2_dphitot");
	TH1F *r095_065y2_dphi1 = (TH1F*)f.Get("r095_065y2_dphi1");
	TH1F *r095_065y2_dphi2 = (TH1F*)f.Get("r095_065y2_dphi2");
	TH1F *r095_065y2_dphi3 = (TH1F*)f.Get("r095_065y2_dphi3");
	TH1F *r125_095y2_dphitot = (TH1F*)f.Get("r125_095y2_dphitot");
	TH1F *r125_095y2_dphi1 = (TH1F*)f.Get("r125_095y2_dphi1");
	TH1F *r125_095y2_dphi2 = (TH1F*)f.Get("r125_095y2_dphi2");
	TH1F *r125_095y2_dphi3 = (TH1F*)f.Get("r125_095y2_dphi3");
	
	TH1F *r025_015y3_dphitot = (TH1F*)f.Get("r025_015y3_dphitot");
	TH1F *r025_015y3_dphi1 = (TH1F*)f.Get("r025_015y3_dphi1");
	TH1F *r025_015y3_dphi2 = (TH1F*)f.Get("r025_015y3_dphi2");
	TH1F *r025_015y3_dphi3 = (TH1F*)f.Get("r025_015y3_dphi3");
	TH1F *r045_025y3_dphitot = (TH1F*)f.Get("r045_025y3_dphitot");
	TH1F *r045_025y3_dphi1 = (TH1F*)f.Get("r045_025y3_dphi1");
	TH1F *r045_025y3_dphi2 = (TH1F*)f.Get("r045_025y3_dphi2");
	TH1F *r045_025y3_dphi3 = (TH1F*)f.Get("r045_025y3_dphi3");
	TH1F *r065_045y3_dphitot = (TH1F*)f.Get("r065_045y3_dphitot");
	TH1F *r065_045y3_dphi1 = (TH1F*)f.Get("r065_045y3_dphi1");
	TH1F *r065_045y3_dphi2 = (TH1F*)f.Get("r065_045y3_dphi2");
	TH1F *r065_045y3_dphi3 = (TH1F*)f.Get("r065_045y3_dphi3");
	TH1F *r095_065y3_dphitot = (TH1F*)f.Get("r095_065y3_dphitot");
	TH1F *r095_065y3_dphi1 = (TH1F*)f.Get("r095_065y3_dphi1");
	TH1F *r095_065y3_dphi2 = (TH1F*)f.Get("r095_065y3_dphi2");
	TH1F *r095_065y3_dphi3 = (TH1F*)f.Get("r095_065y3_dphi3");
	TH1F *r125_095y3_dphitot = (TH1F*)f.Get("r125_095y3_dphitot");
	TH1F *r125_095y3_dphi1 = (TH1F*)f.Get("r125_095y3_dphi1");
	TH1F *r125_095y3_dphi2 = (TH1F*)f.Get("r125_095y3_dphi2");
	TH1F *r125_095y3_dphi3 = (TH1F*)f.Get("r125_095y3_dphi3");
	
    fithisto(r025_015y1_dphitot, "r025_015y1_dphitot");
    fithisto(r025_015y1_dphi1, "r025_015y1_dphi1");
    fithisto(r025_015y1_dphi2, "r025_015y1_dphi2");
    fithisto(r025_015y1_dphi3, "r025_015y1_dphi3");
    fithisto(r045_025y1_dphitot, "r045_025y1_dphitot");
    fithisto(r045_025y1_dphi1, "r045_025y1_dphi1");
	fithisto(r045_025y1_dphi2, "r045_025y1_dphi2");
    fithisto(r045_025y1_dphi3, "r045_025y1_dphi3");
    fithisto(r065_045y1_dphitot, "r065_045y1_dphitot");
    fithisto(r065_045y1_dphi1, "r065_045y1_dphi1");
    fithisto(r065_045y1_dphi2, "r065_045y1_dphi2");
    fithisto(r065_045y1_dphi3, "r065_045y1_dphi3");
    fithisto(r095_065y1_dphitot, "r095_065y1_dphitot");
    fithisto(r095_065y1_dphi1, "r095_065y1_dphi1");
    fithisto(r095_065y1_dphi2, "r095_065y1_dphi2");
    fithisto(r095_065y1_dphi3, "r095_065y1_dphi3");
    fithisto(r125_095y1_dphitot, "r125_095y1_dphitot");
    fithisto(r125_095y1_dphi1, "r125_095y1_dphi1");
    fithisto(r125_095y1_dphi2, "r125_095y1_dphi2");
    fithisto(r125_095y1_dphi3, "r125_095y1_dphi3");

    fithisto(r025_015y2_dphitot, "r025_015y2_dphitot");
    fithisto(r025_015y2_dphi1, "r025_015y2_dphi1");
    fithisto(r025_015y2_dphi2, "r025_015y2_dphi2");
    fithisto(r025_015y2_dphi3, "r025_015y2_dphi3");
    fithisto(r045_025y2_dphitot, "r045_025y2_dphitot");
    fithisto(r045_025y2_dphi1, "r045_025y2_dphi1");
    fithisto(r045_025y2_dphi2, "r045_025y2_dphi2");
    fithisto(r045_025y2_dphi3, "r045_025y2_dphi3");
    fithisto(r065_045y2_dphitot, "r065_045y2_dphitot");
    fithisto(r065_045y2_dphi1, "r065_045y2_dphi1");
    fithisto(r065_045y2_dphi2, "r065_045y2_dphi2");
    fithisto(r065_045y2_dphi3, "r065_045y2_dphi3");
    fithisto(r095_065y2_dphitot, "r095_065y2_dphitot");
    fithisto(r095_065y2_dphi1, "r095_065y2_dphi1");
    fithisto(r095_065y2_dphi2, "r095_065y2_dphi2");
    fithisto(r095_065y2_dphi3, "r095_065y2_dphi3");
    fithisto(r125_095y2_dphitot, "r125_095y2_dphitot");
    fithisto(r125_095y2_dphi1, "r125_095y2_dphi1");
    fithisto(r125_095y2_dphi2, "r125_095y2_dphi2");
    fithisto(r125_095y2_dphi3, "r125_095y2_dphi3");

    fithisto(r025_015y3_dphitot, "r025_015y3_dphitot");
    fithisto(r025_015y3_dphi1, "r025_015y3_dphi1");
    fithisto(r025_015y3_dphi2, "r025_015y3_dphi2");
    fithisto(r025_015y3_dphi3, "r025_015y3_dphi3");
    fithisto(r045_025y3_dphitot, "r045_025y3_dphitot");
    fithisto(r045_025y3_dphi1, "r045_025y3_dphi1");
    fithisto(r045_025y3_dphi2, "r045_025y3_dphi2");
    fithisto(r045_025y3_dphi3, "r045_025y3_dphi3");
    fithisto(r065_045y3_dphitot, "r065_045y3_dphitot");
    fithisto(r065_045y3_dphi1, "r065_045y3_dphi1");
    fithisto(r065_045y3_dphi2, "r065_045y3_dphi2");
    fithisto(r065_045y3_dphi3, "r065_045y3_dphi3");
    fithisto(r095_065y3_dphitot, "r095_065y3_dphitot");
    fithisto(r095_065y3_dphi1, "r095_065y3_dphi1");
    fithisto(r095_065y3_dphi2, "r095_065y3_dphi2");
    fithisto(r095_065y3_dphi3, "r095_065y3_dphi3");
    fithisto(r125_095y3_dphitot, "r125_095y3_dphitot");
    fithisto(r125_095y3_dphi1, "r125_095y3_dphi1");
    fithisto(r125_095y3_dphi2, "r125_095y3_dphi2");
    fithisto(r125_095y3_dphi3, "r125_095y3_dphi3");
}

// Fitting value used from Mikko's D0 Note 5549 //
Double_t fitfunc4p(Double_t *v, Double_t *par) 
{
    Double_t logpT = TMath::Log(v[0]);
    Double_t fitval = 0.5+ 0.5*(TMath::Erf((v[0]-par[0])/(1+TMath::Abs(par[1]+par[2]*logpT+par[3]*logpT*logpT))));
    return fitval;
}

Double_t fitfunc2p(Double_t *v, Double_t *par) 
{
    Double_t fitval = 0.5+ 0.5*(TMath::Erf((v[0]-par[0])/(1+TMath::Abs(par[1]))));
    return fitval;
}

// Actual fitting function //
void fithisto (TH1F *ratiohisto, string histname) 
{
    int binLoc;
    double slope, y1, y2, x1, x2;

	gROOT->SetStyle("Plain");
    // Setup for fit histograms //
    TFile *pTratiofitPlots = new TFile ("D:\\Kiran\\Academic Archive\\PhD Stuff\\Research\\dphi-2\\pTratiofithistos.root", "UPDATE");
    TCanvas *cnvFits = new TCanvas();
	
    for (int i = 1; i <= ratiohisto->GetXaxis()->GetNbins(); i++) {
		if (ratiohisto->GetBinContent(i) > 0.95) {
			y2 = ratiohisto->GetBinContent(i+2);
			y1 = ratiohisto->GetBinContent(i-1);
			x2 = ratiohisto->GetBinCenter(i+2);
			x1 = ratiohisto->GetBinCenter(i-1);
			slope = (y2-y1)/(x2-x1);
			binLoc = i;
			break;
		}
    }
	
    // Setting axes ranges for the efficiency curves //
	Int_t xmin, xmax;
	string ratioNr = histname.substr(1,3);
	cout << ratioNr;
	if (ratioNr == "025") {	xmin = 20, xmax = 130; }
	if (ratioNr == "045") {	xmin = 40, xmax = 170; }
	if (ratioNr == "065") {	xmin = 70, xmax = 190; }
	if (ratioNr == "095") {	xmin = 100, xmax = 220;	}
	if (ratioNr == "125") {	xmin = 130, xmax = 270;	}
	
	ratiohisto->SetAxisRange(xmin, xmax);
	ratiohisto->SetMaximum(1.4);
    ratiohisto->SetMinimum(0.5);

	// Setting fit limits //
    double minFit, maxFit;
    for (int i = binLoc; i >= 0; i--) {
		if (ratiohisto->GetBinContent(i) < 0.5) {
			minFit = ratiohisto->GetBinLowEdge(i) + ratiohisto->GetBinWidth(i);
			break;
		}
    }

	maxFit = ratiohisto->GetBinLowEdge(binLoc+11) + ratiohisto->GetBinWidth(binLoc+11);

	if (histname == "r025_015y1_dphitot" || histname == "r025_015y1_dphi1" || histname == "r025_015y1_dphi2") {
		minFit = ratiohisto->GetBinLowEdge(i-1) + ratiohisto->GetBinWidth(i-1);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+11) + ratiohisto->GetBinWidth(binLoc+11);
	}
	if (histname == "r045_025y1_dphitot" || histname == "r045_025y1_dphi1" || histname == "r065_045y3_dphitot") {
		minFit = ratiohisto->GetBinLowEdge(i) + ratiohisto->GetBinWidth(i);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+13) + ratiohisto->GetBinWidth(binLoc+13);
	}
	if (histname == "r065_045y1_dphi1") {
		minFit = ratiohisto->GetBinLowEdge(i+1) + ratiohisto->GetBinWidth(i+1);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+10) + ratiohisto->GetBinWidth(binLoc+10);
	}
	if (histname == "r065_045y1_dphi2") {
		minFit = ratiohisto->GetBinLowEdge(i+1) + ratiohisto->GetBinWidth(i+1);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+13) + ratiohisto->GetBinWidth(binLoc+13);
	}
	if (histname == "r125_095y3_dphi1") {
		minFit = ratiohisto->GetBinLowEdge(i+1) + ratiohisto->GetBinWidth(i+1);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+15) + ratiohisto->GetBinWidth(binLoc+15);
	}
	if (histname == "r065_045y2_dphi3") {
		minFit = ratiohisto->GetBinLowEdge(i-1) + ratiohisto->GetBinWidth(i-1);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+7) + ratiohisto->GetBinWidth(binLoc+7);
	}
	if (histname == "r095_065y1_dphitot" || histname == "r025_015y2_dphi1") {
		minFit = ratiohisto->GetBinLowEdge(i) + ratiohisto->GetBinWidth(i);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+8) + ratiohisto->GetBinWidth(binLoc+8);
	}
	if (histname == "r095_065y1_dphi2" || histname == "r095_065y2_dphitot" || histname == "r095_065y2_dphi2" ||
		histname == "r065_045y2_dphi1" || histname == "r125_095y3_dphi2") {
		minFit = ratiohisto->GetBinLowEdge(i) + ratiohisto->GetBinWidth(i);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+12) + ratiohisto->GetBinWidth(binLoc+12);
	}
	if (histname == "r095_065y1_dphi1") {
		minFit = ratiohisto->GetBinLowEdge(i) + ratiohisto->GetBinWidth(i);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+11) + ratiohisto->GetBinWidth(binLoc+11);
	}
	if (histname == "r095_065y2_dphi3" || histname == "r025_015y2_dphi3") {
		minFit = ratiohisto->GetBinLowEdge(i) + ratiohisto->GetBinWidth(i);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+7) + ratiohisto->GetBinWidth(binLoc+7);
	}
	if (histname == "r025_015y3_dphitot") {
		minFit = ratiohisto->GetBinLowEdge(i) + ratiohisto->GetBinWidth(i);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+5) + ratiohisto->GetBinWidth(binLoc+5);
	}
	if (histname == "r125_095y3_dphi3") {
		minFit = ratiohisto->GetBinLowEdge(i) + ratiohisto->GetBinWidth(i);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+4) + ratiohisto->GetBinWidth(binLoc+4);
	}	
	if (histname == "r025_015y3_dphi1") {
		minFit = ratiohisto->GetBinLowEdge(i) + ratiohisto->GetBinWidth(i);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+2) + ratiohisto->GetBinWidth(binLoc+2);
	}
	if (histname == "r125_095y2_dphitot") {
		minFit = ratiohisto->GetBinLowEdge(i) + ratiohisto->GetBinWidth(i);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+17) + ratiohisto->GetBinWidth(binLoc+17);
	}
	if (histname == "r125_095y2_dphi1") {
		minFit = ratiohisto->GetBinLowEdge(i) + ratiohisto->GetBinWidth(i);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+16) + ratiohisto->GetBinWidth(binLoc+16);
	}
	if (histname == "r125_095y2_dphi3") {
		minFit = ratiohisto->GetBinLowEdge(i) + ratiohisto->GetBinWidth(i);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+10) + ratiohisto->GetBinWidth(binLoc+10);
	}
	if (histname == "r045_025y2_dphi3") {
		minFit = ratiohisto->GetBinLowEdge(i-1) + ratiohisto->GetBinWidth(i-1);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+9) + ratiohisto->GetBinWidth(binLoc+9);
	}
	if (histname == "r045_025y3_dphi2" || histname == "r045_025y3_dphi3" || histname == "r065_045y3_dphi2"
		|| histname == "r065_045y3_dphi3") {
		minFit = ratiohisto->GetBinLowEdge(i-1) + ratiohisto->GetBinWidth(i-1);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+10) + ratiohisto->GetBinWidth(binLoc+10);
	}
	if (histname == "r095_065y3_dphitot") {
		minFit = ratiohisto->GetBinLowEdge(i) + ratiohisto->GetBinWidth(i);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+3) + ratiohisto->GetBinWidth(binLoc+3);
	}
	if (histname == "r095_065y3_dphi3") {
		minFit = ratiohisto->GetBinLowEdge(i-1) + ratiohisto->GetBinWidth(i-1);
		maxFit = ratiohisto->GetBinLowEdge(binLoc+11) + ratiohisto->GetBinWidth(binLoc+11);
	}
	// Canvas options //
	gStyle->SetOptStat(11);
    gStyle->SetOptFit(1);

    // Calculating parameters for fitting value selectively for each histogram //
    TF1 *fitFunc4param = new TF1("fitfunc4p", fitfunc4p, minFit, maxFit, 4);
    TF1 *fitFunc2param = new TF1("fitfunc2p", fitfunc2p, minFit, maxFit, 2);

	if (histname == "r025_015y1_dphi2" || histname == "r025_015y1_dphi3" || histname == "r025_015y2_dphi2"
		|| histname == "r045_025y1_dphi3" || histname == "r065_045y1_dphi2" || histname == "r065_045y1_dphi3"
		|| histname == "r095_065y1_dphi1" || histname == "r045_025y1_dphi2" || histname == "r025_015y2_dphi3"
		|| histname == "r025_015y2_dphi1" || histname == "r045_025y2_dphi1" || histname == "r045_025y2_dphi2"
		|| histname == "r025_015y2_dphitot") {
		fitFunc2param->SetParameter(0, 12.0);
		fitFunc2param->SetParameter(1, 3.0);
		fitFunc2param->SetParNames("mu", "sigma0");
		ratiohisto->Fit("fitfunc2p", "RQ");
	}
	else if (histname == "r125_095y1_dphi1" || histname == "r095_065y3_dphi2") {
		fitFunc4param->SetParNames("mu", "sigma0", "sigma1", "sigma2");
		fitFunc4param->SetParameter(0, 17.0);
		fitFunc4param->SetParameter(1, -2.0);
		fitFunc4param->SetParameter(2, -2.0*slope);
		fitFunc4param->SetParameter(3, -7.0);
		ratiohisto->Fit("fitfunc4p", "RQ");
	}
	else if (histname == "r125_095y1_dphi2") {
		fitFunc4param->SetParNames("mu", "sigma0", "sigma1", "sigma2");
		fitFunc4param->SetParameter(0, 15.0);
		fitFunc4param->SetParameter(1, 15.0);
		fitFunc4param->SetParameter(2, -2.0*slope);
		fitFunc4param->SetParameter(3, -7.0);
		ratiohisto->Fit("fitfunc4p", "RQ");
	}
	else if (histname == "r125_095y1_dphi3") {
		fitFunc4param->SetParNames("mu", "sigma0", "sigma1", "sigma2");
		fitFunc4param->SetParameter(0, -15.0);
		fitFunc4param->SetParameter(1, 15.0);
		fitFunc4param->SetParameter(2, -2.0*slope);
		fitFunc4param->SetParameter(3, 2.0);
		ratiohisto->Fit("fitfunc4p", "RQ");
	}
	else if (histname == "r045_025y2_dphi3") {
		fitFunc4param->SetParNames("mu", "sigma0", "sigma1", "sigma2");
		fitFunc4param->SetParameter(0, 32.0);
		fitFunc4param->SetParameter(1, 0.5);
		fitFunc4param->SetParameter(2, -0.5*slope);
		fitFunc4param->SetParameter(3, 0.04);
		ratiohisto->Fit("fitfunc4p", "RQ");
	}
	else if (histname == "r025_015y3_dphitot" ||  histname == "r025_015y3_dphi1" || histname == "r025_015y3_dphi2" 
			||	histname == "r025_015y3_dphi3" || histname == "r095_065y1_dphi2" || histname == "r095_065y1_dphi3") {
		fitFunc2param->SetParameter(0, 50.0);
		fitFunc2param->SetParameter(1, -15.0);
		fitFunc2param->SetParNames("mu", "sigma0");
		ratiohisto->Fit("fitfunc2p", "RQ");
	}
	else if (histname == "r095_065y3_dphi1") {
		fitFunc4param->SetParNames("mu", "sigma0", "sigma1", "sigma2");
		fitFunc4param->SetParameter(0, 15.0);
		fitFunc4param->SetParameter(1, -2.0);
		fitFunc4param->SetParameter(2, -2.0*slope);
		fitFunc4param->SetParameter(3, -5.0);
		ratiohisto->Fit("fitfunc4p", "RQ");
	}
	else if (histname == "r125_095y3_dphitot") {
		fitFunc2param->SetParameter(0, -25.0);
		fitFunc2param->SetParameter(1, 5.0);
		fitFunc2param->SetParNames("mu", "sigma0");
		ratiohisto->Fit("fitfunc2p", "RQ");
	}
	else if (histname == "r125_095y3_dphi3") {
		fitFunc4param->SetParNames("mu", "sigma0", "sigma1", "sigma2");
		fitFunc4param->SetParameter(0, 15.0);
		fitFunc4param->SetParameter(1, -3.0);
		fitFunc4param->SetParameter(2, -2.0*slope);
		fitFunc4param->SetParameter(3, -5.0);
		ratiohisto->Fit("fitfunc4p", "RQ");
	}
	else { 
		fitFunc4param->SetParNames("mu", "sigma0", "sigma1", "sigma2");
		fitFunc4param->SetParameter(0, 15.0);
		fitFunc4param->SetParameter(1, -2.0);
		fitFunc4param->SetParameter(2, -2.0*slope);
		fitFunc4param->SetParameter(3, -5.0);
		ratiohisto->Fit("fitfunc4p", "RQ");
	}
	
		// Draw horizontal lines at 98% and 100% efficiency //
    TLine *horizline1 = new TLine();
    horizline1->SetLineStyle(3);
    horizline1->SetLineColor(kRed);
    horizline1->SetLineWidth(2);
    horizline1->DrawLine(xmin, 1.00, xmax+5, 1.00);
    TLine *horizline2 = new TLine();
    horizline2->SetLineStyle(3);
    horizline2->SetLineColor(kRed);
    horizline2->SetLineWidth(2);
    horizline2->DrawLine(xmin, 0.80, xmax+5, 0.80);
    TLine *horizline3 = new TLine();
    horizline3->SetLineStyle(3);
    horizline3->SetLineColor(kRed);
    horizline3->SetLineWidth(2);
    horizline3->DrawLine(xmin, 0.97, xmax+5, 0.97);
	
	// Draw vertical lines indicating pT range //
	TLine *vertline1 = new TLine();
	TLine *vertline2 = new TLine();
	vertline1->SetLineStyle(3);
	vertline1->SetLineColor(kBlue);
	vertline1->SetLineWidth(2);
	vertline2->SetLineStyle(3);
	vertline2->SetLineColor(kBlue);
	vertline2->SetLineWidth(2);
	if (ratioNr == "025") {
		vertline1->DrawLine(80, 0.5, 80, 1.4);
		vertline2->DrawLine(80, 0.5, 80, 1.4);
	}
	if (ratioNr == "045") {
		vertline1->DrawLine(80, 0.5, 80, 1.4);
		vertline2->DrawLine(120, 0.5, 120, 1.4);
	}
	if (ratioNr == "065") {
		vertline1->DrawLine(120, 0.5, 120, 1.4);
		vertline2->DrawLine(195, 0.5, 195, 1.4);
	}
	if (ratioNr == "095") {
		vertline1->DrawLine(195, 0.5, 195, 1.4);
		vertline2->DrawLine(220, 0.5, 220, 1.4);
	}
	if (ratioNr == "125") {
		vertline1->DrawLine(220, 0.5, 220, 1.4);
		vertline2->DrawLine(220, 0.5, 220, 1.4);
	}

    cout << "Writing ratiohisto now for " << histname << "..." << endl;
    ratiohisto->Write(); // Write histograms for fits //
	
	cnvFits->SaveAs(("D:\\Kiran\\Academic Archive\\PhD Stuff\\Research\\dphi-2\\Fit-"+histname+".eps").c_str());
	cnvFits->SaveAs(("D:\\Kiran\\Academic Archive\\PhD Stuff\\Research\\dphi-2\\Fit-"+histname+".pdf").c_str());
	
    // Cleaning up fitting function pointers //
    delete fitFunc4param;
	delete fitFunc2param;
	delete horizline1;
	delete horizline2;
	delete horizline3;
	delete vertline1;
	delete vertline2;
    delete ratiohisto;
    pTratiofitPlots->Close();
    cnvFits->Close();
}