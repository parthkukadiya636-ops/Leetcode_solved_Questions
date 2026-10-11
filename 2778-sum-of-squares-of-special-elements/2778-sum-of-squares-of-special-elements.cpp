class Solution {
public:
    int sumOfSquares(vector<int>& nums) {

        long long ans= 0;
        int n = nums.size();

        for(int i=1; i<=nums.size(); i++){
            if(n%i == 0){
                long long x = nums[i-1];
                ans += x * x;
            }
        }

        return ans;
    }
};