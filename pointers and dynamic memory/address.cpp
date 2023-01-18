#include <iostream>
using namespace std;

int main ()
{
    int a = 10;
    float b = 20.34;
    cout << &a << endl << &b << endl;
    int *p = &a;
    int **ptr = &p;
    cout << p << endl << ptr << endl;
    return 0;
}