#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // declare a vector
    vector<int> arr;

    // fill with values
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    // remove values
    arr.pop_back();

    // print values
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    // fill consturctor - initialise a vector with some values
    vector<int> vec(10, 1);
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    return 0;
}