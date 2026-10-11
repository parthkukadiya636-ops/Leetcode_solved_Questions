class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        vector<int>freq(26,0);
        vector<int>freq1(26,0);

        for(char ch : ransomNote){
            freq[ch - 'a']++;
        }

        for(char ch : magazine){

            freq1[ch - 'a']++;
        }

        for(char ch : ransomNote ){
            if(freq1[ch - 'a'] < freq[ch - 'a']){
                return false;
            }
        }
        
        return true;
    }
};