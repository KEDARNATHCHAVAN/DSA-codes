#include <iostream> 
using namespace std;


int main ()
{
    char arr[][100] = {"one","two","three","four","five"};
    for (int i=0; i<5; i++)
        cout << arr[i] << " ";
    return 0;
}