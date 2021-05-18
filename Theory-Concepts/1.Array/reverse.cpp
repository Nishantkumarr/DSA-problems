#include<iostream>
using namespace std;


void reverse(int *arr, int start, int end) 
{ 
    while (start < end) { 
        int temp = arr[start]; 
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    } 
} 

void reverse_byd(int *arr , int size, int d){
    reverse(arr,0,d-1);
    reverse(arr,d,size-1);
    reverse(arr,0,size-1);
}

// main function 
// where the execution of program begins 
int main() 
{ 
    int a[10],size,k,d;

    cout<<"Enter the size (sorted array):-"<<endl;
    cin>> size;
    cout<<"Enter the array:- ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Enter the number by which you need to reverse the array : - ";
    cin>>d;
    reverse_byd(a,size-1,d);
    
    cout<<"The new array"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i];
    }
	return 0; 
} 