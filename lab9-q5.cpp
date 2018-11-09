//Library
#include <iostream>

using namespace std;


//Write the main function
int main()

{
//Write a piece of code which prints the characters in a cstring in a reverse order.
   char c[10] ="Shreya";

   char* cptr;

   cptr=c;

   //Use looping
	cout<<"Reverse of Shreya is";
   for(int i=10;i>=0;i--)

   {
//Print
		
       cout<<*(cptr+i);

   }
//Return
   return 0;

}
