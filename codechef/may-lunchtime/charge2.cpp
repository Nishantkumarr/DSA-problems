#include<bits/stdc++.h> 
using namespace std;

int calsum(char *s,int n){
    int sum=0;
     for(int i=0;i<n-1;i++){
	        if(s[i]==s[i+1]){
	            sum+=2;
	        }else{
	            sum+=1;
	        }
	}
    return sum;
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
	    int n,k;
	    cin>>n>>k;
        char *s=new char[n];
        vector<int> q;
	    int qval;

        //get s
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
        int sum=calsum(s,n);
        //get q
        for(int i=0;i<k;i++){
	        cin>>qval;
	        q.push_back(qval);
	    }
	    
	    
	    for(int i=0;i<k;i++){
	        //startcase
            int sum2;
	        if(q[i]==1){
                 if(s[q[i]-1]==s[q[i]]){
                     sum2=sum-1;
                 }else{
                     sum2=sum+1;
                 }
                 s[q[i]-1]=s[q[i]-1]=='0'?'1':'0';
    	           
	        }else if(q[i]==n){
	             if(s[q[i]-2]==s[q[i]-1]){
                     sum2=sum-1;
                 }else{
                     sum2=sum+1;
                 }
                 s[q[i]-1]=s[q[i]-1]=='0'?'1':'0';
	        }else{
	            if(s[q[i]-1]==s[q[i]]){
                     sum2=sum-1;
                 }else{
                     sum2=sum+1;
                 }
                 
                  if(s[q[i]-2]==s[q[i]-1]){
                     sum2=sum2-1;
                 }else{
                     sum2=sum2+1;
                 }
                 s[q[i]-1]=s[q[i]-1]=='0'?'1':'0';
	        }
	        cout<<sum2<<endl;

	    }

	}
	return 0;
}
