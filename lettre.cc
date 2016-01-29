#include <iostream>
#include <string>
using namespace std;

struct Lettre {
	char sexe;
	string destinataire;
	string sujet;
	int jour;
	int mois;
	string politesse;
	string auteur;
};

void genereLettre(Lettre const& l);

int main() {
	Lettre l1 = {'F',"Mireille","votre cours",18,12,"Amicalement,","John"};
	genereLettre(l1);
	cout << endl;
	Lettre l2 = {'M',"John","votre demande de rendez-vous",16,12,"Sincèrement,","Mireille"};
	genereLettre(l2);
	return 0;
}

void genereLettre(Lettre const& l) {
	cout << "Bonjour ";
	if((l.sexe)=='M') {
		cout << "cher ";
	} else {
		cout << "chère ";
	}
	cout << l.destinataire << "," << endl;
	cout << "Je vous écris à propos de " << l.sujet << "." << endl;
	cout << "Il faudrait que nous nous voyons le " << l.jour << "/" << l.mois << " pour en discuter." << endl;
	cout << "Donnez-moi vite de vos nouvelles !" << endl;
	cout << l.politesse << " " << l.auteur << "." << endl;
}
