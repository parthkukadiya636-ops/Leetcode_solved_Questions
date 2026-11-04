class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        unordered_map<int, int> mp;

        int j = 0;
        int count = 0;

        while (j < nums.size()) {

            mp.clear();

            bool flag = true;

            for (int i = j; i < nums.size(); i++) {

                if (mp[nums[i]] == 1) {
                    flag = false;
                    break;
                }

                mp[nums[i]]++;
            }

            if (flag) {
                break;
            }

            j += 3;
            count++;
        }

        return count;
    }
};