//Write a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.
#include <iostream>
using namespace std;

// Write the function
bool contains(char* p,char c){

    char t='\0';

    for(int i=0;*(p+i)!='\0';i++){

        if(*(p+i)==c)

        t=*(p+i);

    }

    if(t!='\0'){
	
    	return true;
	}
	
    else{
    	
    	return false;
	}
}


//Write the main function
int main(){

    int size;
    
//Ask for the size of array from the user.
    cout<<"Enter max size of array"<<endl;
    
//Take in the value given by the user.
    cin>>size;

    char arr[size];
    
//Ask for the values of the array.
    cout<<"Enter input to array"<<endl;
    
//Take in the values given by the user.
    cin>>arr;

    char c;
//Ask for the input you want to find in the array.
    cout<<"Enter the input you want to find in the array"<<endl;
    
//Take in the input you want to find in the array.
    cin>>c;

    char* p=&arr[0];
    
//Call the function.
    cout<<contains(p,c);
    
//Return
    return 0;

}
