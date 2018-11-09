//Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array. 
#include <iostream>

using namespace std;

//Write function

int countEven(int* p,int size)

{

    int count=0;
//Write a loop to check all the numbers in the array
    for(int i=0;i<size;i++)

    {
//Write conditions for even no.s
        if(*(p+i)%2==0)

        {

            count++;

        }

    }

    return count;

}



int main()

{

    int size;

    cout<<"Enter the size of the array"<<endl;

    cin>>size;

    int arr[size];

    cout<<"Enter the input to array"<<endl;

    for(int i=0;i<size;i++)

    {

        cin>>arr[i];

    }

    int* p=&arr[0];
    
//Print    

    cout<<"No. of even numbers:"<<countEven(p,size);

}
