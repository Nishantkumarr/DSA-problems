#include<bits/stdc++.h> 
using namespace std;

//bool function
class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    
    bool isposs(vector<int>arr,int n,int m,int currmin){
        int student=1;
        int pages=0;
        for(int  i=0;i<n;i++){
            if(pages+arr[i]>currmin){
                student++;
                pages=arr[i];
                
                if(student>m){
                    return false;
                }
            }else{
                pages+=arr[i];
            }
        }
        return true;
    }
    int findPages(vector<int> arr, int n, int m) 
    {
        //code here
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int start=*max_element(arr.begin(),arr.end());
        int end=sum;
        int ans=INT_MAX;
        while(start<=end){
            int mid=(start+end)/2;
            if(isposs(arr,n,m,mid)){
                ans=min(mid,ans);
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};
int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int nob;
        int nop;
        int total_pages=0;
        cin>>nob>>nop;
        if(nob<nop){
            cout<<"not possible";
            return 0;
        }
        vector<int> arr;
        for(int i=0;i<nob;i++){
            int val;
            cin>>val;
            arr.push_back(val);
        }


        Solution obj1;
        cout<<"The minimum max-diffrence is :-   "<<obj1.findPages(arr,nob,nop);


        return 0;
    }
