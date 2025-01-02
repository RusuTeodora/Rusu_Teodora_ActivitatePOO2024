
class Laptop {
private:
	int RAM;
	float rezolutieEcran;
	bool cameraWeb;
	int nrTaste;
	int* nrApasariTasta;
public:
	Laptop() {
		RAM = 16;
		rezolutieEcran = 13.3;
		this->cameraWeb = true;
		nrTaste = 0;
		
	}

	
	friend class Programator;
};


class Programator {
private:
	Laptop laptop;
public:
	bool poateIntraInConferintaVideo() {
		return this->laptop.cameraWeb;
	}
};
		

//void main() {
//	Programator programator;
//	cout << (programator.poate IntraInConferintaVideo() ? "Are video" : "Nu are video");
//}
