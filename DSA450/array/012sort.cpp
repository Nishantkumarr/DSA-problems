//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo


//dutch-flag-algorithm

#include<bits/stdc++.h> 
using namespace std;


void sort012(int *arr,int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            
            swap(arr[low],arr[mid]);
            low ++;
            mid++;
        }
        else if (arr[mid]==1)
        {
            mid ++;
        }
        else
        {
            swap(arr[high],arr[mid]);
            high--;

        }
        cout<<" "<<mid<<" "<<low<<" "<<high<<" "<<endl;
        cout<<"mid "<<mid;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<arr[i];
        }
        cout<<endl;
    }
}


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 

    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);

    #endif

    int t;
    cin >>t;
    while(t--)
    {
        int n ,*arr=new int(n);
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>arr[i];
        }
        sort012(arr,n);
        cout<<"the main function ";
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<arr[i];
        }
    }
    
    return 0;
    }
