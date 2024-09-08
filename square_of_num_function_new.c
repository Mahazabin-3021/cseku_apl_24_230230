#include<stdio.h>
int main()
{

    int n;
    printf("enter a number you want to square : ");
    scanf("%d",&n);
    int s=mysquare(n);
    printf("Square of %d is : %d",n,s);

    return 0;
}

int mysquare(int a)
{
    return a*a;
}


