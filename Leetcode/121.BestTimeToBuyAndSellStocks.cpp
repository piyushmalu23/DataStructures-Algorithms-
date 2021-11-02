class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxa=0;
        int mina=INT_MAX;
        for(int i=0;i<prices.size();i++){
            mina=min(mina,prices[i]);
            maxa=max(maxa,prices[i]-mina);
        }
        return maxa;
    }
};
