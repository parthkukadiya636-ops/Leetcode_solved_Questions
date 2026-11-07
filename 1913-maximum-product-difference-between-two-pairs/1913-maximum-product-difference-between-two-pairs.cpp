class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

        int max = INT_MIN;
        int min = INT_MAX;
        int secmax = INT_MIN;
        int secmin = INT_MAX;

        for(int i =0; i<nums.size(); i++){

            if(nums[i] > max ){
                secmax = max;
                max = nums[i];
            }
            else if(nums[i] <= max && nums[i] > secmax){
                secmax = nums[i];
            }
            
            if(nums[i] < min){
                secmin = min;
                min = nums[i];
            }
            else if(nums[i] >= min && nums[i] < secmin){
                secmin = nums[i];
            }
        }
        return ((max * secmax) - (min * secmin));
    }
};