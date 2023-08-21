#include <iostream>
using namespace std;
    int sumNnumber(int n){
        if(n == 1){
            return 1;
        }
        return n+sumNnumber(n-1);
    }
int main() {
	int n = 12;
	int sum = sumNnumber(n);
	cout<<sum;
	return 0;
}