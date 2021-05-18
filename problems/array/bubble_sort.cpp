// Simple C++ program to display "Hello World" 

// Header file for input output functions 
#include<iostream> 

using namespace std; 




void bubblesort(int *a,int size){
    bool swapped;
    for (int i=0;i<size;i++){
        for (int j=0;j<size-i-1;j++){                                   //the sorted end is the last end 
            
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped = true;
                                                                  //therefore we keep on decreasing the j'srange and staerted it from 0
                                                                      //the algo runs a couple of extra times. 
            }

            cout<<"From the function"<< i <<endl;
            for(int j=0;j<size;j++){
                cout<<a[j]<<endl;
            }

            
            if (swapped!=true){
            break;
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
    bubblesort(a,size);
    cout<<"The entered array after sorting is :-"<<endl;
    for(int j=0;j<size;j++){
        cout<<a[j]<<endl;
    }
    
	return 0; 
} 