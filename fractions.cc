#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Fraction {
	int numerateur;
	int denominateur;
};

unsigned int pgcd(unsigned int a, unsigned int b);
Fraction init_frac(int num, int den);
void afficher_frac(Fraction const& fr);
Fraction add_frac(Fraction const& fr1, Fraction const& fr2);
Fraction mult_frac(Fraction const& fr1, Fraction const& fr2);
Fraction mult_scal_frac(Fraction const& fr1, int n);

int main() {
	Fraction fr1;
	fr1 = init_frac(4,25);
	Fraction fr2;
	fr2 = init_frac(15,2);
	afficher_frac(fr1);
	afficher_frac(fr2);
	afficher_frac(add_frac(fr1,fr2));
	afficher_frac(mult_frac(fr1,fr2));
	afficher_frac(mult_scal_frac(fr1,4));
	return 0;
}

unsigned int pgcd(unsigned int a, unsigned int b) {
	unsigned int m;
	if (a<b) {
		m=a;
	} else {
		m=b;
	}
	while ((a%m!=0) or (b%m!=0)) {
		--m;
	}
	return m;
}

Fraction init_frac(int num, int den) {
	const unsigned int div(pgcd(abs(num),abs(den)));
	if (num < 0 and den < 0) {
		num = -num;
		den = -den;
	}
	return {num/div,den/div};
}

void afficher_frac(Fraction const& fr) {
	cout << fr.numerateur << "/" << fr.denominateur << endl;
}

Fraction add_frac(Fraction const& fr1, Fraction const& fr2) {
	return init_frac(((fr1.numerateur*fr2.denominateur)+(fr2.numerateur*fr1.denominateur)),(fr1.denominateur*fr2.denominateur));
}

Fraction mult_frac(Fraction const& fr1, Fraction const& fr2) {
	return init_frac((fr1.numerateur*fr2.numerateur),(fr1.denominateur*fr2.denominateur));
}

Fraction mult_scal_frac(Fraction const& fr1, int n) {
	return init_frac((fr1.numerateur*n),fr1.denominateur);
}
