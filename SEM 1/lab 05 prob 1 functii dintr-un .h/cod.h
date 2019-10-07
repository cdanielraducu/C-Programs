void schimb(char ch[])
{
    int n, i;
    scanf("%d", &n);
    char v[100];
    getchar();
    for (i=0; i<n; i++)
    {
        v[i] = getchar();
    }

    for (i=0; i<n; i++)
    {
        if (v[i]>=97)
           printf("%c", v[i] = v[i]-32);
        else printf("%c", v[i]);
    }

}
