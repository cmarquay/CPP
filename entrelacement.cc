#include <iostream>
#include <vector>
using namespace std;

vector<int> entrelace(vector<int> tab1, vector<int> tab2);

int main() {
	vector<int> tab1 = { 1, 2, 3 };
	vector<int> tab2 = { 4, 5, 6 };
	vector<int> tab3 = entrelace(tab1,tab2);
	for(size_t i(0); i<tab3.size(); ++i) {
		cout << tab3[i] << " ";
	}
	cout << endl;
	vector<int> tab4 = { 4, 5, 6, 7, 8 };
	vector<int> tab5 = entrelace(tab1,tab4);
	for(size_t i(0); i<tab5.size(); ++i) {
		cout << tab5[i] << " ";
	}
	cout << endl;
	vector<int> tab6;
	vector<int> tab7 = entrelace(tab1,tab6);
	for(size_t i(0); i<tab7.size(); ++i) {
		cout << tab7[i] << " ";
	}
	return 0;
}

vector<int> entrelace(vector<int> tab1, vector<int> tab2) {
	if(tab1.size()==0) {
		return tab2;
	}
	if(tab2.size()==0) {
		return tab1;
	}
	vector<int> tab3(tab1.size()+tab2.size());
	int k(0);
	int l(0);
	for(size_t i(0); i<tab3.size(); ++i) {
		if((i%2==0 or l>=tab2.size()) && k<tab1.size()) {
			tab3[i]=tab1[k];
			++k;
		} else {
			if((i%2!=0 or k>=tab1.size()) && l<tab2.size()) {
				tab3[i]=tab2[l];
				++l;
			}
		}
	}
	return tab3;
}
