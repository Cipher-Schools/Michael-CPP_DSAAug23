#include <iostream>
#include <string>
using namespace std;
  
int main() {
   string str ="rohitSharma";
//   string :: iterator it;
//   string :: reverse_iterator it2;
   
//   for(it2 = str.rbegin(); it2!= str.rend();it2++){
//       cout<<*it2<<" ";
//   }
    for(auto it = str.rbegin(); it!= str.rend();it++){
        cout<<*it;
    }
   

    
    
   return 0;
}