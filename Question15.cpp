class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n= g.size();
        int m = s.size();

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int student = 0;
        int cookie = 0;

        while(student<n && cookie < m){
            if(g[student]<=s[cookie]){
                student +=1 ;
            }
            cookie +=1;
        }
        return student;
    }
};