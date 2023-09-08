#include <iostream>
using namespace std;
class demo{
    public :
    int data ; 
    int age;
    void fun1(){
        cout<<"fun111111"<<endl;
    }
    static int count;
    
    demo(){
        count++;
    }
    static void fun(){
        cout<<"funnnnnnnnnn"<<endl;
        //cout<<data;
    }
    
    
};

int demo :: count =0;
int main() {
	demo d1;
    demo d2;
    demo d3;
    demo d4;
    cout<<d1.count;
	
	return 0;
}