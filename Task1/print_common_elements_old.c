#include<stdio.h>
void main()
{
    //print common elements in another array
    int arr1[50];
    int arr2[50];
    int arr3[50];

    int i=0;
    int size;
    printf("How many elements : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int j=0;
    for(j=0;j<size;j++)
    {
        scanf("%d",&arr2[j]);
    }

    int k=0;
    //compare two elements of the array
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        if(arr1[i]==arr2[j])
        {
            arr3[k++]=arr1[i];

            break;
        }
    }
}
//print common elements
for(i=0;i<k;i++)
    {
        printf("%d ", arr3[i]);
    }

}
