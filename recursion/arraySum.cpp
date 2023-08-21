#include <iostream>

using namespace std;
 
 int SumArray(int* arr, int size){
     if(size == 0){
         return 0;
     }
     
     return arr[size-1]+ SumArray(arr,size-1);
 }


int main()
{
    int arr[] = {5,7,3,8,9,1,4,6};
    int size = 8;
    cout<<SumArray(arr, size);

    return 0;
}
