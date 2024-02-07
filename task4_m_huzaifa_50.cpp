#include <iostream>
using namespace std;

main() 
{
	string inp, out;
	cout << "Please give single digit of the following: ";
	cout << "\nUnit (U): ";
	cin >> inp;
	cout << "\nTen (T): ";
	out = inp;
	cin >> inp;
	cout << "\nHundred (H): ";
	out = inp + out;
	cin >> inp;
	cout << "\nThousand (TH): ";
	out = inp + out;
	cin >> inp;
	out = inp + out;
	cout << "\nResult: " << out;
}
