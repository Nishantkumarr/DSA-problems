// Simple C++ program to display "Hello World" 

// Header file for input output functions 
#include<bits/stdc++.h> 

using namespace std; 

// main function - 
// where the execution of program begins 

bool palindrome(char a){
    int i=0;
    int j=
}



int main() 
{ 
    char a[100];
    cout<<"Enter the array of characters :-";
    cin.getline(a,100,'%');                      //a=character array   100=max size of array        %=the character that marks the end of array
    cout<<a<<endl;
    
    if (palindrome(a)){
        cout<<"Palindrome";
    }else{
        cout<<"Not palindrome";
    }
    return 0;
}

