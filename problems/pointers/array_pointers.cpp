#include<iostream> 

using namespace std; 

int main() 
{ 
	int a[10];

    //defining a pointer 
    
    int * p = &a[10];    

    //p denotes the value in pointer ie. address of a. And *p is value of a . (*)is called derefrencing opertor	
    
    cout<<p <<" "<<*p;               
    
    //The arrayname also works some what similar to a ponter but there are some diffrences. 
    cout<<"array base "<<&a<<endl;

    //showing pointer addition 
    a[0]=2;
    a[1]=4;

    cout<<"array index 0 = "<<p<<" ";
    cout<<"array index 1 = "<<(p+1)<<endl;

    //also can do the same using <arrayName>
    cout<<"array index 0 = "<<*a;
    cout<<"array index 1 = "<<*(a+1)<<endl;


    //you can use following methods to access any array elements as all of them coverts to same *(a+i) format
    cout<<a[0] <<0[a]<<*(0+a);

    // value is displayed in hex format
	return 0; 
} 
