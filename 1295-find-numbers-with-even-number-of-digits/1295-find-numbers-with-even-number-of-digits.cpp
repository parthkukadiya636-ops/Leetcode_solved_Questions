class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int count =0;
        int even= 0;
        int n;

        for(int i=0; i<nums.size(); i++){
            n= nums[i];
            count =0;

            while(n>0){

                n= n/10;
                count++;
                
            }
            if(count %2 ==0){
                even++;
            }
        }
        return even;
        
    }
};