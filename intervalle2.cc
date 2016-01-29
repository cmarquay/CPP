#include <iostream>
using namespace std;

int  main() {

	cout << "Entrez un reel : ";
	double x;
	cin >> x;
	  
	if ((!(x<2) and (x<3)) or ((0<x) and (!(1<x))) or (!(x<-10) and (!(-2<x)))) {
		cout << "x appartient a I" << endl;
	} else {
		cout << "x n'appartient pas a I" << endl;
	}
	
	return 0;
}

