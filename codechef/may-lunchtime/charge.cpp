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

        //get q
        for(int i=0;i<k;i++){
	        cin>>qval;
	        q.push_back(qval);
	    }


	    for(int i=0;i<k;i++){
            cout<<"q "<<q[i]<<endl;
            if(s[q[i]-1]=='0'){
                cout<<"equal 0"<<endl;
                s[q[i]-1]='1';
                cout<<calsum(s,n)<<endl;
            }else{
                cout<<"equal 1"<<endl;
                s[q[i]-1]='0';
                cout<<calsum(s,n)<<endl;
            }
        }
        
	}
	return 0;
}
