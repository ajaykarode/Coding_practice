class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i,max = 0;
        for(i = 1;i<n;i++){
            if(prices[i] > prices[i-1]){
                max += prices[i] - prices[i-1];
            }
            
        }
            
        return max;
        
    }
};