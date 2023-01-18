#include <iostream>
using namespace std;

int powerfun (int a, int n)
{
    if (n==0)
        return 1;
    return a*powerfun(a, n-1);
}

int main ()
{
    int a,n;
    cin >> a >> n;
    cout << powerfun (a, n) << endl;
    return 0;
}