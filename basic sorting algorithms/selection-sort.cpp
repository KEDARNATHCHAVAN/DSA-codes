#include <iostream>
using namespace std;

void selectionsort (int arr[], int n)
{
    for (int pos=0; pos<n-1; pos++)
    {
        int current = arr[pos];
        int min_pos = pos;

        //find out the minimum element
        for (int j=pos; j<n; j++)
        {
            if (arr[j]<arr[min_pos])
            {
                min_pos = j;
            }
        }
        //swap outside the loop
        swap (arr[min_pos], arr[pos]);
    }
}

int main ()
{
    int arr[] = {-6,1,-66,4,5,8,9,7,48,-8,36,-5,47};
    int n = sizeof(arr)/sizeof(int);
    cout << "\nThe sorted array is : ";
    selectionsort (arr,n);
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}