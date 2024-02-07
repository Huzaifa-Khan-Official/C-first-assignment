#include <iostream>
using namespace std;

int main() {
	// Input
    int input;
    string res;
    cout << "Enter a four-digit number: ";
    cin >> input;

    // Extracting digits
	// 6543   
    int digit1 = input % 10;
	// 3
    int digit2 = (input / 10) % 10;
	// 4		    
    int digit3 = (input / 100) % 10;
	// 5   
    int digit4 = input / 1000;
	// 6   

    // Rearanging number in inverse form
    int inverse = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;
	// 3000 + 400 + 50 + 6 = 3456   

    // Output
    if (input == inverse) {
    	res = "It's a palindrome.";
	} else {
		res = "It's not a palindrome.";
	}
	
	cout << res;
}

