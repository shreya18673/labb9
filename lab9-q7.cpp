//Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.
//Library
#include <iostream>

using namespace std;

//Write function that returns a pointer to the maximum value of an array of double's.
double* maximum(double* p, int size)

{
	if(size!=0)
	
    {
		int x;

//sort array in descending order

	    for(int i=0;i<size;i++)
	    {
		    for(int j=i+1;j<size;j++)
		    {

//Write condition for maximum

			    if(*(p+i)<*(p+j))

			    {
				    x=*(p+i);

				    *(p+i)=*(p+j);

				    *(p+j)=x;
			    }

		    }

	    }

 return p;

    }

    else

    {
//Write condition for empty array.
        return NULL;

    }

}


//Write the main function.
int main(){

int size;
    
//Ask the user for size of the array.
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

//Write the conditions.

    if(size!=0){

        double arr[size];
//Take in the values for aaray
        cout<<"Enter input to array"<<endl;

            for(int i=0;i<size;i++)
            {
            cin>>arr[i];
            }

        double* q=&arr[0];

        cout<<"Max:"<<*maximum(q,size);

    }
    else
    {
        cout<<"Size of the array is zero"<<endl;
        cout<<"Max=NULL";
    }
//Return 
    return 0;

}
