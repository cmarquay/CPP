#include <iostream>
#include <cmath>
using namespace std;

int  main() {
	
	int u0=1;
	double u(u0);
	double v(u);

	for(int i(1); i<=10; ++i) {
		u /= i;
		v += u;
		cout << "U" << i << " = " << u << endl;
		cout << "V" << i << " = " << v << endl;
	}

return 0;
}
