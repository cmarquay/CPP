#include <iostream>
#include <cmath>
using namespace std;

int  main() {

	cout << "Entrez a0 : ";
	double a0;
	cin >> a0;

	cout << "Entrez a1 : ";
	double a1;
	cin >> a1;
	  
	cout << "Entrez a2 : ";
	double a2;
	cin >> a2;
	
	double Q((3*a1 - a2*a2)/9.0);
	double R((9*a2*a1 - 27*a0 - 2*a2*a2*a2)/54.0);
	double D((Q*Q*Q)+(R*R));
	  
	if(D<0) {
		double theta(acos(R/sqrt(-Q*Q*Q)));
		const double M_PI(acos(-1.0));
		double z1(2*sqrt(-Q)*cos(theta/3.0) - a2/3.0);
		double z2(2*sqrt(-Q)*cos((theta+2*M_PI)/3.0) - a2/3.0);
		double z3(2*sqrt(-Q)*cos((theta+4*M_PI)/3.0) - a2/3.0);
		cout << "Les solutions sont "   << z1 << ", " << z2 << " et " << z3 << "." << endl;
	} else {
		double S(0.0);
		double T(0.0);
		if((R+sqrt(D))>=0) {
			S = pow(R+sqrt(D),1.0/3.0);
		} else {
			S = -pow(-(R+sqrt(D)),1.0/3.0);
		}
		if((R-sqrt(D))>=0) {
			T = pow(R-sqrt(D),1.0/3.0);
		} else {
			T = -pow(-(R-sqrt(D)),1.0/3.0);
		}
		double z1(S+T - a2/3.0);
		if ((D==0) and (S+T!=0)) {
			double z2(-(S+T)/2.0 - a2/3.0);
			cout << "Les solutions sont "   << z1 << " et " << z2 << "." << endl;
		} else {
			cout << "La solution est "   << z1 << "." << endl;
		}
	}
  
  return 0;
}
