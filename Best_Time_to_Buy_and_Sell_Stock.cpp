class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ma=prices[0],mi=prices[0],diff=0;
        for(auto i:prices){
            if(i<mi){
                mi=i;
                ma=i;
            }
            else if(i>mi){
                ma=i;
                diff = max(diff,ma-mi);
            }
        }
        return diff;
    }
};