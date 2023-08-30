#include <iostream>
using namespace std;
class complex{
    public:
    int real;
    int img;
    
    complex(int x , int y)
    {
        real = x;
        img  = y;
    }
    complex(){}
    complex sum(complex &obj){
        complex result;
        result.real = real + obj.real;
        result.img = img + obj.img;
        return result;
    }
    complex operator+(complex &obj){
        complex result;
        result.real = real + obj.real;
        result.img = img + obj.img;
        return result;
    }
     void operator--(){
         real--;
         img--;
     }
     void operator++(){
         real++;
         img++;
     }
     
    
    
};
 void print(complex &obj){
     cout<<obj.real<<" + "<<obj.img<<"i"<<endl;
 }

int main() {
	complex c1(2,3);
	complex c2(4,6);
	--c2;
	++c1;
	int x = 12;
	cout<<++x<<endl;
	cout<<x;
//	complex* c3 = c2->sum(c1);
//     complex c4 = c2.sum(c1);
// 	 complex c3 = c2+c1;
//	print(c1);
	return 0;
}