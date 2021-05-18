// Simple C++ program to display "Hello World" 

// Header file for input output functions 
#include<iostream> 

using namespace std; 




void selectionsort(int *a,int size){
    for (int i=0;i<size-1;i++){
        for (int j=i;j<size-1;j++){
            
            if (a[j]<a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    cout<<"From the function"<<endl;
    for(int j=0;j<size;j++){
        cout<<a[j]<<endl;
    }
    
    
}

// main function - 
// where the execution of program begins 
int main() 
{ 
    int a[10],size;

    cout<<"Enter the size (less than 10):-"<<endl;
    cin>> size;
    cout<<"Enter the array:- ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    selectionsort(a,size);
    cout<<"The entered array after sorting is :-"<<endl;
    for(int j=0;j<size;j++){
        cout<<a[j]<<endl;
    }
    
	return 0; 
} 