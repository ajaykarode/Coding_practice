class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(),t1buy = INT_MAX,t2buy = INT_MAX,sell1 = 0,sell2 = 0;
        for(int i = 0;i<n;i++){
            t1buy = min(t1buy,prices[i]);
            sell1 = max(sell1,prices[i]-t1buy);
            
            t2buy = min(t2buy,prices[i]-sell1);
            sell2 = max(sell2,prices[i]- t2buy);
            
        }
        return sell2;
        
    }
};