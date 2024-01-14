class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        int buy_price = prices[0];
        int sell_price;
        int profit =0;

        for(int i=0; i<prices.size(); i++){
            buy_price = min(buy_price, prices[i]);
            profit = max(profit, prices[i]-buy_price);
        }
        return profit;

        
    }
};
