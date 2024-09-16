#include<stdio.h>
int main()
{
   int num[]={10,30,40,15,25};
   int value;
   printf("enter the value that you search ");
   scanf("%d",&value);
   int i,position=0;
   for(i=0;i<6;i++)
    {
        if(value==num[i])
        {
         position=i+1;
         break;
        }
    }
   if(position==0)
     printf("not found");
     else
        printf("the position of %d is:%d",value,position);

     return 0;



}
