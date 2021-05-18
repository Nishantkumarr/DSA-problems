// Simple C++ program to display "Hello World" 

// Header file for input output functions 
#include<bits/stdc++.h> 

using namespace std; 

// main function - 
// where the execution of program begins

int main() 
{ 
    char a[100];
    char b[]={'a','b','c'};
    char c[]="hello";


    cout<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}


//output
// nisha@TheMonk MINGW64 ~/OneDrive/Desktop/InterviewPrep/DSA-CPP/charArray (main)
// $ ./ca
// pbcp
//  ╝■a
// abcpo                    //garbage value
//     ╝■a
// hello          ..the complete array if characters with null pointers prints the array perfectly 
