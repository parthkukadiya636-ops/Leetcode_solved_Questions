class Solution {
public:
    bool checkDivisibility(int n) {
        int num =n;
        int sum1= 0;
        int prod =1;
        int digit;

        while(n>0){

            digit = n%10;
            sum1 += digit;
            prod *= digit;
            n = n/10;
            
        }
        if( num  % (sum1+prod)== 0 ){

            return true;
        }
        else{
            return false;
        }
    }
};