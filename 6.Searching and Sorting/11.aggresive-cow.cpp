#include<bits/stdc++.h> 
using namespace std;



//writing to check if all cows can be alloted with min diffrence=mid btw them

bool cowfit(vector<int> barns,int n,int c,int minsep){
    int cnt=1;
    int least=barns[0];
    for(int i=1;i<n;i++){
        if((barns[i]-least)>=minsep){
            cnt++;
            least=barns[i];
            if(cnt==c)
            {
                 return true;
            }
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
        int n,c,val;

        cin>>n>>c;
        
        vector<int> barns;
        
        for(int i=0;i<n;i++){
        
            cin>>val;
        
            barns.push_back(val);
        }

        //sort the barn 
        sort(barns.begin(),barns.end());
        //now we know what barns are empty and where can we put cows.
        //lets calculate the maximum distance between two cows.ie. the diffrence btw the first barn and the last barn.
        int start=1;
        
        int end=barns[n-1]-barns[0];

        int ans= -1;
        
        while(start<=end){
            int mid=(start+end)/2;
            if(cowfit(barns,n,c,mid)){
                ans=mid;
                start=mid+1;
            }else{
                end=mid-1;
            }
        }

        cout<<"The maximum min-sepration between the cows is :-   "<<ans<<endl;

        return 0;
    }
