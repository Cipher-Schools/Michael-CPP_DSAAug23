#include <iostream>
using namespace std;
     int fibo(int n){
         if(n == 1){
             return 0;
         }
         if(n == 2){
             return 1;
         }
         return fibo(n-1)+fibo(n-2);
     }
         
int main() {
	int n = 6;
	// 0 1 1 2 3 5
     for(int i=1 ; i<=n ; i++){
         cout<<i<<"th fibo term is : "<<fibo(i)<<endl;
     }
	return 0;
}