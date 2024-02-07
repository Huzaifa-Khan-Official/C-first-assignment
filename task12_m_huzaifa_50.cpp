#include <iostream>
using namespace std;

main() {
	float WIP, HII, BMI;
	cout << "Please give the values of the following: ";
	cout << "\nWeight In Pounds: ";
	cin >> WIP;
	cout << "\nHeight In Inches: ";
	cin >> HII;
	BMI = (WIP * 703) / (HII * HII);
	
	// Output
	cout << "\nYour Body Mass Index: " << BMI;
	cout << "\nBMI VALUES";
	cout << "\nUnderweight: less than 18.5";
	cout << "\nNormal: 		between 18.5 and 24.9";
	cout << "\nOverweight: 	between 25 and 29.9";
	cout << "\nObese: 		30 or greater";
}
