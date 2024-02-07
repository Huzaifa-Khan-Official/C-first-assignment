#include <iostream>
using namespace std;

main ()
{
	string u, t, h, th, res;
     cout << "Please enter single digit values of the following: ";
     cout << "\nUnit (U): ";
     cin >> u;
     cout << "\nTen (T): ";
     cin >> t;
     cout << "\nHundred (H): ";
     cin >> h;
     cout << "\nThousand (TH): ";
     cin >> th;
     res =  th + h + t + u;
     cout << "\nResult: " << res;
}
