class Solution {
public:
    bool detectCapitalUse(string word) {
        int Upper = 0;
        int Lower = 0;

        for(char ch : word){
            if(ch >= 'A' && ch <= 'Z'){
                Upper++;
            }
            else{
                Lower++;
            }
        }

        if(Upper == word.size() && Lower == 0){
            return true;
        }
        else if(Upper == 1 && (word[0]>= 'A' && word[0] <= 'Z') && Lower == word.size()-1){
            return true;
        }
        else if( Upper == 0 && Lower == word.size()){
            return true;
        }

        return false;
        
    }
};