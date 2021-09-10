#include<stdio.h>
int main()
{
   printf("Enter the value of n :");
   int n;
   scanf("%d",&n);
   
   int array[n];
   int i,sum=0;
   int *ptr;

   printf("\nEnter %d numbers :",n);
   for(i=0;i<n;i++)
      scanf("%d",&array[i]);

   
   ptr = array;

   for(i=0;i<n;i++) 
   {
      sum = sum + *ptr;
      ptr++;
   }

   printf("\nThe sum is: %d",sum);
   
   return 0;
}
