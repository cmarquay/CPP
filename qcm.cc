#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct QCM {
	string question;
	vector<string> reponses;
	unsigned int solution;
};

struct Examen {
	vector<QCM> cc;
};

void affiche(QCM const& q);
unsigned int demander_nombre(unsigned int a, unsigned int b);
unsigned int poser_question(QCM const& q);
void creer_examen(Examen& cc);

int main() {
	Examen cc1;
	creer_examen(cc1);
	unsigned int n(0);
	unsigned int score(0);
	for(size_t i(0); i<(cc1.cc).size(); ++i) {
		n=poser_question((cc1.cc)[i]);
		if(n==(cc1.cc)[i].solution) {
			++score;
		}
	}
	cout << "Vous avez trouvé " << score << " bonnes réponses sur 3." << endl;
	return 0;
}

void affiche(QCM const& q) {
	cout << q.question << endl;
	for(size_t i(0); i<(q.reponses).size(); ++i) {
		cout << (i+1) << " - " << (q.reponses)[i] << endl;
	}
}

unsigned int demander_nombre(unsigned int a, unsigned int b) {
	unsigned int c(0);
	do {
		cout << "Entrez votre réponse par un chiffre compris entre " << a << " et " << b << " : ";
		cin >> c;
		if(c<a || c>b) {
			cout << "Chiffre incorrect !" << endl;
		}
	}while(c<a || c>b);
	return c;
}

unsigned int poser_question(QCM const& q) {
	affiche(q);
	unsigned int n(0);
	n = demander_nombre(1,(q.reponses).size());
	return n;
}

void creer_examen(Examen& cc) {
	(cc.cc) = {{"Combien de dents possède un éléphant adulte ?",{"32","de 6 à 10","beaucoup","24","2"},2},{"Laquelle des instructions suivantes est un prototype de fonction ?",{"int f(0);","int f(int 0);","int f(int i);","int f(i);"},3},{"Qui pose des questions stupides ?",{"le prof. de math","mon copain/ma copine","le prof. de physique","moi","le prof. d'info","personne, il n'y a pas de question stupide","les sondages"},6}};
}
