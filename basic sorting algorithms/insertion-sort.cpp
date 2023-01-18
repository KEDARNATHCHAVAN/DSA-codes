#include <iostream>
using namespace std;

void insertionsort (int arr[], int n)
{
    for (int i=1; i<n; i++)
    {
        int current = arr[i];
        int prev = i-1;
        while (prev >= 0 and arr[prev]>current)
        {   
            arr[prev+1] = arr[prev];
            prev = prev-1;
        }
        arr[prev+1] = current;
    }
}

int main ()
{
    int arr[] = {-6,1,-66,4,5,8,9,7,48,-8,36,-5,47};
    int n = sizeof(arr)/sizeof(int);
    cout << "\nThe sorted array is : ";
    insertionsort (arr,n);
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}