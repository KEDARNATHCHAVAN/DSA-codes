#include <iostream>
using namespace std;

void spiralprint (int arr[][4], int n, int m)
{
    //4 variables
    int startrow = 0;
    int endrow = n-1;
    int startcol = 0;
    int endcol = m-1;

    //outer loop traverse array boundary
    while (startcol<=endcol and startrow<=endrow)
    {
        //start row
        for (int col = startcol; col<=endcol; col++)
            cout << arr[startrow][col] << " ";
        
        //end col
        for (int row=startrow+1; row<=endrow; row++)
            cout << arr[row][endcol] << " ";
        
        //end row
        for (int col=endcol-1; col>=startcol; col--)
        {
            if (startrow==endrow)
                break;
            cout << arr[endrow][col] << " ";
        }
        
        //start col
        for (int row=endrow-1; row>=startrow+1; row--)
        {
            // avoid duplicate printing of elements
            if (startcol==endcol)
                break;
            cout << arr[row][startcol] << " ";
        }

        startrow++;
        endrow--;
        startcol++;
        endcol--;
    }
}
int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    spiralprint (arr,4,4);
    
    return 0;
}