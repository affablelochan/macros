//If you need more space to right of canvas do following 
      gPad->SetRightMargin( 0.15 );


   gPad->Update();

   TPaletteAxis *palette = (TPaletteAxis*)h1->GetListOfFunctions()->FindObject("palette");
   palette->SetLabelSize(0.05); 
  palette->SetX1NDC(0.86);
  palette->SetX2NDC(0.90); 
   //palette->SetY2NDC(0.9); //to move palette upper limit 
   palette->GetAxis()->SetMaxDigits(3); 
   gPad->Modified();
