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
//	//CONSTRUCTORUL DE COPIERE - mereu cu const
//	CartelaTransport(const CartelaTransport& c) : serieCartela("MM") { 
//		this->numePosesor = c.numePosesor;
//		this->nrZileUtilizare = c.nrZileUtilizare;
//		this->sumaPortofel = c.sumaPortofel;
//		this->nrCalatorii = c.nrCalatorii;
//		this->valoriCalatorii = new float[nrCalatorii];
//		for (int i = 0; i < nrCalatorii; i++) {
//			this->valoriCalatorii[i] = c.valoriCalatorii[i];
//		}
//	}
//
//	~CartelaTransport(){
//		delete[]this->valoriCalatorii;
//	}
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
//};
//
//float CartelaTransport::valoareMinCalatorie = 2;
//
////Să  se  facă  getteri și  setteri  
//// pentru  atributele  numePosesor  și  valoriCalatorii. 
//// Să  se  facă  verificarea parametrilor primiți în setteri.
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
//
//}//cum fac apelul pt un vector in main