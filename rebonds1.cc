#include <iostream>
#include <cmath>
using namespace std;

int  main() {

const double g(9.81);
double h0(0);
double eps(0);
int nbr(0);

do{
	cout << "Entrez la hauteur initiale : ";
	cin >> h0;
}while(h0<=0);

do{
	cout << "Entrez le coefficient de rebond : ";
	cin >> eps;
}while(eps<0 or eps >=1);

do{
	cout << "Entrez le nombre de rebonds : ";
	cin >> nbr;
}while(nbr<=0);

double h(h0);
double v(0);
double v1(0);


for(int i(0); i<nbr; ++i) {
	v = sqrt(2*h*g);
	v1 = eps * v;
	h = (v1*v1)/(2*g);
}

cout << "La hauteur de la balle après " << nbr << " rebonds est de: " << h << endl;

return 0;
}
