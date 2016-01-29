#include <iostream>
#include <cmath> // pour atan, sin, abs et remainder
#include <iomanip> // pour setprecision
using namespace std;

int main()
{
  cout << setprecision(3);

  double t(0.0);    // temps, en min.
  double d(0.0);    // distance, en km
  double v(30.0);   // vitesse, en km/h
  double acc(0.0);  // accélération, en km/h/min
  double P(175.0);  // puissance, en W

  /*******************************************
   * Completez le programme a partir d'ici.
   *******************************************/
	
	double masse(0.0);
	do{
		cout << "masse du cycliste (entre 40 et 180 kg) ? ";
		cin >> masse;
	}while(masse<40 or masse>180);
	
	double vent(0.0);
	do{
		cout << "vent (entre -20 et +20 km/h) ? ";
		cin >> vent;
	}while(vent<-20 or vent>20);
	
	double distance(0.0);
	do{
		cout << "distance du parcours (<= 200 km) ? ";
		cin >> distance;
	}while(distance<11 or distance>200);
	
	double d1(0.0);
	do{
		cout << "distance au sommet du col (<= " << (distance-10) << " km) ? ";
		cin >> d1;
	}while(d1<=0 or d1>(distance-10));
	
	double p1(0.0);
	do{
		cout << "pente moyenne jusqu'au sommet (<= 20 %) ? ";
		cin >> p1;
	}while(p1<=0 or p1>20);
	
	double p2(0.0);
	do{
		cout << "pente moyenne après le sommet (<= 20 %) ? ";
		cin >> p2;
	}while(p2<=0 or p2>20);
	
	const double DT(1.0/60.0);
	const int P_MIN(10);
	double vr(v-vent);
	int i(0);
	
	cout << "paramètres de la simulation : " << masse << " " << vent << " " << distance << " " << d1 << " " << p1 << " " << p2 << endl;
	
	do{
    // affichage des informations courantes :
		if (abs(remainder(t, 5.)) < 1e-5) {
			cout << t << ", " << d << ", " << v << ", " << acc << ", " << P << endl;
		}
		
		t += DT;
		vr = v - vent;
		if(d<d1 && P>P_MIN) {
			P -= (0.5*DT);
		}
		if(d>=d1) {
			P = P_MIN;
		}
		if(d<d1) {
			acc = - (2118.96 * sin(atan(p1/100.0))) - (5.0 * vr * abs(vr) / masse);
		} else {
			acc = - (2118.96 * sin(atan(-p2/100.0))) - (5.0 * vr * abs(vr) / masse);
		}
		if(P>0 && v>0) {
			acc += (777.6 * P / (v * masse));
		}
		if(abs(acc)<1e-5) {
			acc = 0;
		}
		v += (acc * DT);
		d += (v * DT / 60.0);

		if(d>=d1 && i==0) {
			cout << "## Bernard a atteint le sommet en " << t << " min." << endl;
			++i;
		}
		if(v<3) {
			cout << "## Bernard abandonne, il n'en peut plus" << endl;
			cout << t << ", " << d << ", " << v << ", " << acc << ", " << P << endl;
			return 0;
		}
	}while(d<=distance);

  /*******************************************
   * Ne rien modifier apres cette ligne.
   *******************************************/

  cout << "## Bernard est arrivé" << endl;
  cout << t << ", " << d << ", " << v << ", " << acc << ", " << P << endl;

  return 0;
}
