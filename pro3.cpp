/****************************************************************
  :::::::::::::: Description ::::::::::::::::
   * HOW TO PUT CONDITION OF C PLUS PLUS PROGRAM 
   	->IF USER ENTER EVEN NUMBER THEN MESSAGE SHOULD BE "ENTERED NUMBER IS EVEN"
	-> IF USER ENTER ODD NUMBER THEN MESSAGE SHOULD BE "ENTERED NUMBER IS ODD NUMBER"
	****************************
	 *LETS START-------------->
	*****************************
****************************************************************/
#include<iostream>
using namespace std;

int main()
{
	int i;//variable declaration 
	cout<<"\n Enter number:-";
	cin>>i;
	if(i%2==0)
	{
		cout<<"ENTERED NUMBER IS EVEN";
	}
	else if(i%2==1)
	{
		cout<<"ENTERED NUMBER IS ODD";
	}
}



