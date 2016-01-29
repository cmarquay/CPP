#include <iostream>
#include <iomanip> // pour setprecision()
#include <cmath>   // pour exp()
using namespace std;

int main()
{
  // réduire le format d'affichage
  cout << setprecision(4);

  constexpr double population_initiale(7.0); // population initiale, en milliard d'humains
  constexpr int    annee_depart(2011);       // année initiale
  double taux(1.2);                          // taux de croissance, en %

  int annee(annee_depart);                // année de calcul
  double population(population_initiale); // population mondiale pour l'année 'annee'

  cout << "====---- PARTIE 1 ----====" << endl;
  cout << "Population en " << annee << " : " << population
       << endl;

  /*****************************************************
   * Compléter le code à partir d'ici
   *****************************************************/

  // ===== PARTIE 1 =====
	int annee_fin(0);
	do{
		cout << "Quelle année (> " << annee_depart << ") ? ";
		cin >> annee_fin;
	}while(annee_fin<=annee_depart);
	double population_finale(population_initiale*exp((annee_fin-annee_depart)*taux/100.0));
	cout << "Population en " << annee_fin << " : " << population_finale << endl;

  // ===== PARTIE 2 =====
	cout << endl << "====---- PARTIE 2 ----====" << endl;
	double population_cible(0);
	do{
		cout << "Combien de milliards (> " << population_initiale << ") ? ";
		cin >> population_cible;
	}while(population_cible<=population_initiale);
	cout << "Population voulue : " << population_cible << endl;
	do{
		population *= exp(taux/100.0);
		++annee;
		cout << "Population en " << annee << " : " << population << endl;
	}while(population<population_cible);

  // ===== PARTIE 3 =====
	cout << endl << "====---- PARTIE 3 ----====" << endl;
	population = population_initiale;
	annee = annee_depart;
	double ref(population_initiale);
	do{
		population *= exp(taux/100.0);
		++annee;
		if(population>=2*ref) {
			taux /=2.0;
			ref = population;
		}
		cout << "Population en " << annee << " : " << population << " ; taux de croissance : " << taux << " %" << endl;
	}while(population<population_cible);

  /*******************************************
   * Ne rien modifier après cette ligne.
   *******************************************/

  return 0;
}
