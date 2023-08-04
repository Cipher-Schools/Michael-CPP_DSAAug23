#include <bits/stdc++.h>
using namespace std;
// call with pointer
void fun(int* x , int* y){
    (*x)++;
    //*x++;
    *y = 10;
}
// call with reference variable
void fun1(int &x, int &y){
    x++;
    y++;
}

int main(){
    int x = 12;
    int y = 13;
    fun(&x, &y);
    fun1(x,y);
    cout <<"value of x :"<<x<<endl<<"value of y :"<<y;
}