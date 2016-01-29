#include <iostream>
using namespace std;

unsigned int cherche(unsigned int borneInf, unsigned int borneSup);

int main() {
	unsigned int n(cherche(0,100));
	cout << "Votre nombre était " << n << "." << endl;
	return 0;
}

unsigned int cherche(unsigned int borneInf, unsigned int borneSup) {
	if(borneInf==borneSup) {
		cout << "Erreur, intervalle vide" << endl;
		return 1;
	} else {
		if(borneInf>borneSup) {
			unsigned int tmp(borneInf);
			borneInf=borneSup;
			borneSup=tmp;
		}
		cout << "Pensez à un nombre entre " << borneInf << " et " << borneSup << "." << endl;
		cout << endl;
		char c(' ');
		unsigned int n(0);
		do{
			n=(borneSup+borneInf)/2;
			cout << "Le nombre est il <, > ou = à " << n << " ? ";
			cin >> c;
			if(c=='<') {
				borneSup=n;
			}
			if(c=='>') {
				borneInf=n;
			}
		}while(c!='=');
		return n;
	}
}
