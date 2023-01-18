#include <iostream>
using namespace std;

int firstocc (int arr[], int n, int key)
{
    // base case
    if (n==0)
        return -1;
    //recursion case
    if (arr[0]==key)
        return 0;
    int subindex = firstocc (arr+1, n-1, key);
    if (subindex!=-1)
        return subindex+1;
    
    return -1;
}

int lastocc (int arr[], int n, int key)
{
    //base case
    if (n==0)
        return -1;
    //recursion case
    int subindex = lastocc (arr+1, n-1, key);
    if (subindex == -1)
    {
        if (arr[0]==key)
            return 0;
        else 
            return -1;
    }   
    else    
        return subindex+1;
}

int main ()
{
    int arr[] = {1,2,3,4,5,6,7,8,2,9};
    int n = sizeof(arr)/sizeof(int);
    int key; 
    cin >> key;
    cout << lastocc(arr, n, key) << endl;
    return 0;
}