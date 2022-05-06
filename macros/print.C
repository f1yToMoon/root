void print(const char* a, const char* q, const char* w) {
    TFile* f1 = new TFile(a);
    TTree* t;
    f1->GetObject("t",t);
    string o = ":", p = ">>hist";
    string v = q + o + w + p;
    const char *l = v.c_str();
    TCanvas* c2 = new TCanvas("c2", "my 2D plot", 500, 500);
    t->Draw(l, "", "");
 }

