#include <iostream>
using namespace std;
int n = 50;
int stack[50];
int top = -1;

void push(int x){
    if(top>= n-1){
        cout<<"Stack overflow"<<endl;
    }else{
        top++;
        stack[top] = x;
    }
}

void pop(){
    if(top < 0){
        cout<<"Stack underflow"<<endl;
    }else{
        cout<<"poped element is : "<<stack[top]<<endl;
        top--;
    }
}

 bool empty(){
     if(top >=0){
         return false;
     }else{
         return true;
     }
 }

void Print(){
    if(top == -1){
        cout<<"stack is empty"<<endl;
    }else{
    for(int i= top; i >=0; i--){
     cout<<stack[i]<<" ";
    }
    cout<<endl;
}
}


int main() {
	push(12);
	push(13);
	push(14);
    Print();
    Print();
	return 0;
}