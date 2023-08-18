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

   void insertAtposition(Node* &head , int position, int value){
       Node* temp = head;
      for(int i=1;i<position-1;i++){
          temp = temp->next;
      } 
      Node* newNode = new Node(value);
      newNode->next = temp->next;
      temp->next = newNode;
      
   }    
   void deleteNode(Node* &head, int position){
       if(position == 1){
          head = head->next; 
          break;
       }
       Node* temp = head;
       for(int i=1; i<position-1;i++){
           temp = temp->next;
       }
       temp->next = temp->next->next;
   }
   void printNodeList(Node* &head){
       Node* temp = head;
      
       while(temp!= NULL){
          cout<<temp->data<<endl;
           temp = temp->next;
       }
   }
int main() {
 
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
      int position = 3;
      int value = 100;
      cout<<"before adding of Newnode : "<<endl;
       printNodeList(head);
       
      //insertAtposition(head , position,value);
        deleteNode(head,position);
        cout<<"after adding of Newnode : "<<endl;
        printNodeList(head);
        return 0;
}