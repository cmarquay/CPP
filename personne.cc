#include <iostream>
#include <string>
using namespace std;

struct Personne {
	double taille;
	int age;
	char sexe;
};

void affiche_personne(Personne const& p);
void anniversaire(Personne& p);
Personne naissance();

int main() {
	Personne p(naissance());
	anniversaire(p);
	affiche_personne(p);
return 0;
}

void affiche_personne(Personne const& p) {
	cout << "Personne : " << endl;
	cout << "Taille : " << p.taille << "m" << endl;
	cout << "Age : " << p.age << " ans" << endl;
	cout << "Sexe : " << p.sexe << endl;
}

void anniversaire(Personne& p) {
	++(p.age);
}

Personne naissance() {
	Personne p;
	cout << "Entrez la taille de la personne : ";
	cin >> p.taille;
	cout << "Entrez l'âge de la personne : ";
	cin >> p.age;
	cout << "Entrez le sexe de la personne : ";
	cin >> p.sexe;
	return p;
}
