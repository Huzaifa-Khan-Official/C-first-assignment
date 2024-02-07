#include <iostream>
using namespace std;

main()
{
	int x1, x2, y1, y2;
    float s;
    cout << "Please give the values of the following: ";
    cout << "\nx1: ";
    cin >> x1;
    cout << "\nx2: ";
    cin >> x2;
    cout << "\ny1: ";
    cin >> y1;
    cout << "\ny2: ";
    cin >> y2;
    s = (y2 - y1) / (x2 - x1);
    cout << "Slope = " << s;
}
