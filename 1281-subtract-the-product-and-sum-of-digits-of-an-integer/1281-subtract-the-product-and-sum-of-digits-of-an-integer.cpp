class Solution {
public:
    int subtractProductAndSum(int n) {

        int org = n;

        int product = 1;
        int sum = 0;

        while(org>0){
            int x = org % 10;
            product *= x;
            org /= 10;
        }

        org =n;

       while(org>0){
            int x = org % 10;
            sum += x;
            org /= 10;
        }

        return product - sum;
        
    }
};