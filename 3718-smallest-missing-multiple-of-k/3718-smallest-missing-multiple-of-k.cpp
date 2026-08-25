class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        vector<int> arr;
        int n = nums.size();


        for(int i=0; i<n; i++){
            if(nums[i] % k == 0){
                arr.push_back(nums[i]);
            }
        }
        sort(arr.begin(), arr.end());

        int m = arr.size();
        int expected = k;

        for(int i = 0; i < m; i++) {

            if(arr[i] == expected) {
            expected += k;
            }
            else if(arr[i] > expected) {
            break;
            }
        }

return expected;
    }
};