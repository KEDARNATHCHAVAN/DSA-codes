#include <iostream>
using namespace std;

void printarray(string arr[])
{
    cout << "\nThe names are : ";
    for (int i=0; i<3; i++)
    {
        cout << arr[i] << " ";
    }
}
int main ()
{
    string names[3];
    cout << "\nEnter three names : \n";
    for (int i=0; i<3; i++)
    {
        cin >> names[i];
    }   
    printarray(names);
    return 0;
}