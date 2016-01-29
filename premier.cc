#include <iostream>
#include <cmath>
using namespace std;

int  main() {

int n(0);

do{
	cout << "Entrez un entier : ";
	cin >> n;
}while(n<=1);

bool entier(true);
int diviseur(0);

if(n!=2 && n%2==0) {
	entier = false;
	diviseur = 2;
} else {
	int i(3);
	while (i<sqrt(n) && entier==true) {
		if(n%i==0) {
			entier = false;
			diviseur = i;
		}
		i+=2;
	}
}

if (entier==true) {
	cout << n << " est premier" << endl;
} else {
	cout << n << " n'est pas premier, car il est divisible par " << diviseur << endl;
}

return 0;
}
