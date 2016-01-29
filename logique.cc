#include <iostream>
using namespace std;

bool non_et(bool A, bool B);
bool non(bool A);
bool et(bool A, bool B);
bool ou(bool A, bool B);

int main() {
	bool a(true);
	bool b(false);
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "non a et b : " << non_et(a,b) << endl;
	cout << "non a : " << non(a) << endl;
	cout << "non b : " << non(b) << endl;
	cout << "a et b : " << et(a,b) << endl;
	cout << "a ou b : " << ou(a,b) << endl;
	return 0;
}

bool non_et(bool A, bool B) {
  return not(A and B);
}

bool non(bool A) {
	return non_et(A,A);
}

bool et(bool A, bool B) {
	return non(non_et(A,B));
}

bool ou(bool A, bool B) {
	return non_et(non(A),non(B));
}
