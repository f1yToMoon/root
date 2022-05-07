void check(const char* a) {
    TFile* f1 = new TFile(a);
    TTree* t;
    f1->GetObject("t",t);
    f1->ls();
}   
