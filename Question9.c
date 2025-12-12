/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int* nums = malloc(2*sizeof(int));
    *returnSize = 2;
    int n = numbersSize;

    int left = 0;
    int right = n-1;

    while(left<right){
        int sum = numbers[left] + numbers[right];

        if(sum==target){
            nums[0] = left+1;
            nums[1] = right+1;
            return nums;
        }

        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
        
    }

    return nums;
}