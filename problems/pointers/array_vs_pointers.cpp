#include<iostream> 

using namespace std; 

int main() 
{ 
	int a[10];

    //defining a pointer 
    
    int * p = &a[10];    
    
    //showing pointer addition 
    a[0]=2;
    a[1]=4;


    //p denotes the value in pointer ie. address of a. And *p is value of a . (*)is called derefrencing opertor	
    cout<<p <<" "<<*p<<endl;               
    
    //The arrayname also works some what similar to a ponter but there are some diffrences. 
    cout<<"array base "<<&a<<endl;
    cout<<"location of arr[0] = "<<&a[0]<<endl;
    cout<<"size of <arrayName> = "<<sizeof(a)<<endl;

    //arrayname size returns size of entire array but on doing it with pointers we get only 8 bytes. the memory used to store the base address of the array.
    //In symbol table initialization of p creates a new memory location of 8 bytes and stores array base address there. But in case of aray Name its only have one entry that too related to the 
    //whole array.

    cout<<"array base (pointer) = "<<p<<endl;  //not &p as it is a pointer.
    cout<<"location of arr[0] = "<<&a[0]<<endl;
    cout<<"size of <pointer> = "<<sizeof(p)<<endl;



    // also we can do manipulation in p as it is seperatly defined but not the same with arrayName
    a[2]=8;
    p=&a[2];
    cout<<p <<" "<<*p<<endl;               

	return 0; 
} 
