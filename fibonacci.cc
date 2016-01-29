#include <iostream>
#include <limits>
#include <string>
using namespace std;

int FibonacciIteratif(int n);
int Fibonacci(int n);

int main() {
	char c('o');
	do{
		int n(0);
		do{
			cout << "Entrez un entier entre 0 et 40 : ";
			cin >> n;
		}while(n<0 or n>40);
		cout << "Méthode itérative : " << endl;
		cout << "F(" << n << ") = " << FibonacciIteratif(n) << endl;
		cout << "Méthode récursive : " << endl;
		cout << "F(" << n << ") = " << Fibonacci(n) << endl;
		do{
			cout << "Voulez-vous recommencer [o/n] ? ";
			cin >> c;
		}while(c!='o' && c!='O' && c!='n' && c!='N');
	}while(c=='o' or c=='O');
	return 0;
}

int FibonacciIteratif(int n) {
	int Fn(0);    // stocke F(i)  , initialisé par F(0)
	int Fn_1(Fn); // stocke F(i-1), initialisé par F(0)
	int Fn_2(1);  // stocke F(i-2), initialisé par F(-1)
	if (n > 0) {
		for (int i(1); i <= n; ++i) {
			Fn   = Fn_1 + Fn_2;    // pour n>=1 on calcule F(n)=F(n-1)+F(n-2)
			Fn_2 = Fn_1;           // et on decale...
			Fn_1 = Fn;
		}
	}
	return Fn;
}

int Fibonacci(int n) {
	if(n==0) {
		return 0;
	} else {
		if(n==1) {
			return 1;
		} else {
			n=Fibonacci(n-1)+Fibonacci(n-2);
		}
	}
	return n;
}
