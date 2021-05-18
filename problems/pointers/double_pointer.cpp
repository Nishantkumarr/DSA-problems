#include<iostream> 

using namespace std; 


//function to print the value 
int print_ptr(int **p){
    cout<<" Function Print Called Printing <pointer> "<< p <<"  "<<*p <<" "<<**p << endl;
    return 0; 
}

int increment_dbl_ptr(int **p){
    p=p+1;
    cout<<" Function Increment double pointer  Called <pointer> "<< p <<endl;
    return 0; 
}
//function to increment the pointer (P+n)
int increment_ptr(int **p){
    *p=*p+1;
    cout<<"Fucntion Increment Pointer is called Reflecting changes in here  " << *p <<endl;
    return 0;
}

//function to increment the calue pointer is refrencing to
int increment_value(int **p){
    **p+1;
    cout<<"Function Increment Value is Called . Changes here wil be reflected back in main because we passed the address of int <a> {call by refrence types}   ";
    cout<<**p << endl ;
    return 0;
}


int main() 
{ 
	int a = 5;

    //defining a pointer 
    
    int * p = &a;                                                       
    //p denotes the value in pointer ie. address of a. And *p is value of a . (*)is called derefrencing opertor	


    // double pointer p2 
    int **p2 = &p;
        
    cout<<" Pointer details "<< p <<" "<<*p <<endl; 
    cout<<" Double Pointer details "<< p2 <<" - "<<*p2 <<" - "<< **p2 << endl;               

    //pointer working with functions    
    cout<<"value before function = "<<"  Pointer  "<<p <<"   Value  "<<*p <<endl;
    cout<<"value before function = "<<"  Double Pointer  "<<p2 <<"   Value  "<<*p2  << " " << **p2 <<endl;


    //Functions and Pointers 
    //notice passing it just as any integer
    print_ptr(p2);
    increment_dbl_ptr(p2);
    increment_ptr(p2);
    increment_value(p2);            

    //printing to check what changed after function calling
    cout<<"value after function = "<<"  Pointer    "<<p<<"    Value  "<<*p<<endl;
    cout<<"value after function = "<<"  Double Pointer  "<<p2 <<"   Value  "<<*p2  << " Value " << **p2 <<endl;



    //notice only the value changed because in case of functions changes are reflected abck only when we pass address of the variable and not its value.
	return 0; 
} 
