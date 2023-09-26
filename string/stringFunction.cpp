#include <iostream>
#include <string>
using namespace std;
  
int main() {
   string str ="rohitSharma";
   string str2 = "mohit";
//   cout<<"befor swap str = "<<str<<endl;
//   cout<<"before swap str2 = "<<str2<<endl;
//   str.swap(str2);
//   cout<<"after swap str "<<str<<endl;
//   cout<<"after swap str2 = "<<str2<<endl;


     string strsmall = str.substr(2);
    //  cout<<strsmall<<endl;
    int pt = str.find("t");
     int pm = str.find("m");
   // cout<<position<<endl;
   string s = str.substr(pt+1,pm-pt-1);
     cout<<s;
   return 0;
}