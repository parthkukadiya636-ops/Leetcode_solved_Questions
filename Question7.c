int maxProfit(int* prices, int pricesSize) {
    int n = pricesSize;
    int max1 , max =0;
    int min = prices[0];
    for(int i=1;i<n ;i++){
        if( prices[i]<min){
            min = prices[i];
        }
        else{
            max1 = prices[i] - min;
            if(max1>max){
                max = max1;
            }
        }
    }
    return max;
}