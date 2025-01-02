//#include<iostream>
//
//using namespace std;
//
//class Palton {
//public:
//	string culoare;
//	bool areNasturi;
//    string marime;
//    string material;
//    int nrPaltoane;
//    float* pret;
//    const string producator; 
//    static int pretMinimPaloane;
//
//public:
//
//    Palton():producator("Vivo collection") {
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
//    Palton(string culoare):producator("Vivo collection") {
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
//    Pantof() :pretMinPantofi(10){
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
//    Pantof(string culoare,float* pret) :pretMinPantofi(10) {
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
//        this->firma = new char[strlen(firma)+1];
//        strcpy_s(this->firma, strlen(firma) + 1, firma);
//    }
//
//    Camasa(int nrCamasi) :pretMinCamasa(70) {
//        
//        this->nrCamasi = nrCamasi;
//       
//    }
//
//    Camasa(string culoare, string marime,int nrCamasi,char*firma) :pretMinCamasa(70) {
//        this->culoare = culoare;
//        this->marime = marime;
//        this->nrCamasi = nrCamasi;
//        if(strlen(firma)+1>2){
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
//    Camasa c;
//    Camasa(45);
//    char* firma=new char[strlen("mamaliga")+1];
//    strcpy_s(firma, strlen("mamaliga") + 1, "mamaliga");
//    Camasa("alba", "S", 20, firma);
//
//
//}
//
//
