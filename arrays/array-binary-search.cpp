#include <iostream>
using namespace std;

int binarysearch (int arr[], int n, int key)
{
    int s=0, e=n-1;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            e = mid-1;
        else
            s = mid+1;
    }
    return -1;
}

int main ()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    cout << "\nEnter the key to be searched : ";
    int key;
    cin >> key;
    int i = binarysearch (arr, n, key);
    if (i!= -1)
        cout << "\nThe key " << key << " is present at index "<< i << endl;
    else 
        cout << "\nThe key is not found !\n";
    return 0;
}