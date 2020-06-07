/*********************************************************
 :::::::::::::DESCRIPTION:::::::::::::::::::::::::::::
 ->without using if statement 
 print Day 
 for example if user enter 1 then output should be "Monday"
Solution is "SWITCH CASE"
 *******************************************************/
#include<iostream>
using namespace std;

int main()
{
	int i;
	cout<<"\nENTER THE NUMBER BETWEEN 1 TO 7:-";
	//DEFINE THE LABLE NAME "re" 
	re:cin>>i;
	   if(i==0 || i>7)
	   {
		goto re;
	   }
	   else
	   {
		   //switch case as follow:-
		   //
		   //step 1.) Declare a variable and define that variable
		   //step 2.) switch( variable_name )
		   //{
		   //case case_number: set of instruction
		   //default:set of instruction when no cases
		   //}
		   switch(i)//
		   {
			   case 1: cout<<"Monday";break;
			   case 2:cout<<"Tuesday";break;
			   case 3:cout<<"Wednessday";break;
			   case 4:cout<<"Thrusday";break;
			   case 5:cout<<"Friday";break;
			   case 6:cout<<"Saturday";break;
			   case 7:cout<<"Sunday";break;
		   }
	   }
	

}


