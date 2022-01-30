#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int n,m,key;
        cin>>n>>m>>key;
		int arr[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}
        int rows=n-1;
        int cols=m-1;
        bool flag=false;
        int i=0,j=cols;
        while((i<rows)&&(j>=0)){
            if(arr[i][j]==key){
                flag=true;
                cout<<"Yes";
            }
            if(arr[i][j]>key){
                j--;
            }else{
                i++;
            }
        }
       if(!flag){
           cout<<"no";
       }
        return 0;
    }




//alternate approch

 // while((row<n)&&(col<m)){
        //     cout<<row<<col<<endl;
        //     if (arr[row][col]<key){
        //         row++;
        //     }else if(arr[row][col]==key){
        //         cout<<"Found it"<<"row"<<row<<" col "<<col<<endl;
        //         break;
        //     }else{
        //         int i=col;
        //         int flag=0;
        //         while(i>=0){
        //             if(arr[row][i]==key){
        //                 cout<<"found "<<"row "<<row<<" col "<<i<<endl;
        //                 flag=1;
        //                 break;
        //             }else if(arr[row][i]>key){
        //                 i--;
        //             }else{
        //                 col--;
        //             }
        //         }
        //         if(flag==1){ col=i;break;}
        //     }
        //     if((row==n-1)&&(col==m-1))  {
        //         break;
        //     } 

        // }

        // cout<<"row"<<row;
        // cout<<"col"<<col;