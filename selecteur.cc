#include <iostream>
using namespace std;

int main() {
	double valeur1(1.0);
	double valeur2(2.0);
	double valeur3(3.0);
	double* choix;
	int n(0);
	do{
		cout << "Entrez un nombre entre 1 et 3 : ";
		cin>> n;
	}while(n<1 && n>3);
	if(n==1) {
		choix = &valeur1;
	} else {
		if(n==2) {
			choix = &valeur2;
		} else {
			choix = &valeur3;
		}
	}
	cout << *choix << endl;
	return 0;
}
