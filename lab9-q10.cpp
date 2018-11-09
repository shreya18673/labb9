//Library
#include <iostream>
//cstring library 
#include<cstring>

using namespace std;

// Write function
//Write pointer as parameter
void revtString(char* p){

    int end;
//initialize
    int count=0;

//using conditions to reverse the string

    for(int i=0;(*(p+i))!='\0';i++)

    {

        count++;

    }

    end=count-1;

    for(int i=end;i>=0;i--)

    {

        cout<<*(p+i);

    }

}

//Write main function

int main()

{

    int size;
//Ask user for size of array
    cout<<"Enter size of array"<<endl;
//takin the size of array
    cin>>size;
//declare a character array
    char ar[size];
//Ask user for values of array
	for(int i=0; i<size,i++){
	
    cout<<"Enter values for array"<<endl;
//takin the value of array
        cin>>ar;
	}
    //calling the function and use of pointer.

    char* p=&ar[0];

    cout<<"reverse"<<endl;

    revtString(p);

    return 0;

}
