#include <iostream>
using namespace std;

/*Find Displacement : Given a long route containing N,S,E,W directions, find the shortest route to reach the location.*/

int main ()
{
    char path[100];
    cin >> path;
    int x=0, y=0;
    for (int i=0; path[i]!='\0'; i++)
    {
        if (path[i]=='N')
        {
            y++;
            break;
        }
        else if (path[i]=='S')
        {
            y--;
            break;
        }
        else if (path[i]=='E')
        {
            x++;
            break;
        }
        else if (path[i]=='W')
        {
            x--;
            break;
        }
    }
    cout << "\nThe x = " << x << " and y = " << y << endl;
/*
    if (x>=0 and y>=0)
    {
        while (x--)
            cout << "E";
        while (y--)
            cout << "N";
    }
    else if (x<=0 and y>=0)
    {
        while (x--)
            cout << "W";
        while (y--)
            cout << "N";
    }
    else if (x<=0 and y<=0)
    {
        while (x--)
            cout << "W";
        while (y--)
            cout << "S";
    }
    else if (x>=0 and y<=0)
    {
        while (x--)
            cout << "E";
        while (y--)
            cout << "S";
    }
*/
    return 0;
}