#include <iostream>
using namespace std;

main()
{
	int a, b, c;
	cout << "Value of a: ";
	cin >> a;
	cout << "\nValue of b: ";
	cin >> b;
	c = a;
	a = b;
	b = c;
	cout << "\nValue of a: " << a;
	cout << "\nValue of b: " << b;
}
