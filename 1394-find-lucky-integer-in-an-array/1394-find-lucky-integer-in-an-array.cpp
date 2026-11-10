class Solution {
public:
    int findLucky(vector<int>& arr) {

        unordered_map<int,int>mp;
        int maxi = -1;

        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }

        for(int i=0; i<arr.size(); i++){
            if(arr[i] == mp[arr[i]]){
                if(arr[i] > maxi){
                    maxi = arr[i];
                }
            }
        }
        return maxi;
    }
};