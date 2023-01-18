#include <iostream>
using namespace std;

void reversearray (int arr[], int n)
{
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        swap (arr[s],arr[e]);
        s++;
        e--;
    }
    cout << "\nAfter reversing the array : ";
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main ()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout << "\nBefore reversing the array : ";
    for (int i=0; i<sizeof(arr)/sizeof(int); i++)
    {
        cout << arr[i] << " ";
    }
    int n = sizeof(arr)/sizeof(int);
    reversearray (arr, n);
    return 0;
}