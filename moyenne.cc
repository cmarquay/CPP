#include <iostream>
using namespace std;

double moyenne(double n1, double n2);

int main()
{
	cout << "Entrez une note : ";
	double note1(0);
	cin >> note1;
	cout << "Entrez une note : ";
	double note2(0);
	cin >> note2;
	cout << "La moyenne des deux notes est : " << moyenne(note1,note2) << endl;
    return 0;
}

double moyenne(double n1, double n2) {
	return (n1+n2)/2.0;
}
