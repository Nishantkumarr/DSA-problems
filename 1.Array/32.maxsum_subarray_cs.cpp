// Simple C++ program to display "Hello World" 

// Header file for input output functions 
#include<iostream> 

using namespace std; 




void cs_subarray(int *a,int size){                                //time complexity = n+n^2 as compared to n^3 of basic one
    int max_sum=0;
    int csarray[size];
    int cs_sum=0;
    
    // initialize the 0th element of cumiliative sum with the a[0] as 
    // cumsum=csarray[j]-csarray[i-1]. and this will give error when i=0; there fore we start the csarray 
    // from an index of i=1 and initilaize the index 0 with the a[0].
    csarray[0]=a[0];
    for(int i=1;i<size;i++){
        csarray[i]=csarray[i-1]+a[i];
    }
    for(int i=0;i<size;i++){
        cout<<csarray[i]<<endl;   
    }

    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            int sum=0;
            


            // why use this if else loop. bcoz when i =0 then i-1 is not possible and at that time the sum is not getting calculated.
            // also since i=0; ie the sum needed is the sum till jth element therefor we directly used the cumarray[j];
            
            if (i-1>0){
                sum=csarray[j]-csarray[i-1];
            }
            else{
                sum=csarray[j];
            }
            cout<<sum<<"("<<i<<j<<")    ";
            if(sum>max_sum){
                max_sum=sum;
            }
        }
    }
        cout<<endl<<"Maximum sum is   :-"<<max_sum<<endl;

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
    cs_subarray(a,size);
    
    
	return 0; 
} 