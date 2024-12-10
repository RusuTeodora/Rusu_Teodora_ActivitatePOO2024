//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//struct Bloc {
//    string strada;
//    int numar;
//    int numarScari;
//    int numarApartamente;
//    int anulConstructiei;
//
//    
//    void citire() {
//        cout << "Introduceti strada: ";
//        cin.ignore(); // curățăm buffer-ul înainte de a citi șiruri
//        getline(cin, strada);
//        cout << "Introduceti numarul: ";
//        cin >> numar;
//        cout << "Introduceti numarul de scari: ";
//        cin >> numarScari;
//        cout << "Introduceti numarul de apartamente: ";
//        cin >> numarApartamente;
//        cout << "Introduceti anul constructiei: ";
//        cin >> anulConstructiei;
//    }
//
//    
//    void afisare() const {
//        cout << "Blocul de pe strada " << strada << ", nr. " << numar
//            << ", are " << numarScari << " scari si un numar total de "
//            << numarApartamente << " apartamente. A fost construit in anul "
//            << anulConstructiei << ".\n";
//    }
//};
//
//int main() {
//   
//    Bloc blocuri[10];
//
//    // Citirea datelor pentru fiecare bloc
//    cout << "Introduceti informatiile pentru cele 10 blocuri:\n";
//    for (int i = 0; i < 10; ++i) {
//        cout << "Blocul " << i + 1 << ":\n";
//        blocuri[i].citire();
//    }
//
//    // Afișarea informațiilor pentru fiecare bloc
//    cout << "\nInformatiile despre blocuri:\n";
//    for (int i = 0; i < 10; ++i) {
//        blocuri[i].afisare();
//    }
//
//    return 0;
//}
