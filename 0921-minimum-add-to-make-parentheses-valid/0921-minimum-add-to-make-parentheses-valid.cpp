class Solution {
public:
    int minAddToMakeValid(string s) {
        
        if(s == ""){
            return 0;
        }

        int open = 0;
        int close =0;

        for(char ch : s){
            if(ch == '('){
                open++;
            }
            else{
                open--;
            }
            if(open == -1){

                close += 1;
                open =0;
            }
        }


      return (open + close);  
    }
};