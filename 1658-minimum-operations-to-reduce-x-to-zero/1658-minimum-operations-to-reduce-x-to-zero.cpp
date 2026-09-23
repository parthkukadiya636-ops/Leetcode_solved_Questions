class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int n = nums.size();
        long long total = 0;

        for(int num:nums){
            total += num;
        }

        int left=0;
        long long target = total -x;
        int maxlen = -1;
        long long sum = 0;

        for(int right = 0; right<nums.size(); right++){

            sum += nums[right];

            while(sum >target && left <= right){
                sum -= nums[left];
                left++;
            }

            if(sum == target){

                maxlen = max(maxlen , right-left+1);

            }
        }
        return (maxlen == -1) ?-1 : n-maxlen;
    }
};