#include<iostream>

using namespace std;


//Write main function
int main()

{
//Declare array
   int ar[10]={1,2,3,4,5,6,7,8,9,10};

 //Use a loop to print array using the normal index method

   cout<<"using the normal index method"<<endl;

    for (int i=0;i<10;i++)

	{

		cout<<ar[i]<<" ";

	}   

	cout<<endl;

//Use a loop to print array using the pointer method

    int *p = ar;

    cout<<"using the pointer method"<<endl;

    for(int i = 0; i<10; i++)

    {

        cout<<*p<<" ";

        p++;

    }
//return
   return 0;

}
