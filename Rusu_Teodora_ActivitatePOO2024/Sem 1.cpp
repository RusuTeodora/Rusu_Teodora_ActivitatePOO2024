//#include<iostream>
//
//using namespace std;
//
//struct Ciocolata {
//	int gramaj;
//	float pret;
//	string nume;
//	bool esteAmaruie;
//};
//
////tip_returnat nume_functie([params]) {}
//
//void afisareCiocolata(Ciocolata c) {
//	cout << "Nume ciocolata" << c.nume << endl;
//	cout << "Pret" << c.pret << endl;
//	cout << "Gramaj" << c.gramaj << endl;
//	cout << "Este amaruie" << (c.esteAmaruie ? "DA" : "NU") << endl;
//
//}
//
//void modificaPret(Ciocolata* c, float pretNou) {
//	c->pret = pretNou;
//}
//
//void modificaPretReferinta(Ciocolata& c, float pretNou) {
//	c.pret = pretNou;
//
//}
//
//Ciocolata initializareCiocolata(int gramaj, float pret, string nume, bool amaruie) {
//	Ciocolata c;
//	c.gramaj = gramaj;
//	c.pret = pret;
//	c.nume = nume;
//	c.esteAmaruie = amaruie;
//
//	return c;
//}
//
//int main() {
//	/*Ciocolata c1;//declarare
//	c1.gramaj = 50;//initializare
//	c1.pret = 7;
//	c1.nume = "Milka"; //'a'-caracter "a"-string(sir de caractere)
//	c1.esteAmaruie = false;
//
//	cout << "Nume ciocolata:" << c1.nume << endl;
//	cout << "Pret:" << c1.pret << endl;
//	cout << "Gramaj:" << c1.gramaj << endl;
//	cout << "Este amaruie:" << c1.esteAmaruie << endl;
//	afisareCiocolata(c1);*/
//	Ciocolata c1;
//	c1 = initializareCiocolata(50, 7, "Milka", 0);
//	afisareCiocolata(c1);
//
//	Ciocolata c2;
//	cout << "Introduceti numele:";
//	cin >> c2.nume;
//	cout << "Introduceti gramajul:";
//	cin >> c2.gramaj;
//	cout << "Introduceti pretul:";
//	cin >> c2.pret;
//	cout << "Este amaruie:";
//	cin >> c2.gramaj;
//	afisareCiocolata(c2);
//	modificaPret(&c2, 40);
//	modificaPretReferinta(c2, 70);
//	afisareCiocolata(c2);
//}