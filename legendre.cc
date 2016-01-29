#include <iostream>
#include <cmath> // pour sqrt()
using namespace std;

/*****************************************************
 * Compléter le code à partir d'ici
 *****************************************************/

	static bool est_premier(int n);
	static void test_premiers(int borneMin, int borneMax);
	static int legendre(int n);
	static void test_legendre();
	
	static bool est_premier(int n) {
		if(n<=1 or (n!=2 && n%2==0)) {
			return false;
		} else {
			if(n==2) {
				return true;
			} else {
				int i(3);
				while(i<=sqrt(n)) {
					if(n%i==0) {
						return false;
					}
					++i;
				}
				return true;
			}
		}
	}
	
	static void test_premiers(int borneMin, int borneMax) {
		cout << "Premiers entre " << borneMin << " et " << borneMax << " :" << endl;
		for(int i(borneMin); i<=borneMax; ++i) {
			if(est_premier(i)) {
				cout << i << ", ";
			}
		}
		cout << endl;
	}
	
	static int legendre(int n) {
		for(int i(n*n+1); i<=(n+1)*(n+1)-1; ++i) {
			if(est_premier(i)) {
				return i;
			}
		}
		return 0;
	}
	
	static void test_legendre() {
		int n1(0);
		do{
			cout << "Tester la conjecture de Legendre entre : ";
			cin >> n1;
		}while(n1<=0);
		int n2(0);
		do{
			cout << "et : ";
			cin >> n2;
		}while(n2<n1);
		for(int i(n1); i<=n2; ++i) {
			int n3(legendre(i));
			if(n3!=0) {
				cout << i << " : " << n3 << endl;
			} else {
				cout << "PAS TROUVÉ !";
			}
		}
	}

/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

int main()
{
  test_premiers(0, 100);
  cout << endl;
  test_legendre();
  return 0;
}
