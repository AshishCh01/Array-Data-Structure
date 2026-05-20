#include <iostream>
#include <vector>
using namespace std;
int maximumProfit(vector<int> &prices) {
    int mini = prices[0];
    int maxProfit = 0;
    int n = prices.size();
    for (int i=1; i<n; i++) {
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}

int maxProfit(vector<int>& prices) {
        
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(int i = 0; i < prices.size(); i++) {
        // update minimum buying price
        minPrice = min(minPrice, prices[i]);
        // calculate current profit
        int profit = prices[i] - minPrice;
        // update maximum profit
        maxProfit = max(maxProfit, profit);
    }
    return maxProfit;
}

int main()
{
    vector<int> prices = {7,1,2,5,4,6};
    cout << maximumProfit(prices);

    return 0;
}