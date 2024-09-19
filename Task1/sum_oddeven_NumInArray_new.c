#include<stdio.h>
int main()
{
    //sum of even and odd numbers in array
    int i,j,sum_even=0,sum_odd=0;
    int n;
    printf("How many elements you want to print : ");
    scanf("%d",&n);
    int array[n];

    //scanning the elements of the array
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);

    }

    //printing the array
    printf("The numbers are : ");
    for(i=0; i<10; i++)
    {
        printf("%d ",array[i]);
    }

    //finding and adding odd and even numbers
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
      
    //printing the elements

    printf("\nsum of even numbers=%d\n",sum_even);

    printf("sum of 0dd numbers=%d\n",sum_odd);

}
