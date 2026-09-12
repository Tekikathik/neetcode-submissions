class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=prices[prices.size()-1];
        int ma=INT_MIN;
        for(int i=prices.size()-2;i>=0;i--){
            ma=max(ma,a-prices[i]);
            a=max(a,prices[i]);
        }
        // if (a==prices[0]) return 
        if (ma<0) return 0;
        return ma;
    }
};
