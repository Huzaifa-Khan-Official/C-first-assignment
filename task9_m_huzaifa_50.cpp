#include <iostream>
using namespace std;

main() {
	float num1, num2;
	cout << "Number 1: ";
	cin >> num1;
	cout << "\nNumber 2: ";
	cin >> num2;
	
	if (num1 > num2) {
		cout << num1 << " is greater than " << num2;
	} else {
		cout << num2 << " is greater than " << num1;
	}
}
