class Solution {
public:
    int minimumPushes(string word) {

        int freq[26] ={0};

        for(char ch: word){
            freq[ch -'a']++;
        }

        sort(freq ,freq+26, greater<int>());
        
        int ans =0;
        int push =1;

        for(int i=0;i<26;i++){

            if(freq[i]==0){
                break;
            }

            ans += push * freq[i];

            if((i+1)%8 == 0){
                push++;
            }

        }
        return ans;
    }
};