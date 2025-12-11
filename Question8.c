char* longestCommonPrefix(char** strs, int strsSize) {
    int n =strsSize;
    char* nums = strs[0];
    int i=0;

    while(nums[i]!='\0'){
        char a= nums[i];

        for(int j=1;j<n;j++){
            if(strs[j][i]!=a || strs[j][i]=='\0'){
                nums[i]= '\0';
                return nums;
            }
        }
        i++;
    }
    return nums;
    
}