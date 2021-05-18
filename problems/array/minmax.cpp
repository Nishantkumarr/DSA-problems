#include<iostream>
using namespace std;


void minmax(int *arr, int n) 

{
    int min , max ,i;
    if (n%2!=0)
    {   
        
        if(arr[0]>arr[1]){
            max=arr[0];
            min=arr[1];
        }
        else if(arr[0]<arr[1]){
            max=arr[1];
            min=arr[0];
        }
        i=2;
    }
    else{
        max = arr[0];
        min = arr[0];
        i=1;
    }

    while (i<=n-1) { 
        if (arr[i]>arr[i+1]){
            if(arr[i]>max){
                max=arr[i];
            }
            else if (arr[i+1]<min){
                min=arr[i+1];
            }
        }

        
        else if (arr[i]<arr[i+1]){
            if(arr[i]<min){
                min=arr[i];
            }
            else if (arr[i+1]>max){
                max=arr[i+1];
            }
        }
        i+=2;
    } 
    cout<<"Largest Number = "<<max<<endl;
    cout<<"Smallest number ="<<min;
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
    minmax(a,size-1);
	return 0; 
} 