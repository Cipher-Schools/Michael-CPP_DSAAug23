// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
    void InsertAtEnd(Node* &head, int x){
        Node* temp = head;
        while(temp->next!= NULL){
            temp = temp->next;
        }
        Node* newNode = new Node(x);
        temp->next = newNode;
        
    }
    void InsertNodeAtStatrting(Node* &head, int x){
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
    }
   void printNodeList(Node* &head){
       Node* temp = head;
      
       while(temp!= NULL){
          cout<<temp->data<<endl;
           temp = temp->next;
       }
   }
int main() {
    //Node n1(12);
    // cout<<n1.data;
    // int x = 12;
    // int* ptr = &x;
    
      Node* n1 = new Node(12);
      Node* n2 = new Node(24);
      Node* n3 = new Node(36);
      Node* n4 = new Node(48);
      Node* n5 = new Node(60);
      n1->next = n2;
      n2->next = n3;
      n3->next = n4;
      n4->next = n5;
      Node* head = n1;
      cout<<"before adding of Newnode : "<<endl;
       printNodeList(head);
       InsertAtEnd(head,100);
        cout<<"after adding of Newnode : "<<endl;
        printNodeList(head);
        return 0;
}