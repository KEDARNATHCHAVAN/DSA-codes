#include <iostream>
using namespace std;

//Subarray sum using kadane's algorithm
int subarraysum (int arr[], int n)
{
    int cs = 0; 
    int largestsum = 0;
    for (int i=0; i<n; i++)
    {
        cs = cs += arr[i];
        if (cs < 0)
            cs = 0;
        largestsum = max (largestsum, cs);
    }   
    return largestsum;
}

int main ()
{
    int arr[] = {1,-1,2,3,-4,5,-6,8,-10,11,12};
    int n = sizeof(arr)/sizeof(int);
    int sum = subarraysum (arr, n);
    cout << "\nThe largest subarray sum is : " << sum ; 
    return 0;
}