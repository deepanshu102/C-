/**********************************************
 * :::::::: DESCRIPTION::::::::::::::::::
 * ->how to make function and 
 *  how to pass the value in the function 
 *********************************************/

#include<iostream>
using namespace std;

void calculate_sum(int);//define prototype of the function calculate_sum

int main(void)
{
	int i;
	cout<<"enter the number";
	cin>>i;
	calculate_sum(i);//its passe the value of i in calculate-function
	//i.e. 10 in previous example
}
//define the function calculate_sum
// this is pass value by value in other words "pass by value"
void calculate_sum(int l)// "l" is now value of "i"
{
	cout<<"\n"<<l<<"+10="<<l=10;
}

