// Simple C++ program to display "Hello World" 

// Header file for input output functions 
#include<bits/stdc++.h> 

using namespace std; 

// main function - 
// where the execution of program begins 

int main() 
{ 
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        if (n>=3)
            {
                int arr[n];
                for(int i=0;i<n;i++){
                    cin>>arr[i];
                }
                sort(arr,arr+n);
                int ans1=abs(arr[0]-arr[1]) + abs(arr[1]-arr[n-1])+abs(arr[n-1]-arr[0]);
                int ans2=abs(arr[0]-arr[n-2]) + abs(arr[n-2]-arr[n-1])+abs(arr[n-1]-arr[0]);
                int ans=ans1>ans2 ?ans1:ans2;
                cout<<ans;
                t--;
            }
    }
    return 0;
}
