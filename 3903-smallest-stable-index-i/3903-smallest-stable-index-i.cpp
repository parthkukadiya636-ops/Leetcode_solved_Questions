class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size();
        int maxi = INT_MIN;
        int ans = INT_MAX;
         
        int index;

        for(int i=0; i<n; i++){
            maxi = max(nums[i],maxi);

            int mini = INT_MAX;

            for(int j=i; j<n; j++){
                mini = min(nums[j],mini);
                
            }

            int temp = maxi - mini;

            if(temp <=k){
                ans = min(ans,i);
            }
        }

        if(ans == INT_MAX){
            return -1;
        }
        else{
            return ans;
        }


        
    }
};