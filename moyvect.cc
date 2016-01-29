#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<double> notes;
	double somme(0.0);
	double x(0);
	do{
		cout << "Entrez une note (<0 si pas de note) : ";
		cin >> x;
		if(x>=0) {
			notes.push_back(x);
			somme+=x;
		}
	}while(x>=0);
	cout << "La moyenne est de : " << somme/notes.size() << endl;
	return 0;
}
