#include <iostream>
#include <cmath>
using namespace std;

int  main() {

	cout << "Entrez un reel : ";
	double x;
	cin >> x;
	
	if(x!=0) {
		double a(x/(1-exp(x)));
		cout << "Resultat de l'expression 1 : " << a << endl;
	} else {
		cout << "Expression 1 indefinie" << endl;
	}
	if((x>=8) or (x<=0)) {
		double b((-x-sqrt(x*x-8*x))/(2-x));
		cout << "Resultat de l'expression 2 : " << b << endl;
	} else {
		cout << "Expression 2 indefinie" << endl;
	}
	if((x!=0) and (x!=1) and ((sin(x)-(x/20.0))*log(x*x-(1.0/x)))>=0) {
		double c(sqrt((sin(x)-(x/20.0))*log(x*x-(1.0/x))));
		cout << "Resultat de l'expression 3 : " << c << endl;
	} else {
		cout << "Expression 3 indefinie" << endl;
	}
  
  return 0;
}
