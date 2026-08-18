class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        int n= nums.size();

        int ans = -1;

         

        unordered_map<int, int>count;

        for(int i=0; i<=n-k; i++){

            unordered_map<int, int>freq;
             

            for(int j=i; j<i+k; j++){
                freq[nums[j]]++;
            }

            for(auto &p : freq){
                 count[p.first]++;
            }
        }



        for(auto &p : count){
                if(p.second == 1){
                    ans= max(ans, p.first);
                }
            }
        return ans;

    }
};