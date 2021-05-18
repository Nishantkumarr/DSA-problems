#include<iostream>
using namespace std;


void wavearray(int *arr, int start, int end) 
{ 
        void convertToWave(int *arr, int n){
        
        // Your code here
        for(int i=0;i<=n-1;i+2){
            if(arr[i]<arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        for(int i=1;i<=n-1;i+2){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        
    }
};
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