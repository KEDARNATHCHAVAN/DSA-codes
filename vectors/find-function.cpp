#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main ()
{
    vector <int> arr = {1,2,3,4,5,6,7,8,9};
    int key;
    cin >> key;

    vector <int> :: iterator it = find(arr.begin(), arr.end(), key);
    cout << it - arr.begin() << endl;
    return 0;
}