#include <iostream>
#include <string>
using namespace std;
  void ispalindrome(string str2){
      int s =0; 
      int e = str2.length()-1;
      while(s <= e){
          if(str2[s] == str2[e]){
              s++;
              e--;
          }else{
              cout<<"fasle "<<endl;
              return;
          }
      }
      cout<<"true"<<endl;
      return;
  }
int main() {
   string str;
   getline(cin,str);
//   str.push_back('a');
//   str.pop_back();
//   str.pop_back();
     
    //  for(int i=0; i <str.length();i++){
    //      cout<<str[i]<<endl;
    //  }
    // for(char ch : str){
    //     cout<<ch<<endl;
    // }
    string str2 ="";
    for(char ch : str){
        if(isalpha(ch)){
            str2+=ch;
        }
    }
    ispalindrome(str2);
    
    
   return 0;
}