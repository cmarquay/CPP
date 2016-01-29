#include <iostream>
#include <cmath>
using namespace std;

int  main() {
	
double s0(0);
double r(0);
double ir(0);

do{
	cout << "Entrez le montant total de l'emprunt : ";
	cin >> s0;
}while(s0<=0);

do{
	cout << "Entrez la part fixe du remboursement : ";
	cin >> r;
}while(r<=0);

do{
	cout << "Entrez le taux d'interet mensuel : ";
	cin >> ir;
}while(ir<=0 or ir >=1);
int nb(0);
double s(s0);
double i(0);
do {
	s -= r;
	double tmp(ir*s);
	i += tmp;
	s -= tmp;
	++nb;
} while(s>0);

cout << "Interets rembourses : " << i << " rembourses en " << nb << endl;

return 0;
}
