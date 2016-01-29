#include <iostream>
using namespace std;

int  main() {
	
	const int BASE(4);
	double fromage(800.0);
	double eau(2.0);
	double ail(2.0);
	double pain(400.0);
	int nbConvives(4);
	
	cout << "Entrez le nombre de personne(s) conviees a la fondue : ";
	cin >> nbConvives;
	
	double tmp(nbConvives);
	fromage *= tmp/BASE;
	eau *= tmp/BASE;
	ail *= tmp/BASE;
	pain *= tmp/BASE;
	
	cout << "Pour faire une fondue fribourgeoise pour "   << nbConvives << " personnes, il vous faut : " << endl;
	cout << " - " << eau << " dl d'eau" << endl;
	cout << " - " << ail << " gousse(s) d'ail" << endl;
	cout << " - " << pain << " gr de pain" << endl;
	cout << " - du poivre a volonte" << endl;
  
  return 0;
}

