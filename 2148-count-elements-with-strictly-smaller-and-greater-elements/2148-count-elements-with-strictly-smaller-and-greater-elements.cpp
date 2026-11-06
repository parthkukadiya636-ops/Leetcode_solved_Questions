class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;

        int countmax = 0;
        int countmin = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] > maxi) {
                maxi = nums[i];
                countmax = 1;
            }
            else if(nums[i] == maxi) {
                countmax++;
            }

            if(nums[i] < mini) {
                mini = nums[i];
                countmin = 1;
            }
            else if(nums[i] == mini) {
                countmin++;
            }
        }

        if(maxi == mini) {
            return 0;
        }

        return nums.size() - countmax - countmin;
    }
};