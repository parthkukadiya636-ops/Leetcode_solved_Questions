class Solution {
public:
    int countValidSelections(vector<int>& nums) {

        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {

            if (nums[i] == 0) {

                for (int k = 0; k < 2; k++) {

                    vector<int> temp = nums;
                    int curr = i;
                    int dir = (k == 0) ? -1 : 1;

                    while (curr >= 0 && curr < n) {

                        if (temp[curr] > 0) {
                            temp[curr]--;
                            dir = -dir;
                        }

                        curr += dir;
                    }

                    bool flag = true;

                    for (int j = 0; j < n; j++) {
                        if (temp[j] != 0) {
                            flag = false;
                            break;
                        }
                    }

                    if (flag) count++;
                }
            }
        }

        return count;
    }
};