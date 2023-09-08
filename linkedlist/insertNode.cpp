#include <iostream>
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
Node* head = NULL;
void insert(int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
    }else{
        Node* temp = head;
        while(temp->next!= NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}



int main() {
  insert(12);
  insert(14);
  insert(16);
  insert(18);
  insert(23);
  deleteNode(18);
  print(head);
	return 0;
}