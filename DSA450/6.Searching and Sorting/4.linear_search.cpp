// Simple C++ program to display "Hello World" 

// Header file for input output functions 
#include<iostream> 

using namespace std; 

// main function - 
// where the execution of program begins 
int main() 
{ 
    int a[10],search_var,size,flag=0;

    cout<<"Enter the size (less than 10):-";
    cin>> size;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Enter the no to be searched "<<endl;
    cin>>search_var;
    
    for(int j=0;j<size;j++){
        if (a[j]==search_var){
            cout<<"Found the element at" <<j<<endl;
            flag=1;
        }

    }
    if (flag==0){
        cout<<"Not found";
    }
	return 0; 
} 