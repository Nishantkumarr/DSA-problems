#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int num,ans;
        cin>>num;
        int start=1;
        int end=num;

        while(start<end){
            int mid=(start+end)/2;
            if(mid*mid>num){
                end=mid-1;
            }
            else if(mid*mid==num){
                ans=mid;
                break;
            }else{
                start=mid+1;
                ans=mid;
            }
        }
        cout<<"The closest number to square root of the number is "<<ans<<endl;

        return 0;
    }
