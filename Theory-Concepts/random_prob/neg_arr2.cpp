#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    int *arr=new int (t);
    cin >>t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        cin>>arr[i];
    }
    int i=-1;
    for (int j = 0; j < t; j++)
    {
        /* code */
        if(arr[j]<0)
        {
            i++;
            swap(arr[i],arr[j]);

        }
    }
    cout<<"answer"<<endl;
    for (int i = 0; i < t; i++)
    {
        /* code */
        cout<<arr[i]<<endl;
    }
     
    
    return 0;
    }
