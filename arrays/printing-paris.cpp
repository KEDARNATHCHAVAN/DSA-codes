#include <iostream>
using namespace std;

void printpairs (int arr[], int n)
{
    cout << "\nThe possible pairs are : \n";
    for (int i=0; i<n; i++)
    {
        int a = arr[i];
        for (int j=i+1; j<n; j++)
        {
            int b = arr[j];
            cout << "(" << a << "," << b << ") ";
        }
        cout << endl;
    }
}
int main ()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    printpairs (arr, n);
    return 0;
}