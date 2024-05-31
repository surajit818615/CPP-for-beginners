#include <iostream>
using namespace std;
class Number{
	int a;
	public:
		Number(){
			a=0;
		}
		Number(int num){
			a= num;
		}
		Number(Number &obj){
			cout<<"Copy constructor called"<<endl;
			a = obj.a;
		}
		void display(){
			cout<<"The number for the object is "<<a<<endl;
			 
		}
};
int main(){


	Number x,y,z(45);
	x.display();
    y.display();
	z.display();
	//copy constructor in a type of constructor that makes copy of another constructor
	
	//z1 should exactly resembles z or x or y
	Number z1(x);
	z1.display();
	return 0;
}