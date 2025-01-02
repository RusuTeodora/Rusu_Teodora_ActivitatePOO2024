//#include<iostream>
//
//using namespace std;
//
//class CartierRezidential {
//private:
//	int nrBlocuri;
//	float* nrBloc;
//	static int TVA;
//
//public:
//	CartierRezidential() {
//		this->nrBlocuri = 0;
//		this->nrBloc = nullptr;
//	}
//
//	CartierRezidential(int nrBlocuri,float*nrBloc) {
//		this->nrBlocuri = nrBlocuri;
//		this->nrBloc = new float[nrBlocuri];
//		for (int i = 0; i < nrBlocuri; i++) {
//			this->nrBloc[i] = nrBloc[i];
//		}
//	}
//
//	~CartierRezidential() {
//		if (this->nrBloc != nullptr) {
//			delete[]this->nrBloc;
//		}
//	}
//
//	int getNrBlocuri() {
//		return this->nrBlocuri;
//	}
//
//	void setNrBlocuri(int nrBlocuri) {
//		if (nrBlocuri > 0) {
//			this->nrBlocuri = nrBlocuri;
//		}
//
//	}
//
//	float getNrBloc() {
//		if (nrBloc != nullptr) {
//			return *nrBloc;
//		}
//	}
//
//	void setNrBloc(float* nrBloc,int nrBlocuri) {
//		if (nrBloc != nullptr) {
//			delete[]this->nrBloc;
//		}
//
//		this->nrBlocuri = nrBlocuri;
//		this->nrBloc = new float[nrBlocuri];
//		for (int i = 0; i < nrBlocuri; i++) {
//			this->nrBloc[i] = nrBloc[i];
//		}
//
//
//
//	}
//
//	CartierRezidential(const CartierRezidential& c) {
//		this->nrBlocuri = c.nrBlocuri;
//		/*if (this->nrBloc != nullptr) {
//			delete[]this->nrBloc;
//		}*/
//		this->nrBloc = new float[c.nrBlocuri];
//		for (int i = 0; i < c.nrBlocuri; i++) {
//			this->nrBloc[i] = c.nrBloc[i];
//		}
//		
//	}
//
//	CartierRezidential operator=(const CartierRezidential& c) {
//		if (this != &c) {
//			this->nrBlocuri = c.nrBlocuri;
//			
//			if (this->nrBloc) {
//				delete[]this->nrBloc;
//			}
//			this->nrBloc = new float[c.nrBlocuri];
//			for (int i = 0; i < c.nrBlocuri; i++) {
//				this->nrBloc[i] = c.nrBloc[i];
//			}
//		}
//		return *this;
//	}
//
//	CartierRezidential operator+(int valoare) {
//		
//			this->nrBlocuri = this->nrBlocuri+valoare;
//
//			if (this->nrBloc) {
//				delete[]this->nrBloc;
//			}
//			this->nrBloc = new float[nrBlocuri];
//			for (int i = 0; i < nrBlocuri; i++) {
//				this->nrBloc[i] = this->nrBloc[i]+valoare;
//			}
//			return *this;
//	}
//
//	static void modificaTVA(int noulTVA) {
//		if (noulTVA > 0) {
//			CartierRezidential::TVA = noulTVA;
//		}
//	}
//
//	friend ostream& operator<<(ostream& output, CartierRezidential c) {
//
//		output << "Nr blocuri:" << c.nrBlocuri << endl;
//		output << "Nr blocurilor este:" << endl;
//		for (int i = 0; i < c.nrBlocuri; i++) {
//			output << c.nrBloc[i] << " ";
//		}
//		cout << endl;
//		return output;
//
//	}
//
//	friend istream& operator>>(istream& input, CartierRezidential& c) {
//
//		cout << "Nr blocuri:";
//		input >> c.nrBlocuri;
//		if (c.nrBloc != NULL) {
//			delete[]c.nrBloc;
//		}
//		if (c.nrBlocuri > 0) {
//			c.nrBloc = new float[c.nrBlocuri];
//			for (int i = 0; i < c.nrBlocuri; i++) {
//				cout << "Nr  blocului" << " " << i + 1 << endl;
//				input >> c.nrBloc[i];
//			}
//		}
//		else {
//			c.nrBlocuri = NULL;
//		}
//		return input;
//	}
//
//
//
//
//
//	void afisare() {
//		cout << "Nr total al blocurilor este de:" << this->nrBlocuri << endl;
//		cout << "Nr blocurilor sunt:";
//		for (int i = 0; i < nrBlocuri; i++) {
//			cout << nrBloc[i] << " ";
//		}
//		cout << endl;
//		cout << "TVA:" << CartierRezidential::TVA << endl;
//	}
//
//	
//
//	
//};
//
//int CartierRezidential::TVA = 9;
//
////Functie GLOBALA prietena cu clasa CartierRezidential
//
//class Bloc {
//private:
//	int nrApartamente;
//	int etaje;
//	string tipConstructie;
//
//public:
//	
//	Bloc() {
//		this->nrApartamente = 0;
//		this->etaje = 0;
//		this->tipConstructie = "Necunoscut";
//	}
//
//	
//	Bloc(int nrApartamente, int etaje, string tipConstructie) {
//		this->nrApartamente = nrApartamente;
//		this->etaje = etaje;
//		this->tipConstructie = tipConstructie;
//	}
//
//	
//	int getNrApartamente()  {
//		return this->nrApartamente;
//	}
//
//	void setNrApartamente(int nrApartamente) {
//		if (nrApartamente > 0) {
//			this->nrApartamente = nrApartamente;
//		}
//	}
//
//	int getEtaje()  {
//		return this->etaje;
//	}
//
//	void setEtaje(int etaje) {
//		if (etaje > 0) {
//			this->etaje = etaje;
//		}
//	}
//
//	string getTipConstructie()  {
//		return this->tipConstructie;
//	}
//
//	void setTipConstructie(string tipConstructie) {
//		if (tipConstructie.length() > 0) {
//			this->tipConstructie = tipConstructie;
//
//		}
//		
//	}
//
//	Bloc(const Bloc& b) {
//		this->nrApartamente = b.nrApartamente;
//		this->etaje = b.etaje;
//		this->tipConstructie = b.tipConstructie;
//	}
//
//	Bloc operator=(const Bloc& b) {
//		if (this != &b) {
//			this->nrApartamente = b.nrApartamente;
//			this->etaje = b.etaje;
//			this->tipConstructie = b.tipConstructie;
//
//		}
//		return *this;
//	
//		
//	}
//
//	operator string() {
//		return this->tipConstructie;
//	}
//
//
//	Bloc operator++(int) {
//		Bloc copie = *this;
//		this->etaje++;
//		return copie;
//	}
//
//	bool operator>(Bloc c) {
//		return this->nrApartamente > c.nrApartamente;
//	}
//
//	void afisare()  {
//		
//		cout << "Numar apartamente: " << nrApartamente << endl;
//		cout << "Numar etaje: " << etaje << endl;
//		cout << "Tip constructie: " << tipConstructie << endl;
//	}
//};
//
//class Apartament {
//private:
//	int suprafata;
//	int nrCamere;
//	bool balcon;
//
//public:
//	
//	Apartament() {
//		this->suprafata = 0;
//		this->nrCamere = 0;
//		this->balcon = false;
//	}
//
//	
//	Apartament(int suprafata, int nrCamere, bool balcon) {
//		this->suprafata = suprafata;
//		this->nrCamere = nrCamere;
//		this->balcon = balcon;
//	}
//
//	
//	int getSuprafata() {
//		return this->suprafata;
//	}
//
//	void setSuprafata(int suprafata) {
//		if (suprafata > 0) {
//			this->suprafata = suprafata;
//		}
//	}
//
//	int getNrCamere() {
//		return this->nrCamere;
//	}
//
//	void setNrCamere(int nrCamere) {
//		if (nrCamere > 0) {
//			this->nrCamere = nrCamere;
//		}
//	}
//
//	bool getBalcon() {
//		return this->balcon;
//	}
//
//	void setBalcon(bool balcon) {
//		this->balcon = balcon;
//	}
//
//	Apartament (const Apartament& a) {
//			this->suprafata = a.suprafata;
//			this->nrCamere = a.nrCamere;
//			this->balcon = a.balcon;
//	}
//
//	Apartament operator=(const Apartament& a) {
//		if (this != &a) {
//			this->suprafata = a.suprafata;
//			this->nrCamere = a.nrCamere;
//			this->balcon = a.balcon;
//
//		}
//		return *this;
//	}
//
//	int operator()(int n) {
//		if (n > 0 && this->nrCamere) {
//			int suma = 0;
//			
//			suma += this->nrCamere;
//			
//			return suma;
//		}
//		else {
//			return 0;
//		}
//	}
//
//	Apartament operator!() {
//		Apartament copie = *this;
//		copie.nrCamere != copie.nrCamere;
//		return copie;
//	}
//
//	void afisare() const {
//		cout << "Suprafata: " << suprafata << " mp" << endl;
//		cout << "Numar camere: " << nrCamere << endl;
//		cout << "Balcon: " << (balcon ? "Da" : "Nu") << endl;
//	}
//};
//
//
//
//
//
//
//int main() {
//	/*CartierRezidential c;*/
//	/*CartierRezidential(15);*/
//	/*CartierRezidential c1(15);*///Crearea obiectului cu constructorul cu parametri
//	float* vector = new float[7]{10,11,12,13,14,15,16};
//	CartierRezidential c(7, vector);
//
//	delete[]vector;
//
//	//cout << "Nr blocurilor este de:"<<c.getNrBlocuri() << endl;// prima linie de pe consola
//
//	c.afisare();
//
//	CartierRezidential c2(c);
//
//	cout << c;
//	cin >> c;
//
//	Bloc b;
//	b.afisare();
//
//	Bloc b1(b);
//
//	string tipConstructie = (string)b;
//
//	Apartament a;
//	a.afisare();
//
//	
//
//
//	
//
//	return 0;
//
//	
//}
//
////adugarea unui nou element???
////ape op ++
////apel op < > >= <=
////ape op functie
//
//
