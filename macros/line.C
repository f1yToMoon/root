void line(const char* a, const char* q, const char* w) {
  TFile* f3 = new TFile(a);
  TTree* t;
  f3->GetObject("t",t);
  string o = ":", p = ">>hist";
  string v = q + o + w + p;
  const char *l = v.c_str();
  TCanvas* c2 = new TCanvas("c2", "my 2D plot", 500, 500);
  t->Draw(l, "", "");
  TF1 *f1 = new TF1("f1","[0]+[1]*x",0,1);
  f1->SetParameters(0.,1.);
  f1->SetLineColor(kRed);
  hist->Fit(f1);
  hist->Draw();
  f1->Draw("same");
  c2->SaveAs("hist.png");
}
