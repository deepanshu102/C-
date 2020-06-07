/**********************************************
 :::::::::::: Description :::::::::::::::::::
 -> PERFORM A SINGLE TASK MULTIPLE TIME
	->USING FOR LOOP 
**********************************************/
#include<iostream>
using namespace std;
//this is the program for 10 number and check whether the number if odd or even
int main()
{
	int i,val;
	/*********************************************
	 * Syntax of for loop
	 * for(initialisation;conditions;increment/decrement)
	 * {
	 *	n number of statements 
	 * }
	 ***********************************************/
	for(i=0/*initialisation*/;i<10/*condition*/;i++/*increment*/)
	{
		cout<<"\nEnter value:- ";
		cin>>val;
		if(val%2==0)
		   cout<<"\nEven number";
		else
		   cout<<"\nODD number";
	}
}
