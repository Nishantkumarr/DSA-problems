// Simple C++ program to display "Hello World" 

// Header file for input output functions 
#include<bits/stdc++.h> 

using namespace std; 

// main function - 
// where the execution of program begins 

int main() 
{ 
    // int t;
    // cin>>t;
    int t=1;
    while(t>0)
    {
        // int n;
        // cin>>n;
        
        int n=4;
        // int w[n],wsorted[n],l[n];
        
        //input weights 
        
        // for(int i=0;i<n-1;i++){
        // cin>>w[i];
        // cin>>wsorted[i];
        // }

        // //input the length of jump 
        // for(int i=0;i<n-1;i++){
        // cin>>l[i];
        // }
        int w[n]={2,1,4,3};
        int wsorted[n]={2,1,4,3};
        int l[n]={4,1,2,4};
        int p=0, least , count=0;
        //sort the weights 
        sort(wsorted,wsorted+n);
        cout<<"sort done ";


        while(p<n-1)
        {
            for(int i=0;i<n-1;i++)
            {
                int initial ,steps=0,final;

                if(w[i]==wsorted[p])
                {
                        initial=i;
                        if (p=0){
                            least=i;
                        }
                        steps = least-i;

                        count += (steps % l[i] ==0)?steps/l[i]:(steps/l[i])+1;
                        
                        final=initial+steps;

                        least=final+1;

                }
            }
            p++;
        }
        cout<<count;

        
    }
    return 0;
}
