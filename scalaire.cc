#include <iostream>
#include <vector>
using namespace std;

double scalaire(vector<double> u, vector<double> v);
void remplirVecteur(vector<double>& v, size_t n);

int main() {
	vector<double> v1;
	vector<double> v2;
	size_t n(0);
	do{
		cout << "Entrez la taille des vecteurs : ";
		cin >> n;
	}while(n<=0);
	cout << "Premier vecteur : " << endl;
	remplirVecteur(v1,n);
	cout << "Second vecteur : " << endl;
	remplirVecteur(v2,n);
	cout << "Le produit scalaire est " << scalaire(v1,v2) << endl;
	return 0;
}

double scalaire(vector<double> u, vector<double> v) {
	double x(0.0);
	for(size_t i(0); i<u.size(); ++i) {
		x += u[i]*v[i];
	}
	return x;
}

void remplirVecteur(vector<double>& v, size_t n) {
	for(size_t i(0); i<n; ++i) {
		cout << "Entrez la " << (i+1) << "ème valeur : ";
		double x(0.0);
		cin >> x;
		v.push_back(x);
	}
}
