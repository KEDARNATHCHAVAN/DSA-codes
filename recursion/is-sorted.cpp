#include <iostream>
using namespace std;

bool is_sorted (int arr[], int n)
{
    // base case 
    if (n==1 or n==0)
        return true;
    // recursion
    if (arr[0]<arr[1] and is_sorted(arr+1,n-1))
        return true;
    
    return false;
}

int main ()
{
    int arr[] = {1,2,3,4,5,63,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    cout << is_sorted(arr,n) << endl;
    return 0;
}