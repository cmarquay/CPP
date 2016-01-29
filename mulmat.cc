#include <iostream>
#include <vector>
using namespace std;

vector<vector<double> > lire_matrice();
vector<vector<double> > multiplication(const vector<vector<double> >& Mat1, const vector<vector<double> >& Mat2);
void affiche_matrice(const vector<vector<double> > M);

int main() {
	vector<vector<double> > m1;
	vector<vector<double> > m2;
	m1 = lire_matrice();
	m2 = lire_matrice();
	if(m1[0].size()!=m2.size()) {
		cout << "Multiplication impossible !" << endl;
	} else {
		vector<vector<double> > m3;
		m3 = multiplication(m1,m2);
		affiche_matrice(m3);
	}
	return 0;
}

vector<vector<double> > lire_matrice() {
	size_t m(0);
	size_t n(0);
	do{
		cout << "Entrez le nombre de lignes de la matrice : ";
		cin >> m;
		cout << "Entrez le nombre de colonnes de la matrice : ";
		cin >> n;
	}while(m<=0 || n<=0);
	vector<vector<double> > mat(m, vector<double>(n));
	for(size_t i(0); i<m; ++i) {
		for(size_t j(0); j<n; ++j) {
			cout << "Entrez la valeur [" << i << "][" << j << "] de la matrice : ";
			cin >> mat[i][j];
		}
	}
	return mat;
}

vector<vector<double> > multiplication(const vector<vector<double> >& Mat1, const vector<vector<double> >& Mat2) {
	vector<vector<double> > mat3(Mat1.size(), vector<double>(Mat2[0].size()));
	for(size_t i(0); i<Mat1.size(); ++i) {
		for(size_t j(0); j<Mat2[0].size(); ++j) {
			for(size_t k(0); k<Mat1[0].size(); ++k) {
				mat3[i][j] += Mat1[i][k]*Mat2[k][j];
			}
		}
	}
	return mat3;
}

void affiche_matrice(const vector<vector<double> > M) {
	for(vector<double> ligne : M) {
		for(double element : ligne) {
			cout << element << " ";
		}
		cout << endl;
	}
}
