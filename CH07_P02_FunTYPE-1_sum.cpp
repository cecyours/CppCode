
/**
 * 
 * 	function without return value ,without args..
 *  
 * */
#include<iostream>
using namespace std;

void sum()
{
	int a,b;
		cout<<"Enter 2 numbers  : ";
		cin>>a>>b;
		cout<<a<<" + "<<b<<" = "<<a+b<<endl;
}
int main()
{
	sum();
	sum();
}