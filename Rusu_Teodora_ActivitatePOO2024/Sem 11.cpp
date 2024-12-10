#include<iostream>

using namespace std;

class Angajat {
protected:
	int marca;
	string nume;
	float salariu;

public:
	Angajat() {
		this->marca = 1234;
		this->nume = "No name";
		this->salariu = 3000;

	}

	Angajat(int marca, string nume) {
		this->marca = marca;
		this->nume = nume;
		this->salariu = salariu;
	}

	virtual float getVenitIncasat() = 0;

	float getSalariu() {
		return this->salariu;
	}
};

class Manager : public Angajat {
private:
	int nrSubordonati;
	float sporPerAngajat;

public:
	Manager() :Angajat() {
		//apelam din clasa angajat vnh
		this->nrSubordonati = 0;
		this->sporPerAngajat = 0;



	}

	Manager(int nrSubordonati, float sporPerAngajat) {
		this->nrSubordonati = nrSubordonati;
		this->sporPerAngajat = sporPerAngajat;
	}

	float getSporConducere() {
		return this->sporPerAngajat;

		
	}
	
};

class ManagerDepartament :public Manager {
private:
	string numeDepartament;
	bool deCercetare;

public:
	ManagerDepartament():Manager() {
		//apelam constructorul fara parametrii
		this->numeDepartament = "Departament";
		this->deCercetare = false;

	}

	ManagerDepartament(string nume, bool deCercetare) {
		this->numeDepartament = nume;
		this->deCercetare = deCercetare;
	}

	float getVenitIncasat() {
		float venit = this->salariu;
		if (this->deCercetare) {
			venit += (10 / 100) * salariu;
		}
		return venit;
	}
};

class ManagerDeProiect :public Manager {
private:
	string numeProiect;
	int nrZile;
	float sporPerZi;

public:
	ManagerDeProiect(string numeProiect, int nrZile, int nrSubordonati, float sporPerSubordonat) :Manager() {
		this->numeProiect = numeProiect;
		this->nrZile = nrZile;
	}


};

int main() {
	//Angajat a;//nu avem voie sa instantiem o clasa abstracta


}

// late biding la momentul executiei
// earlybiding la momentul compilarii