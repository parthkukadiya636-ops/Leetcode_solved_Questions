int countTriples(int n) {
    int count =0;
    for(long a=1 ;a<=n ;a++){
        for(long b=1 ;b<=n; b++){
            long c = a*a + b*b;
            long check = sqrt(c);
            if(check<=n && c== check*check){
                count++;
            }
        }
    }
    return count;
    
}