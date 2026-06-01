class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int profit = 0;
        for(int price : prices){
            if(price<minprice){
                minprice=price;
            }
            else if(price - minprice > profit){
                profit = price - minprice;
            }
        }
        return profit;
    }
};