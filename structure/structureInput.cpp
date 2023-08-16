#include <iostream>
using namespace std;
struct abc{
    int age;
    int roll;
}p2;
int main() {
    struct abc p1;
    cout<<"please enter age and roll for frist object"<<endl;
    cin>>p1.age;
    cin>>p1.roll;
    cout<<"please enter age and roll for second object"<<endl;
    cin>>p2.age;
    cin>>p2.roll;
    cout<< "age for first :"<<p1.age<<" and roll : "<<p1.roll<<endl;
    cout<< "age for second :"<<p2.age<<" and roll : "<<p2.roll<<endl;
    return 0;
}