#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> prices = {2,4,1};
    int sell=0,buy=0,count1=0,count2=0,profit=0;
    buy = prices[0];

    for (int i = 0; i < prices.size(); i++)
    {
            if (prices[i] < buy)
            {
                buy = prices[i];
                count2 = i;
            }
    }

    sell = prices[count2];

    for (int i = count2; i < prices.size(); i++)
    {
            if(count2 == prices.size()-1){
                sell = 0;
                profit = 0;
                break;
            }
            else if (prices[i] > sell)
            {
                sell = prices[i];
                count1 = i;      
            }
    }

    if (profit > sell-buy)
    {
        cout<<profit;
    }
    else{
        cout<<sell-buy;
    }
    


    // cout<<buy<<"  "<<count2+1<<"  "<<sell<<"  "<<count1+1;
    
    int buy = prices[0];
        int sell = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
                sell = prices[i];  // Reset sell to prevent selling before buying
            } else if (prices[i] > sell) {
                sell = prices[i];
                profit = max(profit, sell - buy);
            }
        }

        cout<< profit;
    
}