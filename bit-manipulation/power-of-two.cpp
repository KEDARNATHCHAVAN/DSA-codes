#include <iostream>
using namespace std;

int main ()
{
    int n; 
    cin >> n;
    if ((n&(n-1))==0)
        cout << "\nYES";
    else 
        cout << "\nNO";
    return 0;
}