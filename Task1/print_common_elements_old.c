#include<stdio.h>
void main()
{
    int arr1[50];
    int arr2[50];
    int arr3[50];

    int i=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int j=0;
    for(j=0;j<5;j++)
    {
        scanf("%d",&arr2[j]);
    }

    int k=0;
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        if(arr1[i]==arr2[j])
        {
            arr3[k++]=arr1[i];

            break;
        }
    }
}
for(i=0;i<k;i++)
    {
        printf("%d ", arr3[i]);
    }


}
