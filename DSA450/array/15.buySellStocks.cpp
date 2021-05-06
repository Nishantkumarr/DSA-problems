///best time to buy and sell a stock.

// approch one :
//         1.maintain an array that contain the largest item in right.
//         2.now run a loop to calculate the diffrence btw the maximum element in
//             right and the arr element.
//         3.Maintain an variable names maxProfit : that stores the maxprofit till now.
//         4. return the variable at the end;

// Approch two:
//         1. Maintain two varibales one that contain the minimum element in the arr.
//         2. and the other variable stores the maxProfit.
//         3. update the value of minSofar element and then calculate the profit.
//         4.Check if the profit is greator than the maxProfir.




// 121. Best Time to Buy and Sell Stock
// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// Example 2:

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.
 

// Constraints:

// 1 <= prices.length <= 105
// 0 <= prices[i] <= 104



#include<bits/stdc++.h> 
using namespace std;

void getarray( int *arr,int size){
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
}

void buysellMax(int*arr,int size){
    int minSofar=arr[0], maxProfit=0;
    for (int i=0;i<size;i++){
        if(arr[i]<minSofar){
            minSofar=arr[i];
        }
        if((arr[i]-minSofar)>maxProfit){
            maxProfit=arr[i]-minSofar;
        }
    }
    cout<<"MaxProfit"<<maxProfit<<endl;
    cout<<"MinSofar"<<minSofar<<endl;
}


int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    #ifndef ONLINE_JUDGE 
    freopen("../../input.txt", "r", stdin); 
    freopen("../../output.txt", "w", stdout);
    #endif
        int size;
        int *arr=new int[size];
        cin>>size;
        getarray(arr,size);
        buysellMax(arr,size);
        return 0;
    }
