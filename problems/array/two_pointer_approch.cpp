// Simple C++ program to display "Hello World" 

// Header file for input output functions 
#include<iostream> 

using namespace std; 




void two_pointer(int *a,int size, int k ){
    int start = 0;
    int last=size-1;
    int i=start;
    int j=last;
    while(i<=j){
        if ((a[i]+a[j]) >k)
        {
            j--;
        }
        else if((a[i]+a[j])<k)
        {
            i++;
        }
        else{
        cout<<"the numbers are"<<a[i]<<"  "<<a[j]<<endl;
            i++;
            j--;
        }
    }

}

// main function - 
// where the execution of program begins 
int main() 
{ 
    int a[10],size,k;

    cout<<"Enter the size (sorted array):-"<<endl;
    cin>> size;
    cout<<"Enter the array:- ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Enter the sum of elements : -";
    cin>>k;
    two_pointer(a,size,k);
	return 0; 
} 