#include<iostream> 

using namespace std; 

int main() 
{ 
	int a = 5;

    //defining a pointer 
    
    int * p = &a;                                                       
    //p denotes the value in pointer ie. address of a. And *p is value of a . (*)is called derefrencing opertor	
    
    cout<<p <<" "<<*p;               
    
    //pointer addition 
    //Adding n to a pointer increases its value to the  n*(datatype of variable it is refencing to )

    cout<<"Added Value "<<p+1;

    // value is displayed in hex format
	return 0; 
} 
