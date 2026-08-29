class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {

        int n = nums.size();

         vector<pair<int, int>> arr;

        for(int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

         sort(arr.begin(), arr.end());

        vector<int> ans(n);

        int i = 0;

        while(i < n) {

            int j = i + 1;

             while(j < n && arr[j].first - arr[j - 1].first <= limit) {
                j++;
            }

             vector<int> indexes;

            for(int k = i; k < j; k++) {
                indexes.push_back(arr[k].second);
            }

            // Sort the indexes
            sort(indexes.begin(), indexes.end());

            // Put smallest values at smallest indexes
            for(int k = 0; k < indexes.size(); k++) {
                ans[indexes[k]] = arr[i + k].first;
            }

            // Go to next group
            i = j;
        }

        return ans;
    }
};