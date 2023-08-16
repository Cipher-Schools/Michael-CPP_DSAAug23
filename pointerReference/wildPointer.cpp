#include <iostream>
using namespace std;
int main() {
    int x = 12;
   int* ptr = &x;
    int** ptr2 = &ptr;
    int* wildPointer;
    
    cout<<*wildPointer;
    // cout<<"value of : "<< x<<endl;
    // cout<<"value of : "<<*ptr<<endl;
    
    // cout<<"value of : "<<*(*ptr2);
    
    //  int* ptr = NULL;
 //  cout<<" value of ptr "<<ptr;

    return 0;
}