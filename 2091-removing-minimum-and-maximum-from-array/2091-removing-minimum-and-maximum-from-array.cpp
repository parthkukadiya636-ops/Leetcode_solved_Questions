class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int maximum = INT_MIN;
        int minimum = INT_MAX;

        int max_index = 0;
        int min_index = 0;

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            if(nums[i] > maximum) {
                maximum = nums[i];
                max_index = i;
            }

            if(nums[i] < minimum) {
                minimum = nums[i];
                min_index = i;
            }
        }

        int left = min(max_index, min_index);
        int right = max(max_index, min_index);

         int option1 = right + 1;

         int option2 = n - left;

        
        int option3 = (left + 1) + (n - right);

        return min({option1, option2, option3});
    }
};