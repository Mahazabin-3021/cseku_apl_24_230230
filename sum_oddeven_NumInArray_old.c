#include<stdio.h>
int main()
{
int i,j,sum1=0,sum2=0;
int a[10];
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);

}

for(i=0;i<10;i++)
{
    printf("%d",a[i]);
}
for(i=0;i<10;i++)
{
    if(a[i]%2==0)
    {
        sum1=sum1+a[i];
    }
    else
        {
            sum2=sum2+a[i];
        }
}

printf("\nsum of even numbers=%d",sum1);

printf("sum of 0dd numbers=%d",sum2);

}
