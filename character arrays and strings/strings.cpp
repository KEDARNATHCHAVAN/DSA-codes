#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    vector <string> arr;
    string s;
    while (n--)
    {
        cin.getline(cin,sizeof(s));
        arr.push_back (s);
    }
    for (string s : arr)
    {
        cout << s << endl;
    }
    return 0;
}