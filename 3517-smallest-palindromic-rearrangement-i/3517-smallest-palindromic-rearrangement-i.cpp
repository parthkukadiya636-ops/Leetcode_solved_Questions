class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>freq(26,0);

        for(char ch:s){
            freq[ch-'a']++;
        }
        string firsthalf = "";
        string middle = "";

        for(int i=0;i<26;i++){

            firsthalf.append(freq[i]/2, i + 'a');

            if(freq[i]%2 ==1){
                middle = char(i + 'a');
            }

        }

        string secondhalf = firsthalf;
        reverse(secondhalf.begin(), secondhalf.end());

        return firsthalf + middle + secondhalf;
    }
};