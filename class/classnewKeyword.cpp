// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class student{
    public :
    int roll;
    int age;
    student(){
        
    }
    student(int x, int y){
        roll = x;
       age = y;
    }
    void details(){
        cout<<"roll of student : "<<roll<<endl<<"age of student :"<<age;
    }
};
int main() {
    student s2;
   student s1(1002,23);
   student *s3 = new student();
   student *s4 = new student(1003,24);
   s4->details();
   s3->roll = 12;
   s3->age = 26;
//   s3->details();
  // int* ptr ;
  // s1.details()
   student* ptr = &s1;
 //  ptr->details();
   

    return 0;
}