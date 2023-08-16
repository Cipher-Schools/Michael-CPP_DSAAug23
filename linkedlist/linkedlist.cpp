#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
int main(){
    Node n1(12);
    Node n2(14);
    Node n3(16);
    Node n4(18);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    Node* temp = &n1;
    while(temp!= NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    } 
    return 0;
}