#include<bits/stdc++.h> 
using namespace std;

void getarray( int *arr,int size){
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
}




int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 
    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int size;
        cin>>size;
        int *arr = new int[size];
        vector<int> ans;
        getarray(arr,size);
        int cus_max=0,totalsum=0;
        int i=1,initial=arr[0];
        while(i<size){
            cd=arr[i]-initial;
            maxd=max(maxd,cd);
            if(arr[i]<initial){
                cout<<arr[i-1]<<endl;
                cus_max=arr[i-1]-initial;
                ans.push_back(cus_max);
                cus_max=0;
                initial=arr[i];
                cout<<initial<<"initial"<<endl;
            }else if(i==size-1){
                cus_max=arr[i]-initial;
                ans.push_back(cus_max);
            }
            i++;
        }
        int num=ans.size();
        cout<<"num"<<num<<endl;
        sort(ans.begin(),ans.end());
        cout<<ans[num-1]<<" "<<ans[num-2]<<endl;
        totalsum=ans[num-1]+ans[num-2];
        cout<<totalsum;
        return 0;
    }
//not done yet;