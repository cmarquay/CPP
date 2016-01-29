#include <iostream>
#include <string>
#include <array>
using namespace std;

const unsigned int DIM(10);

bool remplitGrille(array<array<bool, DIM>, DIM>& grille, unsigned int ligne, unsigned int colonne, char direction, unsigned int longueur);

int main() {
	array<array<bool, DIM>, DIM> grille;
	for(size_t i(0); i<DIM; ++i) {
		for(size_t j(0); j<DIM; ++j) {
			grille[i][j]=false;
		}
	}
	int x(0);
	do{
		cout << "Entrez coord. x: ";
		cin >> x;
		if(x>=0) {
			cout << "Entrez coord. y: ";
			int y(0);
			cin >> y;
			cout << "Entrez direction (N,S,E,O): ";
			char dir(' ');
			cin >> dir;
			cout << "Entrez taille : ";
			int taille(0);
			cin >> taille;
			bool b(remplitGrille(grille,x,y,dir,taille));
			cout << "Placement en (" << x << "," << y << ") direction " << dir << " longueur " << taille << " -> ";
			if(b) {
				cout << "succès" << endl;
			} else {
				cout << "ECHEC" << endl;
			}
		}
	}while(x>=0);
	for(size_t i(0); i<DIM; ++i) {
		for(size_t j(0); j<DIM; ++j) {
			if(grille[i][j]) {
				cout << ". ";
			} else {
				cout << "# ";
			}
		}
		cout << endl;
	}
	return 0;
}

bool remplitGrille(array<array<bool, DIM>, DIM>& grille, unsigned int ligne, unsigned int colonne, char direction, unsigned int longueur) {
	bool possible(false);
	int diff1(ligne);
	diff1 -= longueur;
	int diff2(colonne);
	diff2 -= longueur;
	switch(direction) {
		case('N'):	if(diff1+1<0) {
						possible = false;
					} else {
						int j(ligne);
						while(!grille[j][colonne] && j>diff1) {
							--j;
						}
						if(j==diff1) {
							for(int i(ligne); i>diff1; --i) {
								grille[i][colonne]=true;
							}
							possible = true;
						}
					}
		break;
		case('E'):	if(colonne+longueur-1>=DIM) {
						possible = false;
					} else {
						size_t j(colonne);
						while(!grille[ligne][j] && j<(colonne+longueur)) {
							++j;
						}
						if(j==colonne+longueur) {
							for(size_t i(colonne); i<(colonne+longueur); ++i) {
								grille[ligne][i]=true;
							}
							possible = true;
						}
					}
		break;
		case('S'):	if(ligne+longueur-1>=DIM) {
						possible = false;
					} else {
						size_t j(ligne);
						while(!grille[j][colonne] && j<(ligne+longueur)) {
							++j;
						}
						if(j==colonne+longueur) {
							for(size_t i(ligne); i<(ligne+longueur); ++i) {
								grille[i][colonne]=true;
							}
							possible = true;
						}
					}
		break;
		case('O'):	if(diff2+1<0) {
						possible = false;
					} else {
						int j(colonne);
						while(!grille[ligne][j] && j>diff2) {
							--j;
						}
						if(j==diff2) {
							for(int i(colonne); i>diff2; --i) {
								grille[ligne][i]=true;
							}
							possible = true;
						}
					}
		break;
		default: possible = false;
		break;
	}
	return possible;
}
