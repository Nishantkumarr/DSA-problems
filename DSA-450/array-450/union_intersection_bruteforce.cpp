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
    cin >>t;
    while(t--)
    {
        int n1,n2;
        cin>>n1>>n2;
        int *array1 =new int (n1);
        int *array2 = new int (n2);
        int *arrayf = new int (n2+n1);
        
        for (int  i = 0; i < n1; i++)
        {
            /* code */
        cin>>array1[i];
        }
        for (int  i = 0; i < n2; i++)
        {
            /* code */
            cin>>array2[i];
        }
        
        //
        

        

    }    
    return 0;
    }
