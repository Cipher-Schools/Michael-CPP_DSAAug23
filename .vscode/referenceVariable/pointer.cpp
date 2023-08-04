#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 12;
    int* ptr = &x;
    
  //  cout<<&x <<" and "<<ptr;
  //    cout<< x <<" and "<< *ptr;
      ptr++;
      //cout<<&x <<"and "<<ptr;
      cout<<x<<" and "<<*ptr;
}