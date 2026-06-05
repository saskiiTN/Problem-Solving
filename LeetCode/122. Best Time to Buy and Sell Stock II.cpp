class Solution {
public:
    int maxProfit(vector<int>& prices) {
        bool sorted = true;
        int size = prices.size();
        for(int i = 0 ;i<prices.size()-1;i++){
            if(prices[i]>prices[i+1])
                sorted = false;
        }
        if(sorted){
            return prices[size-1]-prices[0] ;
        }
        sorted = true;
        for(int i = 0 ;i<prices.size()-1;i++){
            if(prices[i]<prices[i+1])
                sorted = false;
        }
        if(sorted){
            return 0;
        }
        int result = 0;
        int a,b;
        a = prices[0];
        for(int i = 1 ;i<prices.size();i++){
            if(prices[i]<a){
                a=prices[i];
            }else if(prices[i]>a){
                result+=prices[i]-a;
                a=prices[i];
            }
        }

        return result;
    }
};