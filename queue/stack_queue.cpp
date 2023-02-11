#include <iostream>
#include <queue>
#include <stack>
using namespace std;

//Implement a stack class, which uses 2 queues internally as a data structure

class Stack {
    queue <int> p,q;
    public:
    void push (int x){
        //will insert in the non-empty queue
        if(!q.empty()){
            q.push(x);
        }
        else {
            p.push(x);
        }
    }
    void pop (){
        if(q.empty()){
            //shift the elements  from p to q
             while(!p.empty()){
                int front = p.front();
                p.pop();

                if(p.empty()){
                    break;
                }
                p.push(front);
             }
        }
        else{
            //shift the elements from q to p
            while(!q.empty()){
                int front = q.front();
                q.pop();
                if(q.empty()){
                    break;
                }
                p.push(front);
            }
        }
    }
    int top(){
        if(q.empty()){
            while (!p.empty()){
                int front = p.front();
                p.pop();
                q.push(front);
                if(p.empty()){
                    return front;
                }
            }
        }
        else {
            while (!q.empty()){
                int front = q.front();
                p.push(front);
                q.pop();
                if(q.empty()){
                    //top element of the stack
                    return front;
                }
            }
        }
        return ;
    }
    bool empty(){
        return q.empty() and p.empty();
    }   
};

int main (){
    Stack s;
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
            cout << s.top << " ";
            s.pop();
        }
    return 0;
}