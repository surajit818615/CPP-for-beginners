#include <iostream>
using namespace std;
void coutEvenOdd(int a[],int n){
	int even_count =0;
	int odd_count = 0;
	for(int i =0; i<n; i++){
		if(a[i]%2 == 0){
			even_count +=1;
		}
		else
		{
			odd_count +=1;
		}
		cout<<"The count of even elements = "<<even_count<<endl;
		cout<<"The count of odd elements = "<<odd_count<<endl;
	}
}
int main(int argc, char** argv)
{
	int a[] = {1,2,3,4,5};
	int n =sizeof(a)/sizeof(a[0]);
	coutEvenOdd(a,n);
}