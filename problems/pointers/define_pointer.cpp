#include<iostream> 

using namespace std; 

int main() 
{ 
	int a = 5;
    int * p = &a;     //defining a pointer 
    cout<<p <<" "<<*p;    //p denotes the value in pointer ie. address of a. And *p is value of a .
                                            // (*)is called derefrencing opertor	
	return 0; 
} 
