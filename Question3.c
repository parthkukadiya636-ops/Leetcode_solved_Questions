int checkRecord(char* s) {
    int n = strlen(s);
    int count = 1;
    int count1 = 0;
    int maxL = 1;

    for(int i = 0; i < n; i++) {

        // count total 'A'
        if(s[i] == 'A') {
            count1++;
        }

        // count consecutive 'L'
        if(i > 0 && s[i] == 'L' && s[i-1] == 'L') {
            count++;
            if(count > maxL)
                maxL = count;
        } else if(s[i] == 'L') {
            count = 1;
        }
    }

    if(count1 < 2 && maxL < 3){
        return 1;
    }
    return 0;
}