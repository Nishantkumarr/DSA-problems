#include<bits/stdc++.h> 
using namespace std;

bool isPalindrome(string output){
    int start=0;
    int end=output.length()-1;
    while(start<end){
        if(output[start]!=output[end]){
                return false;

        }else{
            start++;
            end--;
        }
    }
    return true;
}



void print_sbstr(string s , string output,vector<string> &outarr){

    // output="bccb";
    if(s.length()==0){
        
        if(isPalindrome(output))
        {
            outarr.push_back(output);
        }
    }
    else{

        print_sbstr(s.substr(1),output,outarr);
        print_sbstr(s.substr(1),output+s[0],outarr);
    }
}



int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        string s,output;
        vector<string> outarr;
        output="";
        getline(cin,s);
        print_sbstr(s,output,outarr);
        int max=0;
        string maxs="";

        for(auto it:outarr){
            if(it.length()>max){
                max=it.length();
                maxs=it;
            }
        }
        cout<<"Longest String :- "<<maxs<<endl;
        return 0;
    }
