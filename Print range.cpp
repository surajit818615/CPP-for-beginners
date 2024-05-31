#include <iostream>
using namespace std;
void printRange(int start, int end){
	while(start <= end)
	{
		cout<<start<<" ";
		start = start +1;
	}
}
int main(int argc, char** argv)
{
	int start = 11;
	int end = 28;
	printRange(start , end);
	return 0;
}