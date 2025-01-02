#include<iostream>

using namespace std;

class CartierRezidential {
private:
	int nrBlocuri;
	float* nrBloc;
	static int TVA;

public:
	CartierRezidential() {
		this->nrBlocuri = 0;
		this->nrBloc = nullptr;
	}

	CartierRezidential(int nrBlocuri,float*nrBloc) {
		this->nrBlocuri = nrBlocuri;
		this->nrBloc = new float[nrBlocuri];
		for (int i = 0; i < nrBlocuri; i++) {
			this->nrBloc[i] = nrBloc[i];
		}
	}

	~CartierRezidential() {
		if (this->nrBloc != nullptr) {
			delete[]this->nrBloc;
		}
	}

	int getNrBlocuri() {
		return this->nrBlocuri;
	}

	void setNrBlocuri(int nrBlocuri) {
		if (nrBlocuri > 0) {
			this->nrBlocuri = nrBlocuri;
		}

	}

	float getNrBloc() {
		if (nrBloc != nullptr) {
			return *nrBloc;
		}
	}

	void setNrBloc(float* nrBloc,int nrBlocuri) {
		if (nrBloc != nullptr) {
			delete[]this->nrBloc;
		}

		this->nrBlocuri = nrBlocuri;
		this->nrBloc = new float[nrBlocuri];
		for (int i = 0; i < nrBlocuri; i++) {
			this->nrBloc[i] = nrBloc[i];
		}



	}

	CartierRezidential(const CartierRezidential& c) {
		this->nrBlocuri = c.nrBlocuri;
		if (this->nrBloc != nullptr) {
			delete[]this->nrBloc;
		}
		this->nrBloc = new float[c.nrBlocuri];
		for (int i = 0; i < c.nrBlocuri; i++) {
			this->nrBloc[i] = c.nrBloc[i];
		}
		
	}

	CartierRezidential operator=(const CartierRezidential& c) {
		if (this != &c) {
			this->nrBlocuri = c.nrBlocuri;
			
			if (this->nrBloc) {
				delete[]this->nrBloc;
			}
			this->nrBloc = new float[c.nrBlocuri];
			for (int i = 0; i < c.nrBlocuri; i++) {
				this->nrBloc[i] = c.nrBloc[i];
			}
		}
		return *this;
	}

	CartierRezidential operator+(int valoare) {
		
			this->nrBlocuri = this->nrBlocuri+valoare;

			if (this->nrBloc) {
				delete[]this->nrBloc;
			}
			this->nrBloc = new float[nrBlocuri];
			for (int i = 0; i < nrBlocuri; i++) {
				this->nrBloc[i] = this->nrBloc[i]+valoare;
			}
			return *this;
	}





	void afisare() {
		cout << "Nr total al blocurilor este de:" << this->nrBlocuri << endl;
		cout << "Nr blocurilor sunt:";
		for (int i = 0; i < nrBlocuri; i++) {
			cout << nrBloc[i] << " ";
		}
		cout << endl;
		cout << "TVA:" << CartierRezidential::TVA << endl;
	}

	static void modificaTVA(int noulTVA) {
		if (noulTVA > 0) {
			CartierRezidential::TVA = noulTVA;
		}
	}

	
};

int CartierRezidential::TVA = 9;

//Functie GLOBALA prietena cu clasa CartierRezidential



int main() {
	/*CartierRezidential c;*/
	/*CartierRezidential(15);*/
	/*CartierRezidential c1(15);*///Crearea obiectului cu constructorul cu parametri
	float* vector = new float[7]{10,11,12,13,14,15,16};
	CartierRezidential c(7, vector);

	delete[]vector;

	//cout << "Nr blocurilor este de:"<<c.getNrBlocuri() << endl;// prima linie de pe consola

	c.afisare();

	return 0;
	
}

//adugarea unui nou element???


