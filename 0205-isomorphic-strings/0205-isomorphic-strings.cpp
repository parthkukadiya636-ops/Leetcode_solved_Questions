class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int n = s.size();
        int m = t.size();

        if(n != m){
            return false;
        }

        map<char, int> mp;
        string s1;
        int count =1;

        for(int i = 0; i<n; i++){

            if( mp[s[i]] != 0){

               s1 += char('0' + mp[s[i]]);

            }
            else{

               mp[s[i]] = count;
            s1 += char('0' + mp[s[i]]);
            count ++;

            }


        }

        string s2;
        map<char, int> mp1;
        count =1;

        for(int i = 0; i<m; i++){

            if( mp1[t[i]] != 0){

                s2 += char('0' + mp1[t[i]]);

            }
            else{

               mp1[t[i]] = count;
                s2 += char('0' + mp1[t[i]]);
               count++;

            }
 
        }

        return s1 == s2 ;

 
        
    }
};