#include<iostream>
using namespace std;

int main(){
    int x = 12;
    int &y = x;
    x++;
    cout<<x << " and "<<y;
} 