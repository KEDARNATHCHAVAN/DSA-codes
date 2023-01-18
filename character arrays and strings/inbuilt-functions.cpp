#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    char arr[10] = "kedarnath";
    char brr[10]; 
    
    // length
    cout << "\nlength : " << strlen(arr);

    // copy
    cout << "\ncopied into brr : " << strcpy(brr, arr);

    // compare
    cout << "\ncompare : " << strcmp(arr,brr);

    // concatenate
    cout << "\nconcatenated : " << strcat(arr,brr);
    return 0;
}