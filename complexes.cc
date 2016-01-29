#include <iostream>
#include <string>
using namespace std;

struct Complexe {
	double reel;
	double virtuel;
};

void affiche(Complexe const& c);
Complexe addition (Complexe const& c1, Complexe const& c2);
Complexe soustraction (Complexe const& c1, Complexe const& c2);
Complexe multiplication (Complexe const& c1, Complexe const& c2);
Complexe division (Complexe const& c1, Complexe const& c2);

int main() {
	Complexe c1={1,0};
	Complexe c2={0,1};
	affiche(c1);
	cout << " + ";
	affiche(c2);
	cout << " = ";
	affiche(addition(c1,c2));
	cout << endl;
	affiche(c2);
	cout << " * ";
	affiche(c2);
	cout << " = ";
	affiche(multiplication(c2,c2));
	cout << endl;
	Complexe c3={1,1};
	affiche(c3);
	cout << " * ";
	affiche(c3);
	cout << " = ";
	affiche(multiplication(c3,c3));
	cout << endl;
	Complexe c4={0,2};
	affiche(c4);
	cout << " / ";
	affiche(c2);
	cout << " = ";
	affiche(division(c4,c2));
	cout << endl;
	Complexe c5={2,-3};
	affiche(c5);
	cout << " / ";
	affiche(c3);
	cout << " = ";
	affiche(division(c5,c3));
	cout << endl;
	return 0;
}

void affiche(Complexe const& c) {
	cout << "(" << c.reel << "," << c.virtuel << ")";
}

Complexe addition (Complexe const& c1, Complexe const& c2) {
	Complexe c3 = {((c1.reel)+(c2.reel)),((c1.virtuel)+(c2.virtuel))};
	return c3;
}

Complexe soustraction (Complexe const& c1, Complexe const& c2) {
	Complexe c3 = {((c1.reel)-(c2.reel)),((c1.virtuel)-(c2.virtuel))};
	return c3;
}

Complexe multiplication (Complexe const& c1, Complexe const& c2) {
	Complexe c3 = {(((c1.reel)*(c2.reel))-((c1.virtuel)*(c2.virtuel))),(((c1.reel)*(c2.virtuel))+((c2.reel)*(c1.virtuel)))};
	return c3;
}

Complexe division (Complexe const& c1, Complexe const& c2) {
	Complexe c3 = {((((c1.reel)*(c2.reel))+((c1.virtuel)*(c2.virtuel)))/(((c2.reel)*(c2.reel))+((c2.virtuel)*(c2.virtuel)))),((((c1.virtuel)*(c2.reel))-((c1.reel)*(c2.virtuel)))/(((c2.reel)*(c2.reel))+((c2.virtuel)*(c2.virtuel))))};
	return c3;
}
