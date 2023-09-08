#include <iostream>
using namespace std;
void insertionSort(int arr[] , int size){
    
    for(int i=1; i< size; i++){
        int key = arr[i];
        int j = i-1;
        while(j>= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main() {
	int arr[] = {7,4,12,11,5,3,10,14,19,23,27,22,21};
	int size = sizeof(arr)/sizeof(int);
	insertionSort(arr,size);
	for(int i=0; i < size; i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}