#include<bits/stdc++.h> 
using namespace std;


//checking functions
bool isposs(int n,int m,int x,int y,int mid){
    if((m/n)>=x){
        return true;
    }
    int totalc=0;
    totalc=m+(n-mid)*y;
    if((totalc/mid)>=x){
        return true;
    }
    return false;
}



int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int n,m,x,y,ans=-1;
        cin>>n>>m>>x>>y;
        

        //binary search application code

        int s=1;
        int e=n;
        while(s<=e){
            int mid=(s+e)/2;
            if(isposs(n,m,x,y,mid)){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
        }

        cout<<"Ans = "<<ans<<endl;
        return 0;
    }
