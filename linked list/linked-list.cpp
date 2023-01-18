#include <iostream>
#include "list.h"
using namespace std;

bool search (node *head, int key){
    node *temp = head;
    while (temp != NULL){
        if(head->data==key){
            return true;
        }
        head = head->next;
    }
    return false;
}

void reverse (node *&head){
    node *c = head;
    node *p = NULL;
    node *n;
    while (c!=NULL){
        n=c->next;
        c->next = p;
        p=c;
        c=n;
    }
    head=p;
}
int main (){
    list l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_back(4);
    l.push_back(5);
    l.insert(6,3);
    l.insert(10,0);
    l.pop_front();
    node *head = l.begin();
    while (head != NULL){
        cout << head->getdata() << "->";
        head = head->next;
    }

    reverse(head);
    return 0;
}