 int maxProfit(vector<int>& arr) {
        int n = arr.size();
       int max  = 0;
       int buy = arr[0];
       int sell = arr[0];
        for(int i = 0;i<n;i++){
             if((sell-buy)>0){
                max +=(sell-buy);
                 buy = 0;
                 sell = 0;
            }
            if(i+1<n){
            if(arr[i+1]>arr[i]){
                buy = arr[i];
                sell = arr[i+1];
            }
            }
           
           
        }
        return max;
    }
