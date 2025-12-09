int countPrimes(int k) {
    int *a = calloc(k+1, sizeof(int));
    int i, j;
    if(k==2)return 0;
    for (i = 2; i * i <=k; i++)
        if (!a[i])
            for (j = i * i; j <= k; j += i)
                a[j] = 1;

    int c = 0;
    for (i = 2; i <k; i++)
        if (!a[i]) c++;

    free(a);
    return c;
}