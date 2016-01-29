#include <iostream>
using namespace std;

void espaces(int nb_espaces);
void batons(int nb_batons);
void etoiles(int nb_etoiles);
void triangle(int nb_lignes);
void triangle(int nb_lignes);
void sapin1(int nb_lignes);
void sapin2(int nb_lignes);

int main() {
	cout << "Entrez le nombre de lignes : ";
	int n(0);
	cin >> n;
	triangle(n);
	cout << endl;
	sapin1(n);
	cout << endl;
	sapin2(n);
	return 0;
}

void espaces(int nb_espaces) {
	for(int i(0); i < nb_espaces; ++i) {
		cout << ' ';
	}
}

void etoiles(int nb_etoiles) {
	for(int i(0); i < nb_etoiles; ++i) {
		cout << '*';
	}
}

void batons(int nb_batons) {
	for(int i(0); i < nb_batons; ++i) {
		cout << '|';
	}
}
  
void triangle(int nb_lignes) {
	for(int i(0); i<nb_lignes; ++i) {
		espaces(nb_lignes-i-1);
		etoiles(2*i+1);
		cout << endl;
	}
}

void sapin1(int nb_lignes) {
	for(int i(0); i<nb_lignes-2; ++i) {
		espaces(nb_lignes-i-1);
		etoiles(2*i+1);
		cout << endl;
	}
	for(int i(0); i<nb_lignes-1; ++i) {
		espaces(nb_lignes-i-1);
		etoiles(2*i+1);
		cout << endl;
	}
	triangle(nb_lignes);
	espaces(nb_lignes-1);
	etoiles(1);
	cout << endl;
}

void sapin2(int nb_lignes) {
	for(int i(0); i<nb_lignes-2; ++i) {
		espaces(nb_lignes-i-1);
		etoiles(2*i+1);
		cout << endl;
	}
	for(int i(nb_lignes-4); i<nb_lignes-1; ++i) {
		espaces(nb_lignes-i-1);
		etoiles(2*i+1);
		cout << endl;
	}
	for(int i(nb_lignes-3); i<nb_lignes; ++i) {
		espaces(nb_lignes-i-1);
		etoiles(2*i+1);
		cout << endl;
	}
	espaces(nb_lignes-2);
	batons(3);
	cout << endl;
}
