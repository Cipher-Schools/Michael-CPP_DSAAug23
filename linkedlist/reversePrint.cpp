#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

// this function will print the nodes in reverse
void print_node_in_reverse(node* head_prev){
    node* temp = head_prev;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }

}

// this function will print the nodes in normal form
void print_node_in_normalForm(node* head_next){
    node* temp = head_next;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}

// deleting a node from starting
void deletenode(node* head_next,int x){
    node* temp = head_next;
    if(x==1){
        head_next = temp->next;
    }
    else if(x==5){
           
            while(temp->next->next!=NULL){
                    temp = temp->next;
            }
            temp->next = NULL;
       }
    else{
        
        for(int i=1;i<x-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
       }
}

// deleting a node from ending
void deletenodeRev(node* head_prev,int x){
    node* temp = head_prev;
    if(x==1){
        
        head_prev = temp->prev;
    }
    else if(x==5){
      
        while(temp->prev->prev!=NULL){
            temp = temp->prev;
        }
        temp->prev = NULL;
    }
    else{

    for(int i=1;i<x-1;i++){
        temp = temp->prev;
    }
    temp->prev = temp->prev->prev;
}
}
int main(){
    node* n1 = new node(1);
    node* n2 = new node(2);
    node* n3 = new node(3);
    node* n4 = new node(4);
    node* n5 = new node(5);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n2->prev = n1;
    n3->prev = n2;
    n4->prev = n3;
    n5->prev = n4;

    node* head_next = n1;
    node* head_prev = n5;
    cout<<"Printing nodes from starting : ";
    print_node_in_normalForm(head_next);
    cout<<endl;
    cout<<"Printing nodes in reverse form : ";
    print_node_in_reverse(head_prev);
    cout<<endl;
    cout<<"Deleting from starting : "<<endl;
    int n;
    cout<<"Enter a node which u want to delete : ";
    cin>>n;
    deletenode(head_next,n);
    print_node_in_normalForm(head_next);
    cout<<endl;
    // cout<<"Deleting from reverse : "<<endl;
    // int x;
    // cout<<"Enter a node which u want to delete : ";
    // cin>>x;
    // deletenodeRev(head_prev,x);
    // print_node_in_reverse(head_prev);
    return 0;
}