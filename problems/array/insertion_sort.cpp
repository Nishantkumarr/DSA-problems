// Simple C++ program to display "Hello World" 

// Header file for input output functions 
#include<iostream> 
#include <bits/stdc++.h>
using namespace std; 




void insertionsort(int *a,int size){              
    for (int i=1;i<size;i++){
        int key=a[i];
        for (int j=i-1;j>=0;j--){
            if(a[j]>key){
                swap(a[j],a[j+1]);
            }
        }
    }
}

// main function - 
// where the execution of program begins 
int main() 
{ 
    int a[100],size;

    cout<<"Enter the size (less than 100):-"<<endl;
    cin>> size;
    cout<<"Enter the array:- ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    insertionsort(a,size);
    cout<<"The entered array after sorting is :-"<<endl;
    for(int j=0;j<size;j++){
        cout<<a[j]<<endl;
    }
    
	return 0; 
} 