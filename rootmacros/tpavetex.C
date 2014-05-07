 TPaveText *pt = new TPaveText(0.5714286,0.6676558,0.7261745,0.8827893,"blNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05); 
   TText *text = pt->AddText("0.0 < |#eta| <0.8");
   pt->Draw("same");
