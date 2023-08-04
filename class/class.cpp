#include <bits/stdc++.h>
using namespace std;
 
class Human{
    private:
    int balance;
    public:
    int age ;
   char gender;

   void setBalance (int x){
    balance = x;
   }
   int getBalance() {
    return balance;
   }
};
 int main(){  
 Human h1;
 h1.age = 21;
 h1.gender ='m';
 h1.setBalance(1000);
 //h1.balance = 1000;
 cout<<h1.getBalance()<<" ";

 Human h2;
 h2.age=30;
  h2.setBalance(2000);
 h2.gender = 'm';
 cout<<h2.getBalance();

 }