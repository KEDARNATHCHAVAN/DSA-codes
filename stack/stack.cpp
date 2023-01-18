#include <iostream>
#include "stackV.h"
using namespace std;

int main (){
    stack <int> n;
    n.push(1);
    n.push(0);
    n.push(9);
    n.push(8);
    n.push(7);
    n.push(2);
    n.push(4);
    while (!n.empty()){
        cout << n.top();
        n.pop();
    }
    return 0;
}