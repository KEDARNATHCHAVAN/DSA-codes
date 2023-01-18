#include <iostream>
using namespace std;

int getbit(int n, int i)
{
    int mask = (1 << i);
    return (mask & n) > 0 ? 1 : 0;
}

int clearbit(int n, int i)
{
    return (n & (~(1 << i)));
}

int setbit(int n, int i)
{
    return (n | (1 << i));
}

int updatebit(int n, int i, int v)
{
    clearbit(n, i);
    int mask = (v << i);
    return (n | mask);
}

int clearlastbits(int n, int i)
{
    return (n & (-1 << i));
}

int clearbitsinrange(int n, int i, int j)
{
    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    return (n & mask);
}

int replacebits (int n, int i, int j, int m)
{
    int x = clearbitsinrange (n,i,j);
    int mask = (m<<i);
    return (x|mask);    
}

int main()
{
    int bit = replacebits (15,1,3,2);
    cout << "\nThe numbeer is : " << bit << endl;
    return 0;
}