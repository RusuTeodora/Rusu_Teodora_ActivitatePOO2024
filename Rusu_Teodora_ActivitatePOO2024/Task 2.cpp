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
//};
//
//
//
