#include<iostream> 

using namespace std; 

int main() 
{ 

    //defining an integer / arrya pointer 
	int a[5] = {1,2,3,4,5};
    int * pa = &a[0];     

    //defining a character pointer
    char b[5]="abcd";                // keep in consideration the null charcter and give the values correctly
    char *pb = &b[0];


    //p denotes the value in pointer ie. address of a. And *p is value of a .(*)is called derefrencing opertor	

    cout<<"array Pointer "<<a <<"   "<<pa<<endl;           //prints the base address 
    cout<<"Character pointer "<<b<<"  "<<pb<<endl;      //prints the entire sting

	return 0; 
} 
