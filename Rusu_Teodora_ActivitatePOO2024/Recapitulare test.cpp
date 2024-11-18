//#include<iostream>
//
//using namespace std;
//
//class CartelaTransport {
//private:
//	const string serieCartela;
//	string numePosesor;
//	int nrZileUtilizare;
//	float sumaPortofel;
//	int nrCalatorii;
//	float* valoriCalatorii;
//	static float valoareMinCalatorie;
//
//public:
//
//	// CLASA FARA PARAMETRII
//
//	CartelaTransport() : serieCartela("MM") { // ATRIBUT DE TIP CONST
//		this->numePosesor = "Dan";
//		this->nrZileUtilizare = 30;
//		this->sumaPortofel = 500;
//		this->nrCalatorii = 20;
//		this->valoriCalatorii = new float[nrCalatorii];
//		for (int i = 0; i < nrCalatorii; i++) {
//			this->valoriCalatorii[i] = 10 + 0.1 * i;
//		}
//
//	}
//
//	// CLASA CU PARAMETRII
//
//	CartelaTransport(string numePosesor, int nrZileUtilizare, float sumaPortofel, int nrCalatorii) : serieCartela("MM") {
//		this->numePosesor = numePosesor;
//		this->nrZileUtilizare = nrZileUtilizare;
//		this->sumaPortofel = sumaPortofel;
//		this->nrCalatorii = nrCalatorii;
//		this->valoriCalatorii = new float[nrCalatorii];
//		for (int i = 0; i < nrCalatorii; i++) {
//			this->valoriCalatorii[i] = 10 + 0.1 * i;
//		}
//
//	}
//
//	// FUNCTIE DE AFISARE
//
//	void afisare() {
//		cout << "Nume posesor:" << this->numePosesor << endl;
//		cout << "Nr zile utilizare:" << this->nrZileUtilizare << endl;
//		cout << "Suma portofel:" << this->sumaPortofel << endl;
//		cout << "Nr calatorii:" << this->nrCalatorii << endl;
//		cout << "Valoarea minima a unei  calatorii:" << CartelaTransport::valoareMinCalatorie << endl;
//		cout << "Valori calatorii: ";
//		{
//			for (int i = 0; i < nrCalatorii; i++) {
//				cout << valoriCalatorii[i] << " ";
//			}
//			cout << endl;
//		}
//	}
//
//	//CONSTRUCTORUL DE COPIERE - mereu cu const si cu &
//
//	CartelaTransport(const CartelaTransport& c) : serieCartela("MM") {
//		this->numePosesor = c.numePosesor;
//		this->nrZileUtilizare = c.nrZileUtilizare;
//		this->sumaPortofel = c.sumaPortofel;
//		this->nrCalatorii = c.nrCalatorii;
//		this->valoriCalatorii = new float[nrCalatorii];
//		for (int i = 0; i < nrCalatorii; i++) {
//			this->valoriCalatorii[i] = c.valoriCalatorii[i];
//		}//?
//	}
//
//	// DESTRUCTOR
//
//	~CartelaTransport() {
//		delete[]this->valoriCalatorii;
//	}
//
//
//
//
//
//	string getNumePosesor() {
//		return this->numePosesor;
//	}
//
//	// SETTERI
//
//	float* getValoriCalatorii() {
//		return this->valoriCalatorii;
//	}
//
//	void setNumePosesor(string numePosesor) {
//		if (numePosesor.length() > 0) {
//			this->numePosesor = numePosesor;
//		}
//	}
//
//	void setValoriCalatorii(float* valoriCalatorii) {
//		if (this->valoriCalatorii != NULL) {
//			this->valoriCalatorii = valoriCalatorii;
//		}
//	}
//
//	// OPERATORUL +
//
//	CartelaTransport operator+(CartelaTransport c)const {
//		CartelaTransport temp = *this;
//
//		// ce se intampla aici? 
//
//		temp.numePosesor = numePosesor + c.numePosesor;
//		temp.nrZileUtilizare = nrZileUtilizare + c.nrZileUtilizare;
//		temp.sumaPortofel = sumaPortofel + c.sumaPortofel;
//		temp.nrCalatorii = nrCalatorii + c.nrCalatorii;
//		float* aux = new float[nrCalatorii];
//		for (int i = 0; i < this->nrCalatorii; i++) {
//			aux[i] = this->valoriCalatorii[i];
//		}
//		for (int i = 0; i < c.nrCalatorii; i++) {
//			aux[i + this->nrCalatorii] = c.valoriCalatorii[i];
//		}
//		if (temp.valoriCalatorii != NULL) {
//			delete[]temp.valoriCalatorii;
//		}
//		temp.valoriCalatorii = aux;
//		return temp;
//	}
//
//
//
//	// OPERATORUL << SI >>
//
//	friend ostream& operator<<(ostream& output, CartelaTransport c) {
//		output << "Nume posesor:" << c.numePosesor;
//		output << "Nr calatorii:" << c.nrCalatorii << "cu valori de:";
//		for (int i = 0; i < c.nrCalatorii; i++) {
//			output << c.valoriCalatorii[i];
//		}
//		return output;
//	}
//
//	friend istream& operator>>(istream& input, CartelaTransport& c) {
//		cout << "Nume posesor:";
//		input >> c.numePosesor;
//		cout << "Nr calatorii:";
//		input >> c.nrCalatorii;
//		if (c.valoriCalatorii != NULL) {
//			delete[]c.valoriCalatorii;
//		}
//		if (c.nrCalatorii > 0) {
//			c.valoriCalatorii = new float[c.nrCalatorii];
//			for (int i = 0; i < c.nrCalatorii; i++) {
//				cout << "Valorile calatoriilor:" << i + 1 << ":";
//				input >> c.valoriCalatorii[i];
//			}
//		}
//		else {
//			c.valoriCalatorii = NULL;
//		}
//		return input;
//	}
//
//	// OPERATORUL CAST
//
//	operator string() {
//		return this->numePosesor;
//	}
//
//	operator int() {
//		return this->nrCalatorii;
//	}
//
//	operator float() {
//		float s = 0;
//		for (int i = 0; i < nrCalatorii; i++) {
//			s += this->valoriCalatorii[i];
//		}
//		return s;
//	}
//
//	// OPERATORUL [] INDEX - pt vectori
//
//	float& operator[](int index) {
//		if (index >= 0 && this->nrCalatorii) {
//			return this->valoriCalatorii[index];
//		}
//		else {
//			throw "Indexul este in afara limitelor";
//		}
//	}
//
//	// OPERATORUL UNAR ++
//
//	CartelaTransport operator++(int) {
//		CartelaTransport copie = *this;
//		this->sumaPortofel++;
//		return copie;
//	}
//
//	// OPERATORUL +=
//
//
//
//
//	// OPERATORUL -> nu dam la testul asta
//
//	CartelaTransport* operator->() {
//		this->numePosesor = "Vali";
//		return this;
//	}
//
//	// OPERATOR !
//
//	CartelaTransport operator!() {
//		CartelaTransport copie = *this;
//		copie.numePosesor != copie.numePosesor;
//		return copie;
//	}
//
//	// OPERATOR FUNCTIE
//
//	int operator()(int n) {
//		if (n > 0 && this->nrCalatorii) {
//			int suma = 0;
//			for (int i = 0; i < nrCalatorii; i++) {
//				suma += this->valoriCalatorii[i];
//			}
//			return suma;
//		}
//		else {
//			return 0;
//		}
//	}
//
//
//
//
//
//};
//
//float CartelaTransport::valoareMinCalatorie = 2; // ATRIBUT STATIC
//
//
//
//int main() {
//
//	CartelaTransport c;
//
//	c.afisare(); // APEL FCT AFISARE*/
//
//	cout << c.getNumePosesor() << endl; // APELARE GETTER
//
//	cout << c.getValoriCalatorii() << endl;
//
//	c.setNumePosesor("ana");// APELARE SETTER
//
//	CartelaTransport c3(c);//copierea lui c3 pe baza lui c
//	CartelaTransport c2 = c;//acelasi lucru
//
//	CartelaTransport c4("Ana", 2, 100, 5);
//
//	// APEL OPERATOR << SI >> 
//
//	cout << c;
//	cin >> c;
//
//	// APEL OPERATOR INDEX
//
//
//	// APEL OPERATOR CAST
//
//	int nrCalatorii = (int)c;
//
//
//
//
//
//
//
//
//	return 0;
//}
//
////cum fac apelul pt un vector in main?
//// folosim destructorul doar daca avem vector
//// cum se face setterul pt vector
//// apel operator index
//// OPERATORUL +=/--/++
////Cand se fol get si cand se foloseste friend?
////