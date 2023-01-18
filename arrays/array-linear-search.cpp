#include <iostream>
using namespace std;

int linearsearch (int arr[], int n, int key)
{
    for (int i=0; i<n; i++)
    {
        if (arr[i]==key)    
            return i;
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
    int i = linearsearch (arr, n, key);
    if (i!= -1)
        cout << "\nThe key " << key << " is present at index "<< i << endl;
    else 
        cout << "\nThe key is not found !\n";
    return 0;
}