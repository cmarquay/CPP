#include <iostream>
using namespace std;

int demander_nombre(int borneInf, int borneSup);

int main() {
	int n(demander_nombre(25,75));
	cout << "Voici votre nombre : " << n << endl;
	return 0;
}

int demander_nombre(int borneInf, int borneSup) {
	int n(0);
	if(borneSup<=borneInf) {
		do{
			cout << "Entrez un entier supérieur à " << borneInf << " : ";
			cin >> n;
		}while(n<borneInf);
	} else {
		do{
			cout << "Entrez un entier compris entre " << borneInf << " et " << borneSup << " : ";
			cin >> n;
		}while(n<borneInf or n>borneSup);
	}
	return n;
}
