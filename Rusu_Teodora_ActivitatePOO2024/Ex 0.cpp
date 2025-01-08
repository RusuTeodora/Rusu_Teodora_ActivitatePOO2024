#include<iostream>

using namespace std;

/*int suma(int x, int y) {
	return x + y;
}

int suma(int a, int b, int c) {
	return a + b + c;
}

void main() {
	cout << suma(3, 5) << endl;
	cout << suma(3, 4, 5) << endl;

}

// ex 2

class Punct {
private:
	int x;
	int y;

public:
	Punct(int x, int y) {
		this->x = x;
		this->y = y;
	}

	Punct operator+(Punct & p) {
		return Punct(this->x + p.x, this->y + p.y);
		//this->x face referire la coordonata
		// x a obiectului curent, iar p.x este
		// coordonata x a obiectului trecut ca parametru.

	}

	int getx() {
		return this->x;
	}

	int gety() {
		return this->y;
	}
};

int main() {
	Punct p1(2,3);
	Punct p2(2, 4);
	Punct p3 = p1 + p2;

	cout << "p3 (" << p3.getx() << "," << p3.gety() << ")" << endl;

	return 0;
}*/

/*class Sir {
private:
	char* data;

public:
	//CONSTRUCTOR

	Sir(char* initData) {
		//constructorul primeste un sir
		// de caractere ca argument.
		//Este folosit pentru a inițializa
		// obiectul Sir cu un text.
		data = new char[strlen(initData) + 1];
		//data: Este un pointer care va
		// reține adresa acestui spațiu de memorie nou alocat.
		// Practic, este locul unde textul va fi stocat.
		strcpy(data, initData);
		//copiază conținutul șirului initData în șirul data.
		//Deci, textul din initData este copiat
		// în memoria nou alocată, astfel încât obiectul
		// Sir să aibă propria copie a șirului de caractere.
	}

	//DESTRUCTOR

	~Sir() {
		delete[]data;
	}

	// SUPRAINVARCAREA OPERATORULUI =

	Sir operator=(Sir& other) {
		if (this != &other) { //verificare auto atribuire
			delete[]data;
			data = new char[strlen(other.data) + 1];
		}

		return*this;
	}

};*/

