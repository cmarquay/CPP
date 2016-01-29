#include <iostream>
using namespace std;

int  main() {

	cout << "Entrez un reel : ";
	double x;
	cin >> x;
	  
	if (x>=-1 and x<1) {
		cout << "x appartient a I" << endl;
	} else {
		cout << "x n'appartient pas a I" << endl;
	}
	
	return 0;
}
