#include <iostream> 
using namespace std;

void printarray (int arr[100][100],int r,int c)
{
    cout << "\nThe matrix is : \n";
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int main ()
{
    cout << "\nEnter number of rows and columns : \n";
    int r,c;
    cin >>r >> c;
    int arr[r][c];
    cout << "\nEnter the elements of the matrix : \n";
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cin >> arr[i][j];
        }
    }
    printarray (arr,r,c);
    return 0;
}