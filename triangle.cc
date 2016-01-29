#include <iostream>
#include <cmath>
using namespace std;

int  main() {

	int n(0);
	do{
		cout << "Entrez le nombre de lignes du triangle : ";
		cin >> n;
	}while(n<=0);

	for(int i(0); i<n; ++i) {
		for(int j(1); j<n-i; ++j) {
			cout << " ";
		}
		for(int j(1); j<=(2*i+1); ++j) {
			cout << "*";
		}
		cout << endl;
	}

return 0;
}
