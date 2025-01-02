//#include<iostream>
//
//using namespace std;
//
//class Palton {
//private:
//    string culoare;
//    bool areNasturi;
//    string marime;
//    string material;
//    int nrPaltoane;
//    float* pret;
//    const string producator;
//    static int pretMinimPaloane;
//
//public:
//
//    Palton() :producator("Vivo collection") {
//        this->culoare = "Verde";
//        this->areNasturi = true;
//        this->marime = "S";
//        this->material = "Lana";
//        this->nrPaltoane = 0;
//        this->pret = new float[nrPaltoane];
//        for (int i = 0; i < nrPaltoane; i++) {
//            this->pret[i] = 100 + i;
//        }
//
//
//    }
//
//    Palton(string culoare) :producator("Vivo collection") {
//        this->culoare = culoare;
//    }
//
//    Palton(string culoare, int nrPaltoane) :producator("Vivo collection") {
//        this->culoare = culoare;
//        this->nrPaltoane = nrPaltoane;
//    }
//
//    Palton(bool areNasturi, int nrPaltoane, float* pret) :producator("Vivo collection") {
//        this->areNasturi = areNasturi;
//        this->nrPaltoane = nrPaltoane;
//        if (this->pret) {
//            delete[]this->pret;
//        }
//        this->pret = new float[nrPaltoane];
//        for (int i = 0; i < nrPaltoane; i++) {
//            this->pret[i] = pret[i];
//        }
//    }
//
//    ~Palton() {
//        if (pret != nullptr) {
//            delete[] pret;
//        }
//    }
//
//    string getCuloare(){
//        return this->culoare;
//    }
//
//    bool getAreNasturi() {
//        return this->areNasturi;
//    }
//   
//
//    string getMarime() {
//        return this->marime;
//    }
//
//    int getNrPaltoane() {
//        return this->nrPaltoane;
//    }
//
//    float getPret() {
//        if (pret != nullptr) {
//            return *pret;
//        }
//    }
//    
//    string getProducator()const {
//        return this->producator;
//    }
//
//    void setCuloare(string culoare) {
//        if (culoare.length() > 1) {
//            this->culoare = culoare;
//        }
//    }
//
//    void setAreNasturi(bool areNasturi) {
//        if (areNasturi) {
//            this->areNasturi = areNasturi;
//        }
//    }
//
//    void setMarime(string marime) {
//        if (marime.length() > 1) {
//            this->marime = marime;
//        }
//    }
//
//    void setMaterial(string material) {
//        if (material.length() > 1) {
//            this->material = material;
//        }
//    }
//
//    
//    void setNrPaltoane(int nrPaltoane) {
//        if (nrPaltoane > 0) {
//            this->nrPaltoane = nrPaltoane;
//        }
//    }
//   
//    void setPreturi(int nrPaltoane, float* pret){
//        if (nrPaltoane > 0) {
//            this->nrPaltoane = nrPaltoane;
//
//        }
//        if (this->pret != NULL) {
//            delete[]this->pret;
//        }
//        this->pret = new float[nrPaltoane];
//        for (int i = 0; i < this->nrPaltoane; i++) {
//            this->pret[i] = pret[i];
//        }
//    }
//
//    Palton(const Palton& p) :producator(p.producator){
//        this->culoare = p.culoare;
//        this->areNasturi=p.areNasturi;
//        this->marime=p.marime;
//        this->material=p.material;
//        this->nrPaltoane=p.nrPaltoane;
//        if (this->pret != NULL) {
//            delete[]this->pret;
//        }
//        this->pret=new float[p.nrPaltoane];
//        for (int i = 0; i < p.nrPaltoane; i++) {
//            this->pret[i] = p.pret[i];
//        }
//        
//    }
// 
//       
//
//};
//
//int Palton::pretMinimPaloane = 0;
//
//class Pantof {
//public:
//    string culoare;
//    bool suntDinPiele;
//    int marime;
//    int nrPantofi;
//    float* pret;
//    const int pretMinPantofi;
//    static int TVA;
//
//    Pantof() :pretMinPantofi(10) {
//        this->culoare = "Bej";
//        this->suntDinPiele = true;
//        this->marime = 35;
//        this->nrPantofi = 0;
//        this->pret = new float[nrPantofi];
//        for (int i = 0; i < nrPantofi; i++) {
//            this->pret[i] = 100 + i;
//        }
//    }
//
//    Pantof(int marime) :pretMinPantofi(10) {
//
//        this->marime = marime;
//
//    }
//
//    Pantof(string culoare, float* pret) :pretMinPantofi(10) {
//        this->culoare = culoare;
//        this->pret = new float[nrPantofi];
//        for (int i = 0; i < nrPantofi; i++) {
//            this->pret[i] = pret[i];
//        }
//    }
//
//    ~Pantof() {
//        if (pret != nullptr) {
//            delete[] pret;
//        }
//    }
//
//    string getCuloare() {
//        return this->culoare;
//    }
//
//    bool getSuntDinPiele() {
//        return this->suntDinPiele;
//    }
//
//    int getMarime() {
//        return this->marime;
//    }
//
//    int getNrPantofi() {
//        return this->nrPantofi;
//    }
//    
//    
//    float getPret() {
//        if (pret != nullptr) {
//            return *pret;
//        }
//
//
//        
//   }
//    int getPretMinPantofi()const {
//        return this->pretMinPantofi;
//    }
//    
//
//    void setCuloare(string culoare) {
//        if (culoare.length() > 1) {
//            this->culoare = culoare;
//        }
//    }
//
//    void setSuntDinPiele(bool suntDinPiele) {
//        if (suntDinPiele) {
//            this->suntDinPiele = suntDinPiele;
//        }
//    }
//
//    void setMarime(int marime) {
//        if (marime > 0) {
//            this->marime = marime;
//        }
//    }
//
//    void setPret(int nrPantofi, float* pret) {
//        if (nrPantofi > 0) {
//            this->nrPantofi = nrPantofi;
//        }
//
//        if (pret != nullptr) {
//            delete[]this->pret;
//
//        }
//        this->pret = new float[nrPantofi];
//        for (int i = 0; i < nrPantofi; i++) {
//            this->pret[i] = pret[i];
//        }
//
//    }
//
//    Pantof(const Pantof& pantof):pretMinPantofi(pantof.pretMinPantofi) {
//        this->culoare = pantof.culoare;
//        this->suntDinPiele = pantof.suntDinPiele;
//        this->marime = pantof.marime;
//        this->nrPantofi = pantof.nrPantofi;
//        if (pret != nullptr) {
//            delete[]this->pret;
//
//        }
//        if (pantof.pret) {
//            this->pret = new float[pantof.nrPantofi];
//                    for (int i = 0; i < pantof.nrPantofi; i++) {
//                        this->pret[i] = pantof.pret[i];
//                    }
//        }
//        else {
//            this->pret = NULL;
//        }
//        
//
//
//    }
//
//
//
//    
//    
//
//
//
//};
//
//int Pantof::TVA = 19;
//
//class Camasa {
//public:
//    string culoare;
//    string marime;
//    int nrCamasi;
//    char* firma;
//    const int pretMinCamasa;
//    static int Aadaos;
//
//    Camasa() :pretMinCamasa(70) {
//        this->culoare = "Bej";
//        this->marime = "M";
//        this->nrCamasi = 0;
//        this->firma = new char[strlen(firma) + 1];
//        strcpy_s(this->firma, strlen(firma) + 1, firma);
//    }
//
//    Camasa(int nrCamasi) :pretMinCamasa(70) {
//
//        this->nrCamasi = nrCamasi;
//
//    }
//
//    Camasa(string culoare, string marime, int nrCamasi, char* firma) :pretMinCamasa(70) {
//        this->culoare = culoare;
//        this->marime = marime;
//        this->nrCamasi = nrCamasi;
//        if (strlen(firma) + 1 > 2) {
//            delete[]this->firma;
//        }
//        this->firma = new char[10];
//        strcpy_s(this->firma, 10, firma);
//
//    }
//
//    ~Camasa() {
//        if (firma != nullptr) {
//            delete[] firma;
//        }
//    }
//
//    string getCuloare() {
//        return this->culoare;
//    }
//
//    string getMarime() {
//        return this->marime;
//    }
//
//    int getNrCamasi() {
//        return this->nrCamasi;
//    }
//
//    char getFirma() {
//        return *firma;
//    }
//
//    void setCuloare(string culoare) {
//        if (culoare.length() > 0) {
//            this->culoare = culoare;
//        }
//        
//    }
//
//    void setMarime(string marime) {
//        if (marime.length() > 0) {
//            this->marime = marime;
//        }
//        
//    }
//
//    void setNrCamasi(int nrCamasi) {
//        if (nrCamasi > 0) {
//            this->nrCamasi = nrCamasi;
//        }
//        
//    }
//
//    void setFirma(int nrCamasi, char* firma) {
//        if (nrCamasi > 0) {
//            this->nrCamasi = nrCamasi;
//        }
//        if (this->firma) {
//            delete[]this->firma;
//        }
//        this->firma = new char[strlen(firma) + 1];
//        strcpy_s(this->firma, strlen(firma) + 1, firma);
//    }
//
//    Camasa(const Camasa& c) :pretMinCamasa(c.pretMinCamasa){
//        this->culoare = c.culoare;
//        this->marime = c.marime;
//        this->nrCamasi = c.nrCamasi;
//        if (this->firma) {
//            delete[]this->firma;
//        }
//        this->firma = new char[strlen(c.firma) + 1];
//        strcpy_s(c.firma, strlen(firma) + 1, this->firma);
//
//    }
//
//
//};
//
//int main() {
//    Palton p1;
//    Palton("Fucsia");
//    Palton("Gri", 5);
//    float* vector = new float[3] {200, 250, 600};
//    Palton(true, 3, vector);
//    delete[]vector;
//
//    Pantof pantof;
//    Pantof(37);
//    float* vectorPantofi = new float[4] {100, 150, 300, 500};
//    Pantof("Ciclam", vectorPantofi);
//
//     
//
//
//}
//
////cum se face getterul si setterul pt float si char
//
//
