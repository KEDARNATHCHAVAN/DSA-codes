#include <iostream>
#include <vector>
using namespace std;

void countingsort (int arr[], int n)
{
    //find the largest element
    int large = -1;
    for (int i=0; i<n; i++)
    {
        large = max(large,arr[i]);
    }
    
    //create a count array vector
    vector <int> freq (large+1, 0);

    //update the freq array 
    for (int i=0; i<n; i++)
        freq[arr[i]]++;

    //put back the elements from freq into original array 
    int j=0;
    for (int i=0; i<=large; i++)
    {
        while (freq[i]>0)
        {
            arr[j]=i;
            freq[i]--;
            j++;
        }
    }
}

int main ()
{
    int arr[] = {6,1,66,4,5,8,9,7,48,8,36,5,47};
    int n = sizeof(arr)/sizeof(int);
    cout << "\nThe sorted array is : ";
    countingsort (arr,n);
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}