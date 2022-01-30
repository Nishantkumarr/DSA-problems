#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../input.txt", "r", stdin); 
    freopen("../output.txt", "w", stdout);
    #endif
        char a[1000];   //array of strings
        char largest[1000];
        int largelen=0,n;
        cin>>n;
        cin.get();//to get any extra key presses which otherwise would have been an empty string 
        for(int i=0;i<n;i++){
            cin.getline(a,1000);
            cout<<a<<endl;
            if(strlen(a)>largelen){
                strcpy(largest,a);
                largelen=strlen(a);
            }
        }
        cout<<largest;
        return 0;
    }
