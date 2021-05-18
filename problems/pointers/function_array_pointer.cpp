#include<iostream> 

using namespace std; 

int sum(int*a,int size){
    
    //size will be equal to size of pointer and not an array unlike main block.
    cout<<"Size of array in Function block   "<< sizeof(a)<< endl ; 

    int sum =0;
    for (int i=0;i<size;i++){
        sum+=a[i];
    }

    return sum;
}

int main() 
{ 
	int a[10]={0,1,2,3,4,5,6,7,8};

    //defining a pointer 
    int * p = &a[10];    

    //p denotes the value in pointer ie. address of a. And *p is value of a . (*)is called derefrencing opertor	
    cout<<p <<" "<<*p <<endl;
    

    //the array is when passed to a function it just passes as an pointer and not as a whole array.
    cout<<"Size of array in main block   "<< sizeof(a)<< endl ; 


     int sum1 = sum(a,9);
     int sum2 = sum(a+3,6);
    //a function to calculate sum of elements of array with parameters (arrayname, arraySize)
    cout<<"Sum of elements from index 0 = " <<sum1 << endl ;    
    //also we can pass a part of the array 
    cout<<"Sum of elements from index 3 = " <<sum2 << endl ;    

    
    return 0; 
} 
