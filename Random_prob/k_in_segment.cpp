#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,sos,key,prsnt=0;
    cout<<"enter the size";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Enter the size of segement and key :- ";
    cin>>sos>>key;
    int d=size/sos;
    while(d>0){
        if (binary_search(array,(array+d*sos),key)){
            prsnt=1;
            d--;
        }else{
            prsnt=0;
            break;
        }
    }  
    const char *output=prsnt==1?"Present":"Not present";
    cout<<output;
    return 0;  
}