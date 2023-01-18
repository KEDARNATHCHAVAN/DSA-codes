#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int arr[] = {-6,1,-66,4,5,8,9,7,48,-8,36,-5,47};
    int n = sizeof(arr)/sizeof(int);
    cout << "\nThe sorted array is : ";
    sort(arr, arr+n);
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    cout << "\nThe reverse sorted array is : ";
    reverse(arr, arr+n);
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    return 0;
}

/* We can also declare a compare function to reverse the sort
    bool compare (int a, int b)
    {
        return a<b; or return a>b;
    }
    
    and we can pass this function to the sort function
        sort(arr, arr+n, compare)
*/