#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool nextToken(string const& str, int& from, int& len);

int main() {
	cout << "Entrez une chaîne : ";
	string str(" ");
	getline(cin,str);
	cout << "Les mots de \"" << str << "\" sont : " << endl;
	int from(0);
	int len(0);
	while(nextToken(str,from,len)) {
		cout << "'" << str.substr(from,len) << "'" << endl;
		from += len;
	}
	return 0;
}

bool nextToken(string const& str, int& from, int& len) {
	while(from<str.size() && str[from]==' ') {
		++from;
	}
	len=0;
	while(len<(str.size()-from) && str[from+len]!=' ') {
		++len;
	}
	return len!=0;
}
