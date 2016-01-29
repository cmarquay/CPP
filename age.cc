#include <iostream>
using namespace std;

int  main() {
  int age(34);
  int annee(2015-age);

  cout << "Entrez votre age  (en annees) : ";
  cin >> age;

  annee = 2015 - age;
  
  cout << "Votre annee de naissance est "   << annee << "." << endl;
  
  return 0;
}
