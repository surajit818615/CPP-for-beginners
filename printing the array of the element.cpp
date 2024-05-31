#include <iostream>
using namespace std;
void printArray(int a[],int n){
	cout<<"The elements of the are : "<<endl;
	for(int i = 0;i <n; i++){
		cout<<a[i]<<" ";
	}
}
int main(int argc, char** argv)
{
	int a[] = {1,3,2,6,9};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"The number of elements in array = "<<n<<endl;
	printArray(a,n);
	
	return 0;
}