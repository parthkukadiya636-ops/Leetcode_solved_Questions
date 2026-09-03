class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        bool hasOdd = false;
        bool hasEven = false;

        int smallestOdd = INT_MAX;
        int smallestEven = INT_MAX;

        for (int x : nums1) {

            if (x % 2 == 0) {
                hasEven = true;
                smallestEven = min(smallestEven, x);
            }
            else {
                hasOdd = true;
                smallestOdd = min(smallestOdd, x);
            }
        }

         if (!hasOdd || !hasEven) {
            return true;
        }

          
        return smallestOdd < smallestEven;
    }
};