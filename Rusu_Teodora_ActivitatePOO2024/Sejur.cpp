//#include<iostream>
//
//using namespace std;
//
//class Sejur {
//private:
//	const int id;
//	char *destinatie;
//	float pretBaza;
//	int nrExcursiiOptionale;
//	float* pretExcursie;
//	int nrTuristi;
//	string numeHotel;
//
//public:
//
//	Sejur() :id(12) {
//		this->destinatie = new char[10];
//		this->pretBaza = 500;
//		this->nrExcursiiOptionale = 5;
//		this->pretExcursie = new float[nrExcursiiOptionale];
//		for (int i = 0; i < nrExcursiiOptionale; i++) {
//			this->pretExcursie[i] = 100 + i;
//		}
//		this->nrTuristi = 12;
//		this->numeHotel = "L'etoile";
//	}
//
//	~Sejur() {
//		if (this->nrExcursiiOptionale) {
//			delete[]this->pretExcursie;
//		}
//
//		delete[]this->destinatie;
//	}
//
//	int getNrTuristi() {
//		return this->nrTuristi;
//	}
//
//	string getNumeHotel() {
//		return this->numeHotel;
//	}
//
//	void setNrTuristi(int nrTuristi) {
//		if (nrTuristi > 0) {
//			this->nrTuristi = nrTuristi;
//		}
//	}
//
//	void setNumeHotel(string numeHotel) {
//		if (numeHotel.length() > 0) {
//			this->numeHotel = numeHotel;
//		}
//	}
//
//	void afisare() {
//		Sejur s;
//		cout << "Denumire destinatie:" << this->destinatie<<endl;
//		cout << "Pretul de baza este:" << this->pretBaza<<endl;
//		cout << "Nr excursiilor optionale:" << this->nrExcursiiOptionale<<endl;
//		cout << "Pretul excursie optioanala:";
//		for (int i = 0; i < nrExcursiiOptionale; i++) {
//			cout << this->pretExcursie[i]<<" ";
//		}
//		cout << endl;
//		cout << "Nr de turisti:" << this->nrTuristi<<endl;
//		cout << "Numele hotelului la care sunt cazati:" << this->numeHotel<<endl;
//	}
//
//	Sejur(const Sejur& s) :id(s.id) {
//		this->destinatie = s.destinatie;
//		this->pretBaza = s.pretBaza;
//		this->nrExcursiiOptionale = s.nrExcursiiOptionale;
//		this->pretExcursie = new float[nrExcursiiOptionale];
//		for (int i = 0; i < s.nrExcursiiOptionale; i++) {
//			this->pretExcursie[i] = s.pretExcursie[i];
//		}
//		this->nrTuristi = s.nrTuristi;
//		this->numeHotel = s.numeHotel;
//	}
//
//	Sejur operator=(const Sejur& s) {
//		if (&s != this) {
//			this->destinatie = s.destinatie;
//			this->pretBaza = s.pretBaza;
//			this->nrExcursiiOptionale = s.nrExcursiiOptionale;
//			if (this->pretExcursie != NULL) {
//				delete[]this->pretExcursie;
//			}
//			this->pretExcursie = new float[nrExcursiiOptionale];
//			for (int i = 0; i < nrExcursiiOptionale; i++) {
//				
//				this->pretExcursie[i] = s.pretExcursie[i];
//			}
//			
//			this->nrTuristi = s.nrTuristi;
//			this -> numeHotel = s.numeHotel;
//		}
//		return *this;
//	}
//
//	friend ostream& operator<<(ostream& output, Sejur s) {
//		output << "Destinatie:" << s.destinatie;
//		output << "Nr excursii optionale:" << s.nrExcursiiOptionale;
//		output << "Pret excursie optionala:";
//		for (int i = 0; i < s.nrExcursiiOptionale; i++) {
//			output << s.pretExcursie;
//		}
//		output << "Nr turisti:" << s.nrTuristi;
//		output << "Nume hotel:" << s.numeHotel;
//		return output;
//	}
//
//	friend istream& operator>>(istream& input, Sejur s) {
//		cout << "Destinatie:";
//		input >> s.destinatie;
//		cout<<"Pret de baza:";
//		input >> s.pretBaza;
//		cout << "Nr excursii optionale:";
//		input >> s.nrExcursiiOptionale;
//		if (s.pretExcursie != NULL) {
//			delete[]s.pretExcursie;
//		}
//		s.pretExcursie = new float[s.nrExcursiiOptionale];
//		if (s.nrExcursiiOptionale > 0) {
//			for (int i = 0; i < s.nrExcursiiOptionale; i++) {
//				cout << "Pret excursie optionala:"<<i+1<<":";
//				input >> s.pretExcursie[i];
//			}
//		}
//		else {
//			s.pretExcursie = NULL;
//		}
//		
//		return input;
//	}
//
//	Sejur operator--(int) {
//		Sejur copie = *this;
//		this->nrTuristi--;
//		return copie;
//	}
//
//	Sejur operator+(int valoare) {
//		Sejur aux = *this;
//		aux.nrExcursiiOptionale = this->nrExcursiiOptionale + valoare;
//		aux.destinatie = this->destinatie + valoare;
//		if (pretExcursie != NULL) {
//			delete[]pretExcursie;
//		}
//		aux.pretExcursie = new float[nrExcursiiOptionale];
//		for (int i = 0; i < nrExcursiiOptionale; i++) {
//			aux.pretExcursie[i] = this->pretExcursie[i] + valoare;
//		}
//
//		return aux;
//
//	}
//
//	Sejur* operator->() {
//		this->pretBaza = 200;
//		return this;
//
//	}
//
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
//
//
//int main() {
//	Sejur s;
//	s.afisare();//apel fct afisare
//
//	cout << s.getNrTuristi();
//	cout << s.getNumeHotel();
//
//	s.setNrTuristi(3);
//	s.setNumeHotel("Steaua noptii");
//
//	Sejur s1;
//	cout << s1;//apel op<<
//	cin >> s1;// apel op>>
//
//	Sejur s3 = s1;// apel op =
//	Sejur s3;
//	s3.setNrTuristi(23);
//
//	
//}
//// cum se procedeaza cu char-ul ?
//
////void setPunctPlecare(const char* pplecare)
////{
////	delete[] this->punctPlecare;// dam stergere doar la astea cu * alocate dinamic 
////	this->punctPlecare = new char[strlen(pplecare) + 1];//am alocat memorie 
////	strcpy(this->punctPlecare, pplecare);//ai copiat sirul de caractere 
////}