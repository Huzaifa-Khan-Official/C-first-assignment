#include <iostream>
using namespace std;

main () {
	int year;
	cout << "Enter the year to find whether it is leap year or not: ";
	cin >> year;
	
	if (( year %4 ==0 && year % 100 != 0) || (year % 400 == 0)) { 
	cout << "It's a leap year";
	} else {
	cout << "It is not a leap year"; 
	}
}
