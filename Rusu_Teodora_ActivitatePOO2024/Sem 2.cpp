/*#include<iostream>

using namespace std;

struct Farmacie {
	char* nume;
	string adresa;
	int nrMedicamente;
	float* preturi;//alocare dinamica ocupa 4 sau 8 octeti pe stack
};

void afisareFarmacie(Farmacie f) {
	cout << "Nume:"<<f.nume << endl;
	cout << "Adresa:"<<f.adresa << endl;
	cout << "Nr medicamente"<<f.nrMedicamente << endl;
	cout << "Preturi:";
	for (int i = 0; i < f.nrMedicamente; i++) {
		cout << f.preturi[i] << ", ";


	}
	cout << endl;
}

Farmacie citireFarmacie() {
	Farmacie f;
	cout<<"La ce adresa este:";
	cin >> f.adresa;

	cout << "Numele farmaciei:";

	char buffer[100];
	cin >> buffer;
	f.nume = new char[strlen(buffer) + 1];
	strcpy_s(f.nume, strlen(buffer) + 1, buffer);

	cout << "Nr medicamente:";
	f.preturi = new float[f.nrMedicamente];

	cout << "preturi:";
	for (int i=0; i < f.nrMedicamente; i++) {
		cin >> f.preturi[i];

	}

	return f;
}

int main() {
	Farmacie* pointer;//declarare
	pointer = new Farmacie();//alocam spatiu pe heap
	pointer->adresa = "Romana";
	pointer->nume = new char[strlen("Catena")+1];//strlen calc cate caractere are sirul din paranteza
	strcpy_s(pointer->nume, strlen("Catena") + 1, "Catena");

	pointer->nrMedicamente = 5;

	pointer->preturi = new float[pointer->nrMedicamente];

	for (int i = 0; i < pointer->nrMedicamente; i++) {
		pointer->preturi[i] = i + 1;
	}

	afisareFarmacie(*pointer);

	delete pointer;

	int nrFarmacii=3;
	Farmacie* vector;
	vector = new Farmacie[3];

	for (int i = 0; i < nrFarmacii; i++) {
		vector[i] = citireFarmacie();
	}

	for (int i = 0; i < nrFarmacii; i++) {
		afisareFarmacie(vector[i]);
	}

	for (int i = 0; i, nrFarmacii; i++) {
		delete[]vector[i].nume;
		delete[]vector[i].preturi;

	}
	delete[]vector;

	//Farmacie** pointeri;//vector de pointeri la farmacie
	//pointeri = new Farmacie * [4];

	return 0;
}*/