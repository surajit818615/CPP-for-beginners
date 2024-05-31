// C++ program to find sum of first 
// n natural numbers. 
#include <iostream> 
using namespace std; 

// Returns sum of first n natural 
// numbers 
int findSum(int n) 
{ 
	int sum = 0; 
	for (int i = 1; i <= n; i++) 
		sum = sum + i; 
	return sum; 
} 

// Driver code 
int main() 
{ 
	int n = 78; 
	cout << findSum(n); 
	return 0; 
}
