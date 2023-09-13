#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int data;
    
    student(string x,int y){
        name = x;
        data=y;
    }
    student(){
        
    }
    void display(){
        cout<<"Name is: "<<name<<" data is: "<<data<<endl;
    }
};
int main(){
    student S[2];
    for(int i=0;i<2;i++){
       cin>>S[i].name;
        cin>>S[i].data;
        student(S[i].name,S[i].data);
    }
    for(int j=0;j<2;j++){
        S[j].display();
    }
}