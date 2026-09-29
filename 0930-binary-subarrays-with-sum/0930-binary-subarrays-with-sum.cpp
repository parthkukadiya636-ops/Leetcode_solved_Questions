class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int left = 0;
        int sum =0;
        int count =0;

        for(int right =0; right< nums.size(); right++){

            sum += nums[right]; 
            

            while(sum > goal){
                sum -= nums[left];
                left++;
            }

             if(sum == goal){

                int temp =left;

                while(temp <= right && nums[temp] == 0){
                    temp++;
                    count++;
                }

                if(goal != 0){

                count++;
                }
            }  

            

        }
        return count;
        
    }
};