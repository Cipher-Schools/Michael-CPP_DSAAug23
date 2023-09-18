#include <iostream>
#include <stack>
using namespace std;

void towerOfHanoi(int N, char S, char D, char H){
    if(N==0){
        return;
    }
    towerOfHanoi(N-1,S,H,D);
    cout<<"move disk "<<N << "from tower "<<S<<"to tower "<<D<<endl;
    towerOfHanoi(N-1,H,D,S);
}

int main() {
   int N = 3;
   towerOfHanoi(N,'S','D','H');
	return 0;
}