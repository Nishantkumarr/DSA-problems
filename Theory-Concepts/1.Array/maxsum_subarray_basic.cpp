// Simple C++ program to display "Hello World" 

// Header file for input output functions 
#include<iostream> 

using namespace std; 




void subarray(int *a,int size){
    int max_sum=0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                    sum+=a[k];
                    
            }
            cout<<sum<<"  ";
            if (sum>max_sum){
                max_sum=sum;
            }
        }
    }
        cout<<"Maximum sum is   :-"<<max_sum<<endl;

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
    subarray(a,size);
    
    
	return 0; 
} 