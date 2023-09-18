#include <iostream>
#include <stack>
using namespace std;
class Queue{
    stack<int> s1;
    stack<int> s2;
    public:
    void enqueue(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    void dequeue(){
        if(s1.empty()){
            cout<<"no elemet to remove"<<endl;
        }else{
            cout<<"poped element : "<<s1.top()<<endl;
            s1.pop();
        }
    }
    void front(){
        if(s1.empty()){
            cout<<"no element"<<endl;
        }else{
            cout<<s1.top();
        }
    }
    void back(){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        cout<<s2.top()<<endl;
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    
    void print(){
        if(s1.empty()){
            cout<<" nothing to print"<<endl;
        }else{
            while(!s1.empty()){
                cout<<s1.top()<<" ";
             s1.pop();
                
            }
        }
    }
};

int main() {
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
  //  q1.dequeue();
    q1.back();
    q1.front();
    //q1.print();
	return 0;
}