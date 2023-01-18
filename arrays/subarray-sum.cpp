#include <iostream>
using namespace std;

//Normal apporach 
int subarray (int arr[], int n)
{
    int largestsum = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=i; j<n; j++)
        {
            int subarraysum = 0;
            for (int k=i; k<=j; k++)
            {
                subarraysum += arr[k];
            }
            largestsum = max(largestsum, subarraysum);
        }
    }
    return largestsum;
}

//Prefix sum apporach
int prefixsum (int arr[], int n)
{
    int prefix[n] = {0};
    prefix[0] = arr[0];
    for (int i=1; i<n; i++)
    {
        prefix[i] = prefix [i-1] + arr[i];
    }
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=i; j<n; j++)
        {
            int subarraysum = i>0 ? prefix[j]-prefix[i-1] : prefix[j];
            sum = max(sum, subarraysum);
        }
    }
    return sum;
}

int main ()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    int sum = prefixsum (arr, n);
    cout << "\nThe largest sum is : " << sum << endl;
    return 0;
}