#include<bits/stdc++.h> 
using namespace std;



bool isposs(vector<int> cooks,int n,int p,int mid){
    int cnt = 0;
    for(int i=0;i<n;i++){
        int x=2;
        int time=cooks[i];
        while(time<=mid){
            cnt++;
            time+=x*cooks[i];
            x++;
        }
        if(cnt>=p){
            return true;
        }
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
        int t;
        cin>>t;
        while(t--){

            int p;
            int n;
            int val;
            int ans=INT_MAX;
            cin>>p>>n;
            vector<int> cooks;
            for(int i=0;i<n;i++){
                cin>>val;
                cooks.push_back(val);
            }
            //find the fastest chef
            int fastr=*min_element(cooks.begin(),cooks.end());
            int start=0;
            int end=(p*(p+1)*fastr)/2;

            //binary seach implementation
            while(start<=end){
                int mid=(start+end)/2;
                if(isposs(cooks,n,p,mid)){
                    end=mid-1;
                    ans=mid;
                }else{
                    start=mid+1;
                }
            }

            cout<<ans<<endl;
        }
       return 0;
    }
