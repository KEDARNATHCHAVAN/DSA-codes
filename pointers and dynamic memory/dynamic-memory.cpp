#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    cout << "\nEnter the values are : ";
    for (int i=0; i<n; i++)
    {
        arr[i] = i;
        cout << arr[i] << " ";
    }
    delete [] arr;
    return 0;
}