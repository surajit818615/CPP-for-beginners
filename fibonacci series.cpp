#include <iostream>
using namespace std;
int factorial(int n){
	if(n<=1){
		return 1;
	}
	return n*factorial(n-1);
}
int fib(int n){
	if(n<2){
		return 1;
	}
	return fib(n-2) + fib(n-1);
}
int main()
{
	int a;
	//**************Factotial of a number*************
	//6! = 6*5*4*3*2*1 = 720
	//n!= n*(n-1)!
	cout<<"Enter a number: ";
	cin>>a;
	cout<<"The value in fibonacci sequence of "<<a<< " is "<<fib(a);
	
	return 0;
}