#include <iostream>
#include <vector>
using namespace std;

static int somme(int n);
static int produit(int n);
static bool somme_produit_egaux(int n);

int main() {
	int i(11);
	int j(0);
	do{
		if(somme_produit_egaux(i)) {
			cout << i << ", ";
			++j;
		}
		++i;
	}while(j<20);
	cout << endl;
	return 0;
}

static int somme(int n) {
	int sum(0);
	while(n!=0) {
		sum += n%10;
		n = n/10;
	}
	return sum;
}

static int produit(int n) {
	int prod(1);
	while(n!=0) {
		prod *= n%10;
		n = n/10;
	}
	return prod;
}

static bool somme_produit_egaux(int n) {
	return somme(n)==produit(n);
}
