class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        int n = s.size();
        int len = INT_MAX;
        string ans = "";

        for(int i = 0; i < n; i++) {

            vector<int> arr;

            for(int j = i; j < n; j++) {

                if(s[j] == '1') {
                    arr.push_back(s[j]);
                }

                if(arr.size() == k) {

                    if((j - i + 1 < len) || (j - i + 1 == len && s.substr(i, len) < ans)) {
                        len = j - i + 1;
                        ans = s.substr(i, len);
                    }

                    break;
                }
            }
        }

        return ans;
    }
};