#include <iostream>

using namespace std;
void removeDup(int* arr, int &size){
    for(int i=0; i<size-1;i++){
        if(arr[i] == arr[i+1]){
            for(int j =i; j<size-1;j++){
                arr[j] = arr[j+1];
            }
            size--;
        }
    }
}


int main()
{
    int arr[] = {1,2,3,3,4,6,6,9,12};
    int size = 9;
    removeDup(arr,size);
    for(int i=0; i< size; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
