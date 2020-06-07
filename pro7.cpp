/************************************************************
 ::::::::::::::: DESCRIPTION ::::::::::::::::::::::::
 ->create a seprate function cat that function and print "Hello world" using that function

***************************************************************/

#include<iostream>
using namespace std;
//SYNTAX OF FUNCTION 
//STEP 1:Define prototype of the function
//Like Return_type function_name(n number of parameter);

void display(void);//prototype of the display function
int main(void)
{
	display();
	cout<<"\n";
}
//step 2:
//define the function 
//return_type function_name(formal parameter)
//{
//	SET OF INSTRUCTION PERFOORM WHEN THAT FUNCTION CALL BY SOME ONE
//}
void display(void)
{//function body start
	cout<<"HELLO WORLD"<<endl;
}//function body end....
