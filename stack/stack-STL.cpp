#include <iostream>
#include <stack>
using namespace std;

int main (){
    stack <int> num;
    num.push(1);
    num.push(1);
    num.push(1);
    num.push(1);
    num.push(1);
    num.push(1);
    while(!num.empty()){
        cout << num.top() << endl;
        num.pop();
    }
    return 0;
}