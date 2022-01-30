// Simple C++ program to display "Hello World" 

// Header file for input output functions 
#include<bits/stdc++.h> 

using namespace std; 

// main function - 
// where the execution of program begins 

int main() 
{ 
    int n,max=1;
    cin>>n;
    for (int i=1;i<10;i++)
    {

        if ((n%i==0)&&(i>max))
        {
            max=i;
        }
    }
    cout<<max;

}
