#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> elements_en_indice(vector<int> tab);

int main() {
	vector<int> A(6);
	A[0] = 4;
	A[1] = 2;
	A[2] = 8;
	A[3] = 0;
	A[4] = 7;
	A[5] = 1;
	vector<int> T = elements_en_indice(A);
	for(unsigned int i(0); i < T.size(); ++i) {
	  cout << T[i] << " ";
	}
	cout << endl;
	return 0;
}

vector<int> elements_en_indice(vector<int> tab) {
	vector<int> tab2(tab.size()/2);
	for(size_t i(0); i<tab.size(); ++i) {
		if(i%2==0) {
			tab2[tab[i+1]]=tab[i];
		}
	}
	return tab2;
}
