#include <iostream>
using namespace std;

int main ()
{
    int a; 
    cin >> a;
    if (a&1)
        cout << "\nODD";
    else 
        cout << "\nEVEN";
    return 0;
}