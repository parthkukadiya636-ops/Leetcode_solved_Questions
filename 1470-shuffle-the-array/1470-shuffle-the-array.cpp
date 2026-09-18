class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int>nums1(2*n);
        int j=0;

        for(int i=0; i<n; i++){

            nums1[j] = nums[i];
            j += 2; 
        }
        j=1;

        for(int i=n; i<2*n; i++){

            nums1[j] = nums[i];
            j += 2; 
        }

return nums1;




    }
};