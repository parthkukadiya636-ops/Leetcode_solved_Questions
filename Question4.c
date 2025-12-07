int strStr(char* haystack, char* needle) {
    int n =strlen(haystack);
    int n1 =strlen(needle);

    if(n1==0){
        return -1;
    }

    for(int i=0;i<n;i++){
        int j=0;

        while(haystack[i+j]==needle[j] && j<n1){
            j++;
        }

        if(j==n1){
            return i;
        }



    }
    return -1;
    
}