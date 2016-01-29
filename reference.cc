#include <iostream>
#include <string>
using namespace std;

struct Maison {
	string adresse;
};

struct Personne {
	string nom;
	Maison* ref;
};

int main() {
	Maison villa = {"51, rue de l'Orge"};
	Maison pavillon = {"2, rue Saint-Pierre"};
	Personne gilbert = {"Gilbert",&villa};
	Personne marieFrance = {"Marie-France",&villa};
	Personne georges = {"Georges",&pavillon};
	Personne madeleine = {"Madeleine",&pavillon};
	cout << gilbert.nom << " habite " << (*(gilbert.ref)).adresse << endl;
	cout << marieFrance.nom << " habite " << (*(marieFrance.ref)).adresse << endl;
	cout << georges.nom << " habite " << (*(georges.ref)).adresse << endl;
	cout << madeleine.nom << " habite " << (*(madeleine.ref)).adresse << endl;
	madeleine.ref = &villa;
	cout << "Après déménagemet, " << madeleine.nom << " habite " << (*(madeleine.ref)).adresse << endl;
	return 0;
}
