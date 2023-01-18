#include <iostream>
using namespace std;

void bubblesort (int arr[], int n)
{
    for (int i=1; i<n; i++)
    {
        for (int j=0; j<=n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main ()
{
    int arr[] = {-6,1,-66,4,5,8,9,7,48,-8,36,-5,47};
    int n = sizeof(arr)/sizeof(int);
    cout << "\nThe sorted array is : ";
    bubblesort (arr,n);
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}