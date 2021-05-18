//psuedo code 
        // Initialize:
        //     max_so_far = 0
        //     max_ending_here = 0

        // Loop for each element of the array
        // (a) max_ending_here = max_ending_here + a[i]
        // (b) if(max_so_far < max_ending_here)
        //             max_so_far = max_ending_here
        // (c) if(max_ending_here < 0)
        //             max_ending_here = 0
        // return max_so_far







// Header file for input output functions 
#include<iostream> 

using namespace std; 

void cs_subarray(int *a,int size){                                //time complexity = N as compared to n^3 of basic one and n+n^2 of cumilitive sum one
    int max_sum=0;
    int cs_sum=0;
    

    for(int i=0;i<size;i++){
        cs_sum+=a[i];
        if(cs_sum <0){
            cs_sum=0;
        }
        max_sum=(max_sum>cs_sum)?max_sum:cs_sum;
        cout<<"cs_sum "<<cs_sum<<"   max_sum  "<<max_sum<<endl;
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
    cs_subarray(a,size);
    
    
	return 0; 
} 