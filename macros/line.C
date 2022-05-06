void line(const char* a, const char* q, const char* w)
{
   TFile* f1 = new TFile(a);
   TTree* t;
   f1->GetObject("t",t);
   string o = ":", p = ">>h2()";
   string v = q + o + w + p;
   const char *l = v.c_str();
   t->Draw(l, "", "goff");
   
   TCanvas *c1 = new TCanvas("c1","show profile",600,900);
   c1->Divide(1,2);
   c1->cd(1);
   h2->Draw();
   c1->cd(2);
 
   TProfile *prof = h2->ProfileX();
   prof->Fit("pol1");

}
