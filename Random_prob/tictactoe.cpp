// psuedocode
// 0. enter all the empty poitions in an array named pos
// 1. check for no(x)-no(y)>1; 
//     1.a if yes return 3;


// 2. Check for no(x)==no(y)>1;
//     2.a if yes check if win(x)==win(y);
//         2.a.1 if yes then return 3;

// 3.if not above two then 
//     3.a check for wins 
//         3.a.1 row win
//         3.b.2 col win
//         3.c.3 dia win
//     3.b if win is true for any case then return 1;
// 4. if not any of above then
//     4.1 check whose turn it is 
//         4.1.a if no(x)>no(y): turn = o else turn =x;
    







#include<bits/stdc++.h> 
using namespace std;



//the functon where evrything is processed and later the value is sent to main function 
// int cal_func(char arr[3][3],int count,int nox,int no0){

  
//     return result;

// }


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        
        int t;
        cin>>t;
        while(t--)
        {
            char arr[3][3];
            int no_=0,no0=0,nox=0;  
            int result;
            int winx=0,wino=0;    
            //get the char array
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cin>>arr[i][j];
                    if(arr[i][j]=='_') no_++;
                    if(arr[i][j]=='X') nox++;
                    if(arr[i][j]=='O') no0++;
                }
            }
            //check for wins and no of wins seperatly
            //row
            for(int i=0;i<3;i++){
                if ((arr[0][i]==arr[1][i])&&(arr[1][i]==arr[2][i])){
                    if(arr[0][i]=='X'){
                        winx++;
                    }else if(arr[0][i]=='O'){
                        wino++;
                    }
                }
            }
            //col
            for(int i=0;i<3;i++){
                if ((arr[i][0]==arr[i][1])&&(arr[i][1]==arr[i][2])){
                    if(arr[i][0]=='X'){
                        winx++;
                    }else if(arr[i][0]=='O'){
                        wino++;
                    }
                }
            }

            //diagonally
            if((arr[0][0]==arr[1][1])&&(arr[1][1]==arr[2][2])){
                if (arr[1][1]=='X'){
                    winx++;
                }
                if (arr[1][1]=='O'){
                    wino++;
                }
            }
            if((arr[0][2]==arr[1][1])&&(arr[1][1]==arr[2][0])){
                if (arr[1][1]=='X'){
                    winx++;
                }
                if (arr[1][1]=='O'){
                    wino++;
                }
            }
            cout<<"nox"<<nox<<" no0 "<<no0<<" winx "<<winx<<" wino "<<wino<<endl;
            //first check for no(x) and no(o)
            if(no0>nox){
                result=3;
            }else if (nox-no0>1){
                result= 3;
            }
            else if((nox>no0)&&(wino==0)&&(winx==1)){
                result=1;
            }
            else if((nox==no0)&&(wino==1)&&(winx==0)){
                result= 1;
            }
            else if((no_==0) &&(wino+winx==0)){
                result=1;
            }
            else if((no_==0) &&(winx==2)){
                result=1;
            }else if((no_>0)&&(wino+winx==0)){
                result=2;
            }else{
                result=3; 
            }
            cout<<result<<endl;   
    }   
    return 0;
}
