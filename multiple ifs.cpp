#include <iostream>
using namespace std;
int main()
{
	int phone = 15;//15k
	string weather;
	int money;
	cout<<"Enter the money do you have: "<<endl;
	cin>>money;
	cout<<"Check today's weather: "<<endl;
	cin>>weather;
	if(money>=phone){
		cout<<"You can buy this phone"<<endl;
		cout<<"Thanks for shopping"<<endl;
	}
	if(weather == "pleasent"){
		cout<<"Let's go for a picnic"<<endl;
	}
	else
	{
		cout<<"Stay at home and study"<<endl;
	}
	return 0;
}