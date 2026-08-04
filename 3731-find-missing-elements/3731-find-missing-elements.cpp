class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        map<int, int> mp;

        int mn = INT_MAX;
        int mx = INT_MIN;

        for(int x : nums)
        {
            mp[x]++;

            mn = min(mn, x);
            mx = max(mx, x);
        }

        vector<int> ans;

        for(int i = mn + 1; i < mx; i++)
        {
            if(mp[i] == 0)
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};