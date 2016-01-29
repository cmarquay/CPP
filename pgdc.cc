#include <iostream>
#include <cmath>
using namespace std;

int  main() {

	int a(0);
	do{
		cout << "Entrez un premier entier positif : ";
		cin >> a;
	}while(a<=0);
	
	int b(0);
	do{
		cout << "Entrez un second entier positif : ";
		cin >> b;
	}while(b<=0);

	int x(a);
	int y(b);
	int u1(1);
	int v1(0);
	int u2(0);
	int v2(1);
	
	do{
		int tmp1(u2);
		int tmp2(v2);
		u2 = u1 - (u2*(x/y));
		v2 = v1 - (v2*(x/y));
		u1 = tmp1;
		v1 = tmp2;
		int tmp3(y);
		y = x%y;
		x = tmp3;
	}while(y!=0);
	cout << "PGDC(" << a << ", " << b << ")=" << x << endl;
	cout << u1 << " * " << a << " + " << v1 << " * " << b << " = " << (u1*a+v1*b) << endl;

return 0;
}
