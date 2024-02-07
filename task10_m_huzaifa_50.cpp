#include <iostream>
using namespace std;

main () {
	int num1, num2;
	cout << "Number 1: ";
	cin >> num1;
	cout << "Number 2: ";
	cin >> num2;
	
	if (num1 % num2 == 0) {
		cout << num1 << " is multiple of " << num2;
	} else {
		cout << num1 << " is not multiple of " << num2;
	}
}
