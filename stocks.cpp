class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max = INT_MIN,minind = 0;
        int min = INT_MAX,maxind = n-1;
        int strt = 0;
        for(int i =0;i<n;i++){
            if(prices[i]<min){
                min = prices[i];
                minind = i;
                }
            if(prices[i]>max){
                max = prices[i];
                maxind = i;
                }
         }
        if(maxind >minind){
            return = max-min;
        }else{
            for(int i =0;i<= maxind;i++){
            if(prices[i]>max){
                max = prices[i];
                }
            }
        }
        for(int i =strt;i<n;i++){
            if(prices[i]>max){
                max = prices[i];
                }
            }
        
        
        int profit = max- min;
        if(profit<=0){
            return 0;
        }else{
        return profit;
        }        
    }
};