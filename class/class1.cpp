#include <bits/stdc++.h>
#include <string.h>
using namespace std;


class School {
    private:
    int roll;
    int classs;
    string name;

    void fun(){
        cout<<"hello i am doing fun "<<endl;
    }
    public:

    void fake(){
        fun();
    }
    void setRoll(int x){
        roll = x;
        fun();
    }
    int getRoll(){
        return roll;
    }
    void setClass(int x){
        classs = x;
    }
    int getClass(){
        return classs;
    }
    void setName(string n) {
        name =n;
        }
    string getName(){
        return name;
    }
    void Details(){
        cout<<"Name:" <<name <<" Roll No."<<roll<<" Class: "<< classs;
    }

};



int main(){
    School s1;
    s1.setRoll(122);
    s1.setClass(12);
    s1.setName("rahul");
    // s1.Details();
    // s1.Details();
    cout<<endl;
  //  s1.fake();

    School s2;
    s2.setRoll(123);
    s2.setClass(10);
    s2.setName("Amit");
  //  s2.Details();
}