//============================================================================
// Name        : Week2_Set1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	int n;
	string c;
	cin >> n;
	set<string> unic_words;
	for(int i = 0; i < n; ++i){
		cin >> c;
		unic_words.insert(c);
	}
	cout << unic_words.size() << endl;
	return 0;
}
