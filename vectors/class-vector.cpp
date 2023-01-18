#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    vector <int> v;
    vector <char> ch;
    ch.push_back ('k');
    cout<< ch.front () << endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    v.pop_back ();

    int front = v.front ();
    int back = v.back ();

    cout << front << endl << back << endl;
    cout << v.at(2) << endl;
    cout << v.size() << endl;
    cout << v.capacity () << endl;

    for (int i=0; i<v.size(); i++)
    {
        cout << v[i] << ", ";
    }
    cout << endl;

    return 0;
}