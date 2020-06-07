/*********************************************************
 :::::::::::::: Description :::::::::::::::::::::::::
 -> perform single task multiple times without using for loop

question:- display all even number between 1 to 1000

**********************************************************/
#include<iostream>
using namespace std;
int main()
{
	//today we will discuss about the while loop 
	//it is another entry control loop 
	//it check the condition before start the execution of the loop body
	/*************************************
	 * syntax of while loop
	 * initialisation->>>>>>>>>>>>>>> i=0
	 * while->>>>>>>>>>>>Keyword while
	 * while(condition) in above question condition is i<=1000
	 * {
	 * body of while loop
	 *
	 * increment/decrement;
	 * }//end the body of while loop
	 **************************************/
	int i=1;//initialise the value of i=1
	while(i<=1000)//i<=1000 is condition ->value of i must be less than or equal to 1000
	{
		if(i%2==0)//its a condition to check the even number 
			 cout<<i<<endl;//endl is the keyword similar action "\n"
		i++;//increment the value of i;
	}
}
