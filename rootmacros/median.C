double Median(const TH1D * h1) {

   int n = h1->GetXaxis()->GetNbins(); 
   std::vector<double>  x(n);
   h1->GetXaxis()->GetCenter( &x[0] );
   const double * y = h1->GetArray();
   // exclude underflow/overflows from bin content array y
   return TMath::Median(n, &x[0], &y[1]);
}
