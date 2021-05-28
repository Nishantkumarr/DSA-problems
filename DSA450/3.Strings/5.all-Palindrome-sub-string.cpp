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



void print_sbstr(string s , string output){

    // output="bccb";
    if(s.length()==0){
        if(isPalindrome(output))
        {
         cout<<output<<endl;
        }
    }
    else{

        print_sbstr(s.substr(1),output);
        print_sbstr(s.substr(1),output+s[0]);
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
        output="";
        getline(cin,s);
        print_sbstr(s,output);
        return 0;
    }
