#include <iostream>
#include "int_queue.h"
using namespace std;

int main (){
    queue s(7);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.pop();
    s.pop();
    s.pop();

    while (!s.empty()){
        cout << s.getfront() << endl;
        s.pop();
    }
    return 0;
}