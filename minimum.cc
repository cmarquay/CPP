#include <iostream>
using namespace std;

static int min2(int n1, int n2);
static int min3(int n1, int n2, int n3);

int main() {
	cout << min2(4,5) << endl;
	cout << min3(12,24,45) << endl;
	return 0;
}

int min2(int n1, int n2) {
	int n(0);
	if(n1<n2) {
		n = n1;
	} else {
		n = n2;
	}
	return n;
}

int min3(int n1, int n2, int n3) {
	return min2(min2(n1,n2),n3);
}
