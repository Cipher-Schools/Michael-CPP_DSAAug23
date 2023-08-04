#include <bits/stdc++.h>
using namespace std;
// call by reference 
 void fun(int &m, int &n){
    m = 1;
    n = m+5;
 }

// call by value
 void fun1(int &m, int &n){
    m = 0;
    n = m+5;
 }
int main(){
    int x = 12;
    int y = 18;
    fun(x,y);
    fun1(x,y);
    cout<<x<<endl<<y;
}