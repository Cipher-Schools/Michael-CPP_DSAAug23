#include <iostream>
using namespace std;
struct abc{
    int age;
    int roll;
}p2;
int main() {
    struct abc p1;
    p1.age = 12;
    p2.age = 13;
    p2.roll = 1002;
    cout<<p1.age<<" "<<p1.roll<<endl;
     cout<<p2.age<<" "<<p2.roll<<endl;
    return 0;
}