#include <iostream>
#include <queue>
using namespace std;

int main (){
    queue<int> q;
    q.push(1);
    q.push(1);
    q.push(1);
    q.push(1);
    q.push(1);
    q.push(1);
    q.push(1);
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}