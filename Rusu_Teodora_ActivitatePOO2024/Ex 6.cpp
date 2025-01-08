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
//	CartelaTransport() : serieCartela("MM") {
//		this->numePosesor = "Dan";
//		this->nrZileUtilizare = 30;
//		this->sumaPortofel = 500;
//		this->nrCalatorii = 20;
//		this->valoriCalatorii = new float[nrCalatorii];
//		for (int i = 0; i < nrCalatorii; i++) {
//			this->valoriCalatorii[i] = 10+0.1*i;
//		}
//
//	}
//
//	CartelaTransport(string numePosesor, int nrZileUtilizare, float sumaPortofel, int nrCalatorii): serieCartela("MM") {
//		this->numePosesor = numePosesor;
//		this->nrZileUtilizare = nrZileUtilizare;
//		this->sumaPortofel = sumaPortofel;
//		this->nrCalatorii = nrCalatorii;
//		this->valoriCalatorii = new float[nrCalatorii];
//		for (int i = 0; i < nrCalatorii; i++) {
//			this->valoriCalatorii[i] = 10+0.1*i;
//		}
//
//	}
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
//	CONSTRUCTORUL DE COPIERE - mereu cu const
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
//	~CartelaTransport(){
//		delete[]this->valoriCalatorii;
//	}
//
//	CartelaTransport operator=(CartelaTransport c)const {
//		CartelaTransport temp = *this;
//		
//		 ce se intampla aici? 
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
//	string getNumePosesor() {
//		return this->numePosesor;
//	}
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
//};
//
//float CartelaTransport::valoareMinCalatorie = 2;
//
// 6. Să se supraîncarce operatorul = fără a genera memory leaks.
//
//int main() {
//
//	CartelaTransport c;
//
//	c.afisare();
//
//	cout << c.getNumePosesor() << endl;
//	
//	cout << c.getValoriCalatorii() << endl;
//
//	CartelaTransport c3(c);//copierea lui c3 pe baza lui c
//	CartelaTransport c2 = c;//acelasi lucru
//
//	CartelaTransport("Ana", 2, 100, 5);
// 
// cout<<c2;
// cin<<c2;
//
//}
//
//cum fac apelul pt un vector in main?
// folosim destructorul doar daca avem vector?
// cum se facesetterul pt vector?
//la op = 