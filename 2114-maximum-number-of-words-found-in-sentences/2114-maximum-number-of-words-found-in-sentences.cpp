class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 0;
        int maxi = INT_MIN;

        for(int i= 0; i<sentences.size(); i++){

for(int j = 0; j < sentences[i].length(); j++) {

    if(sentences[i][j] != ' ' &&
       (j == 0 || sentences[i][j-1] == ' ')) {
        count++;
    }
}
if(count > maxi){
    maxi = count;
   
}
count =0;
        }
return maxi;
    }
};