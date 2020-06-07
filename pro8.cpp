/*********************************************************
 :::::::::::::::Description:::::::::::::::::::::::::::::
 -> Describe the function with 2 parameter and that returns the sum of that parameter
 Q.create a sum function with 2 integer value and "return" the sum of 2 parameter.

*********************************************************/
#include<iostream>
using namespace std;
int sum(int,int);
int main()
{
	int i,j;
	cout<<"\nEnter 2 number:";
	cin>>i>>j;
	i=sum(i,j);
}
//Define the sum function
int sum(int i,int j)
{
	return i+j;
}

