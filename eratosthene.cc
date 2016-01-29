#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<bool> supprimes(100, false);
	supprimes[0]=true;
	supprimes[1]=true;
	int n(2);
	do{
		for(int i(n+1); i<100; ++i) {
			if(i%n==0) {
				supprimes[i]=true;
			}
		}
		++n;
		while(supprimes[n] && n<100) {
			++n;
		}
	}while(n<100);
	for(int i(0); i<100; ++i) {
		if(!supprimes[i]) {
			cout << i << " ";
		}
	}
	return 0;
}
