#include <iostream>
using namespace std;

int somme(int n);

int main()
{
	int n(0);
	do{
		cout << "Entrez un entier : ";
		cin >> n;
	}while(n<0);
	cout << "La somme des " << n << " premiers entiers est : " << somme(n) << endl;
    return 0;
}

int somme(int n) {
	if(n==0) {
		return n;
	} else {
		return n+somme(n-1);
	}
}
