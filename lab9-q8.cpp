//Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.
//Library
#include <iostream>
using namespace std;

//Write function.

int myStrLen(char* a){

    int count=0;

    for(int i=0;*(a+i)!='\0';i++){

        *(a+i);

        count++;

    }

return count;

}

int main(){

    char arr[100];
//Enter the string
    cout<<"Enter the string:"<<arr;

    cin.getline(arr,100);
    char* p=&arr[0];
    
//Print the length of the string
    cout<<"Length of the string:"<<myStrLen(p);

//Return
return 0;

}
