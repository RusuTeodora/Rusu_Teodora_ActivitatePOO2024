/*#include<iostream>

using namespace std;

class Cofetarie {
private:

	string nume;//
	int nrAngajati;//
	float* salarii;
	bool esteVegana;
	const int anDeschidere;
	// e constant anul de deschidere
	// nu se schimba, si de-aia nu mai poate fi modificat  
	float adaos;
	static int TVA;

	//construct se pune la public pt a fi accesat din afara 
	// atributele la private

public:

	Cofetarie() :adaos(30), anDeschidere(2024) {
		this->nume = "Delice";
		this->nrAngajati = 0;
		this->esteVegana = true;
		this->salarii = NULL;//SIMBOL PT VAL 0

		//nullptr 


	}

	Cofetarie(string nume, int nrAngajati, bool vegan, int an, float adaos) :anDeschidere(an) {//lista de initializari{
		this->nume = nume;
		this->nrAngajati = nrAngajati;
		this->esteVegana = vegan;
		this->adaos = adaos;
		this->salarii = new float[nrAngajati];
		for (int i = 0; i < nrAngajati; i++) {
			this->salarii[i] = 1000 + i * 1000;
		}


	}

	Cofetarie(const Cofetarie&c) :anDeschidere(c.anDeschidere){
		this->nume = c.nume;
		this->nrAngajati = c.nrAngajati;
		this->salarii = new float[nrAngajati];
		for (int i = 0; i < nrAngajati; i++) {
			this->salarii[i] = c.salarii[i];
		}
		this->esteVegana = c.esteVegana;
		this->adaos = adaos;
	}

	~Cofetarie() {
		if (this->salarii != NULL) {
			delete[]this->salarii;
		}
	}
	string getNume() {
		return this->nume;
	}

	void setNume(string nume) {
		if (nume.length() > 2) {
			this->nume = nume;

		}
			
	}

	int getNrAngajati(){
		return this->nrAngajati;

		}

	void setNrAngajati(int nrAngajati) {
		if (nrAngajati > 0) {
			this->nrAngajati = nrAngajati;
		}
	}

	void setNrAngajati(int nrAngajati, float*salarii) {
		if (nrAngajati > 0) {
			this->nrAngajati = nrAngajati;
			if (this->salarii != NULL) {
				delete[]this->salarii;
			}
			this->salarii = new float[this->nrAngajati];
			for (int i = 0; i < this->nrAngajati; i++) {
				this->salarii[i] = salarii[i];
			}
		}
	}

	float* getSalarii() {
		return this->salarii;
	}

	float getSalariu(int index) {
		if (index >= 0 && index < nrAngajati) {
			return this->salarii[index];
		}
	}

	void afisare() {
		cout << "Nume:" << this->nume << endl;
		cout << "Nr angajati:" << this->nrAngajati << endl;
		cout << "Are produse vegane:" << (this->esteVegana ? "DA" : "NU") << endl;
		cout << "An deschidere:" << this->anDeschidere << endl;
		cout << "Adaos:" << this->adaos << endl;
		cout << "TVA:" << this->Cofetarie::TVA << endl;

	}

	static void modificaTVA(int noulTVA) {
		if (noulTVA > 0)
			Cofetarie::TVA = noulTVA;

	}
	static int calculeazaNrTotalAngajati(int nrCofetarii, Cofetarie* vector) {
		int suma = 0;
		for (int i = 0; i < nrCofetarii; i++) {
			suma = suma + vector[i].nrAngajati;
		}
		return suma;
	}
};

// constructorul creeaza un obiect o singura data
//staticul nu depinde de obiect; nu mai primeste this

int Cofetarie::TVA = 9;

void f(Cofetarie c) {

}

int main() {

	Cofetarie c;
	cout << c.getNume() << endl;
	c.setNume("");
	cout << c.getNume() << endl;
	c.setNume("Alt nume");
	cout << c.getNume() << endl;
	c.setNrAngajati(4, new float [4]{2,6,4,9});//initializare inline

	Cofetarie c2("Minimal", 3, false, 2020, 10);
	cout << c2.getSalarii()[1] << endl;

	cout << c2.getSalariu(1) << endl;// DACA FOL ASTA TREBUIE SA FAC SI INDEXAREA
	//ultimile 2 randuri sunt echivalente

	c2.setNrAngajati(5, new float[5]{1,2,3,4,5});
	cout << c2.getSalariu(3);

	Cofetarie c3(c2);//copiez c3 pe baza lui c2
	Cofetarie c4 = c2;
	
}*/


	
