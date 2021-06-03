#include<bits/stdc++.h> 
using namespace std;

void rearrange(int *arr, int n)
{
    
    
}



int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    int *arr=new int(t);
    cin>>t;
    for (int  i = 0; i < t; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
    int low=0;
    int mid=0;
    int high=t-1;
    while(mid<=high)
    {
        if(arr[mid]>0)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[low]);
            mid ++;
            low++;
        }
        for (int i = 0; i < t; i++)
        {
            /* code */
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"mid"<<mid<<"high"<<high<<"low"<<low<<endl;
    
    }
   
    
    return 0;
    }
