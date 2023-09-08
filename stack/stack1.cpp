#include <iostream>
#include <stack>
using namespace std;

bool ss(stack<int> s1){
    int prev = s1.top();
    s1.pop();
    
    while(!s1.empty()){
        int current = s1.top();
        s1.pop();
        if(current < prev){
            prev = current;
        }else{
            return false;
        }
    }
    return true;
}

void print(stack<int> s1){
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
}

int main() {
	stack<int> s1;
	s1.push(12);
	s1.push(13);
	s1.push(14);
	s1.push(17);
	s1.push(16);
	s1.push(17);
	s1.push(18);

	cout<<ss(s1);
// 	while(!s1.empty()){
// 	    cout<<s1.top()<<endl;
// 	    s1.pop();
// 	}
	
	return 0;
}