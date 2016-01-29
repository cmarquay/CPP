/*******************************************
 * Complétez le programme à partir d'ici.
 *******************************************/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Chiffres {
	char romain;
	int arabe;
};
int romain_en_arabe(char s);
int romains_en_arabes(string s);
string arabes_en_romains(int n);

const int MAX(3999);
vector<Chiffres> SYMBOLES = { {'M',1000},{'D',500},{'C',100},{'L',50},{'X',10},{'V',5},{'I',1} };

int romain_en_arabe(char s) {
	bool b(false);
	size_t j(0);
	while(j<SYMBOLES.size() && !b) {
		if(SYMBOLES[j].romain==s) {
			b=true;
		} else {
			++j;
		}
	}
	return SYMBOLES[j].arabe;
}

int romains_en_arabes(string s) {
	int arabes(0);
        size_t i(0);
        int j(0);
	do{
		switch (s[i]) {
			case 'I' :	if(i<s.size()-1 && (s[i+1]!='X' && s[i+1]!='V' && s[i+1]!='I')) {
							++j;
	        			} else {	        		
				        	if(i<s.size()-1 && s[i+1]=='V') {
					       		arabes += 4;
					       		i += 2;
				        	} else {
				        		if(i<s.size()-1 && s[i+1]=='X') {
				        			arabes += 9;
				        			i +=2;
				        		} else {
					        		int cpt = 0;
						       		while (i<s.size() && s[i]=='I') {
						       			arabes += romain_en_arabe(s[i]);
						       			++cpt;
						       			++i;
						       		}
						       		if(cpt>=4) {
						       			++j;
						       		}
				        		}
				        	}
				       	}
        	break;
        	case 'V' :	if(i<s.size()-1 && s[i+1]!='I') {
							++j;
						} else {        		
			        		arabes += 5;
			        		++i;
			        	}
        	break;
        	case 'X' : if(i<s.size()-1 && (s[i+1]!='C' && s[i+1]!='L' && s[i+1]!='X' && s[i+1]!='V' && s[i+1]!='I')) {
							++j;
						} else {	        		
			        		if(i<s.size()-1 && s[i+1]=='L') {
				        		arabes += 40;
				        		i += 2;
			        		} else {
			        			if(i<s.size()-1 && s[i+1]=='C') {
			        				arabes += 90;
			        				i +=2;
			        			} else {
				        			int cpt = 0;
					        		while (i<s.size() && s[i]=='X') {
					        			arabes += 10;
					        			++cpt;
					        			++i;
					        		}
					        		if(cpt>=4) {
					        			++j;
					        		}
			        			}
			        		}
			        	}
        	break;
        	case 'L' :	if(i<s.size()-1 && (s[i+1]!='X' && s[i+1]!='V' && s[i+1]!='I')) {
							++j;
						} else {        		
			        		arabes += 50;
			        		++i;
			        	}
            break;
        	case 'C' : if(i<s.size()-1 && (s[i+1]!='M' && s[i+1]!='D' && s[i+1]!='C' && s[i+1]!='L' && s[i+1]!='X' && s[i+1]!='V' && s[i+1]!='I')) {
							++j;
						} else {	        		
			        		if(i<s.size()-1 && s[i+1]=='D') {
				        		arabes += 400;
				        		i += 2;
			        		} else {
			        			if(i<s.size()-1 && s[i+1]=='M') {
			        				arabes += 900;
			        				i +=2;
			        			} else {
				        			int cpt = 0;
					        		while (i<s.size() && s[i]=='C') {
					        			arabes += 100;
					        			++cpt;
					        			++i;
					        		}
					        		if(cpt>=4) {
					        			++j;
					        		}
			        			}
			        		}
			        	}
            break;
        	case 'D' : if(i<s.size()-1 && (s[i+1]!='C' && s[i+1]!='L' && s[i+1]!='X' && s[i+1]!='V' && s[i+1]!='I')) {
							++j;
						} else {        		
			        		arabes += 500;
			        		++i;
			        	}
            break;
        	case 'M' : if(i<s.size()-1 && (s[i+1]!='M' && s[i+1]!='D' && s[i+1]!='C' && s[i+1]!='L' && s[i+1]!='X' && s[i+1]!='V' && s[i+1]!='I')) {
							++j;
						} else {	        		
			        		int cpt = 0;
					        while (i<s.size() && s[i]=='M') {
					        	arabes += 1000;
					        	++cpt;
					        	++i;
					        }
					        if(cpt>=4) {
					        	++j;
			        		}
			        	}
            break;
            default : ++j;
	        break;
        }
    }while(i<s.size() && j==0);
	return arabes;
}

string arabes_en_romains(int n) {
	if(n>MAX) {
		return string("pas représentable :-(");
	} else {
		int a(0);
        int tmp(0);
        string romains("");
        for(size_t k(0); k<SYMBOLES.size(); k+=2) {
        	if(k==0) {
        		a = n/(SYMBOLES[k].arabe);
        		tmp = n%(SYMBOLES[k].arabe);
        	} else {
        		a = tmp/(SYMBOLES[k].arabe);
            	tmp = tmp%(SYMBOLES[k].arabe);
        	}
        	switch (a) {
	        	case 9 :	switch (k) {
					    		case 6 : romains+="IX";
								break;
								case 4 : romains+="XC";
								break;
								case 2 : romains+="CM";
								break;
								default : romains += "";
								break;
							}
				break;
	        	case 8 :	switch (k) {
					    		case 6 : romains+="VIII";
								break;
								case 4 : romains+="LXXX";
								break;
								case 2 : romains+="DCCC";
								break;
								default : romains += "";
								break;
							}
	        	break;
	        	case 7 :	switch (k) {
					    		case 6 : romains+="VII";
								break;
								case 4 : romains+="LXX";
								break;
								case 2 : romains+="DCC";
								break;
								default : romains += "";
								break;
							}
				break;
	        	case 6 :	switch (k) {
					    		case 6 : romains+="VI";
								break;
								case 4 : romains+="LX";
								break;
								case 2 : romains+="DC";
								break;
								default : romains += "";
								break;
							}
				break;
        		case 5 :	switch (k) {
				        		case 6 : romains+="V";
								break;
								case 4 : romains+="L";
								break;
								case 2 : romains+="D";
								break;
								default : romains += "";
								break;
							}
				break;
        		case 4 :	switch (k) {
				        		case 6 : romains+="IV";
								break;
								case 4 : romains+="XL";
								break;
								case 2 : romains+="CD";
								break;
								default : romains += "";
								break;
							}
            	break;
        		case 3 :	switch (k) {
				        		case 6 : romains+="III";
								break;
				        		case 4 : romains+="XXX";
								break;
								case 2 : romains+="CCC";
								break;
								case 0 : romains+="MMM";
								break;
								default : romains += "";
								break;
							}
            	break;
        		case 2 :	switch (k) {
				        		case 6 : romains+="II";
								break;
				        		case 4 : romains+="XX";
								break;
								case 2 : romains+="CC";
								break;
								case 0 : romains+="MM";
								break;
								default : romains += "";
								break;
							}
            	break;
        		case 1 :	switch (k) {
				        		case 6 : romains+="I";
								break;
				        		case 4 : romains+="X";
								break;
								case 2 : romains+="C";
								break;
								case 0 : romains+="M";
								break;
								default : romains += "";
								break;
							}
            	break;
            	default : romains += "";
            	break;
        	}
        }
        return romains;
	}
}

/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

int main()
{
  // Partie pour vous obliger à définir proprement SYMBOLES
  cout << "Le chiffre romain pour " << SYMBOLES[6].arabe << " est "
       << SYMBOLES[6].romain << "." << endl;

  string romain;

  cout << "Entrez un nombre en chiffres romains : ";
  cin >> romain;
  cout << romain << " --> " << romains_en_arabes(romain) << endl;

  int arabe(0);
  do {
    cout << "Entrez un nombre en chiffres arabes (entre 1 et " << MAX << ") : ";
    cin >> arabe;
  } while ((arabe <= 0) or (arabe > MAX)) ;
  cout << arabe << " s'écrit " << arabes_en_romains(arabe) << " en chiffres romains" << endl;
}
