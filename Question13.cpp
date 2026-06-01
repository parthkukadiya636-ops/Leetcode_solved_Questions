class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int left = 0;
        int right = 0;
        int zeros = 0;
        int maxlength = 0;
        int n = nums.size();

        while(right<n){

            if (nums[right] == 0){
                zeros++;
            }

            while(zeros>k){
                if(nums[left]==0){
                    zeros--;
                }
                left++;
            }

            maxlength = max(maxlength, (right-left+1));
            right++;

        }

        return maxlength;
     }
};