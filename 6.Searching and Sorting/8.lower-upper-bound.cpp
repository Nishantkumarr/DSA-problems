// using the already available stl functions to calculate the lower boun and upper bound of a key.
//we can also calulate the frequency of a key using these functions.

//both of them return the address of the key.
//lowerbound return the address of the index where the element is equal to or greator than the upper bound
//and upperbound return the addres of the index with element strictly greator than the key;




#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int arr[]={1,2,4, 6,7,9 ,11,27,19,34,40,40,40,58};
        int key=40;
        int arr_size=sizeof(arr)/sizeof(arr[0]);

        //lowerbound is
        auto it=lower_bound(arr,arr+arr_size,key);
        cout<<"address of lower bound of "<<key<<" is "<<it<<endl<<"And the index value is  "<<it-&arr[0]<<endl;

        ///upper bound is  
        auto ip=upper_bound(arr,arr+arr_size,key);
        cout<<"address of lower bound of "<<key<<" is "<<ip<<endl<<" And the index value is  "<<ip-&arr[0]<<endl;

        //frequency of key 
        cout<<"frequency "<<ip-it;
        return 0;
    }
