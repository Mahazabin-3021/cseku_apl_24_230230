#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int s=mysquare(n);
    printf("%d",s);

    return 0;
}

int mysquare(int a)
{
    return a*a;
}



