           pt = new TPaveText(0.60,0.7, 1,1, "NDC"); // NDC sets coords
           pt->SetFillColor(10); // text is black on white
           pt->SetTextSize(0.04); 
           pt->SetTextAlign(15);
           text = pt->AddText("L1_J5   & 50  < pt <=100 GeV");
           text = pt->AddText("L1_J15  & 100 < pt <=120 GeV");
           text = pt->AddText("L1_30   &     pt > 120 GeV");   text = pt->AddText("AntikT4 & |rapidity| <1");          
           pt->Draw("same");       //to draw your text object
          
