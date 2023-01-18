#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    cin.get();

    char sent[100];
    char largest_sent[100];
    int largest = 0;

    while (n--)
    {
        cin.getline(sent,100);
        if (strlen(sent)>largest)
        {
            largest = strlen(sent);
            strcpy(largest_sent,sent);
        }    
    }

    cout << "\nThe largest string is : " << largest_sent;
    return 0;
}