#include<stdio.h>
int main()
{
    //sum of even and odd numbers in array
    int i,j,sum_even=0,sum_odd=0;
    int n;
    printf("how many elements you want to print : ");
    scanf("%d",&n);
    int array[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);

    }
    printf("the numbers are : ");
    for(i=0; i<10; i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0; i<10; i++)
    {
        if(array[i]%2==0)
        {
            sum_even=sum_even+array[i];
        }
        else
        {
            sum_odd=sum_odd+array[i];
        }
    }

    printf("\nsum of even numbers=%d\n",sum_even);

    printf("sum of 0dd numbers=%d\n",sum_odd);

}
