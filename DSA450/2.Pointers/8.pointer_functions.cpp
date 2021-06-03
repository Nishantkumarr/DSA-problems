#include<iostream> 

using namespace std; 


//function to print the value 
int print_ptr(int *p){
    cout<<" Function Print Called Printing <pointer> "<< p <<"  "<<*p <<endl;
    return 0; 
}

//function to increment the pointer (P+n)
int increment_ptr(int *p){
    p=p+1;
    cout<<"Fucntion Increment Pointer is called Reflecting changes in here  " << p <<endl;
    return 0;
}

//function to increment the calue pointer is refrencing to
int increment_value(int *p){
    *p+1;
    cout<<"Function Increment Value is Called . Changes here wil be reflected back in main because we passed the address of int <a> {call by refrence types}   ";
    cout<<*p << endl ;
    return 0;
}


int main() 
{ 
	int a = 5;

    //defining a pointer 
    
    int * p = &a;                                                       
    //p denotes the value in pointer ie. address of a. And *p is value of a . (*)is called derefrencing opertor	
    
    cout<<p <<" "<<*p;               

    //pointer working with functions    
    cout<<"value before function = "<<"  Pointer  "<<p <<"   Value  "<<*p <<endl;

    //Functions and Pointers 
    //notice passing it just as any integer
    print_ptr(p);
    increment_ptr(p);
    increment_value(p);            

    //printing to check what changed after function calling
    cout<<"value before function = "<<"  Pointer    "<<p<<"    Value  "<<*p<<endl;

    //notice only the value changed because in case of functions changes are reflected abck only when we pass address of the variable and not its value.
	return 0; 
} 
