#include <iostream>
using namespace std;

int main()
{
  cout << "Donnez l'heure de début de la location (un entier) : ";
  int debut(25);
  cin >> debut;

  cout << "Donnez l'heure de fin de la location (un entier) : ";
  int fin(25);
  cin >> fin;

  /*****************************************************
   * Compléter le code à partir d'ici
   *****************************************************/
	
	if(debut<0 or debut>24 or fin<0 or fin>24) {
		cout << "Les heures doivent être comprises entre 0 et 24 !" << endl;
	} else {
		if(debut == fin) {
			cout << "Bizarre, vous n'avez pas loué votre vélo bien longtemps !" << endl;
		} else {
			if(debut>fin) {
				cout << "Bizarre, le début de la location est après la fin ..." << endl;
			} else {
				int duree1(0);
				int duree2(0);
				if(fin<=7) {
					duree1 = fin - debut;
				} else {
					if(fin<=17) {
						if(debut>=7) {
							duree2 = fin - debut;
						} else {
							duree2 = fin - 7;
							duree1 = 7 - debut;
						}
					} else {
						if(debut>=17) {
							duree1 = fin - debut;
						} else {
							if(debut>=7) {
								duree1 = fin - 17;
								duree2 = 17 - debut;
							} else {
								duree1 = fin - 10 - debut;
								duree2 = 10;
							}
						}
					}
				}
				cout << "Vous avez loué votre vélo pendant" << endl;
				int tarif = duree1 + 2*duree2;
				if(duree1>0) {
					cout << duree1 << " heure(s) au tarif horaire de 1 franc(s)" << endl;
				}
				if(duree2>0) {
					cout << duree2 << " heure(s) au tarif horaire de 2 franc(s)" << endl;
				}
				cout << "Le montant total à payer est de " << tarif << " franc(s)." << endl;
			}
		}
	}

  /*******************************************
   * Ne rien modifier après cette ligne.
   *******************************************/

  return 0;
}
