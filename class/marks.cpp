#include <bits/stdc++.h>
using namespace std;
 
class Marks{
    public:
    int hindi;
    int math;
    int science;
    int english;
  
    void details(){
        cout<<"marks in hindi :" <<hindi<<endl;
        cout<<"marks in english :" <<english<<endl;
        cout<<"marks in math :" <<math<<endl;
        cout<<"marks in science :" <<science<<endl;
    }

};


 int main(){
   Marks s1;
   s1.hindi = 89;
   s1.english= 88;
   s1.math = 90;
   s1.science = 86;
   // s1.details();
   Marks s2;
   s2.details();
 }