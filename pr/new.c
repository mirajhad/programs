
int fact(int);
main()
{
    int x,n;
    printf("enter number");
    scanf("%d",&n);
    x=fact(n);
    printf("the factorial is %d",x);
getch();
}
int fact(int x)
{
    int i,f=1;
    for(i=i;i<=x;i++)
    f=f*i;
    return(f);
}



