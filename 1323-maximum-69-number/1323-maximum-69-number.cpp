class Solution {
public:
    int maximum69Number (int num) {
        vector<int> arr;
        int i=0;

        while (num>0){
            arr.push_back(num % 10);
            num /= 10 ;
            i++;
        }

        reverse(arr.begin(), arr.end());

        int n = arr.size();

        for(int i=0; i<n; i++){
            if (arr[i]==6){
                arr[i] = 9;
                break;
            }
        }

        int digit =0;

        for(int i=0; i<n; i++){
            digit = (digit*10) + arr[i];
        }
        return digit;
    }
};