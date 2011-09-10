//============================================================================
// Name        : Hello.cpp
// Author      : Aaron D Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string a;
	string b;

	cout << "Please enter the first half of your greeting: " << endl;
	cin >> a;
	cout << "Please enter the second half of your greeting: " << endl;
	cin >> b;

	if ( a == "Hello" ){
		cout << a << "?" << " " << "I thought you'd say that!" << endl;
	} else
		cout << a << "?" << " " << "Wow!, that's a new one..." << endl;

	if ( b == "There" ){
		cout << b << "?" << " " << "I thought you'd say that too." << endl;
	} else
		cout << b << "?" << " " << "Wow!, and that is certainly new." << endl;

	cout << a << " " << b << endl;

	return 0;
}
