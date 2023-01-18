#include <iostream> 
using namespace std;

//function to count the number of set bits

int setbits (int n)
{
    int count = 0;
    while (n>0)
    {
        int last_bit = (n&1);
        count += last_bit;
        n = n>>1;
    }
    return count;
}

int setbits_hack (int n)
{
    int count = 0;
    while (n>0)
    {
        n = (n&(n-1));
        count++;
    }
    return count ;
}
int main ()
{
    int n;
    cin >> n;
    int setbit = setbits_hack(n);
    cout << "\nThe number of setbits is : " << setbit << endl;
    return 0;
}