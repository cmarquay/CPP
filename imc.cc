#include <iostream>
using namespace std;

int  main() {
  double poids(74.5);
  double taille(1.75);

  cout << "Entrez un poids  (en kg) : ";
  cin >> poids;
  cout << "Entrez une taille (en m) : ";
  cin >> taille;

  double imc(poids / (taille * taille));

  cout << "Pour "   << poids
       << " kg et " << taille
       << " m, l'IMC est de " << imc
       << endl;
  return 0;
}
