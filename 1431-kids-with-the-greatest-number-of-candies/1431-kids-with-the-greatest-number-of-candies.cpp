class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candies =0;
        int n = candies.size();
        vector<bool>ans(n);

        for(int i=0; i<n; i++){
            max_candies = max(max_candies,candies[i]);
        }

        for(int i=0; i<n;i++){
            if((candies[i] + extraCandies) >= max_candies){

                ans[i] = 1;

            }
            else{
                ans[i] = 0;

            }
        }
        return ans;
    }
};