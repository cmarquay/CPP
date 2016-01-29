#include <iostream>
#include <cmath>
using namespace std;

int  main() {

cout << "Tables de multiplication" << endl;

for(int i(2); i<=10; ++i) {
	for(int j(1); j<=10; ++j) {
		cout << "  " << j << " * " << i << " = " << i*j << endl;
	}
	cout << endl;
}

return 0;
}
