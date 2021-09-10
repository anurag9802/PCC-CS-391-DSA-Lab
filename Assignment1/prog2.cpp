#include<stdio.h>
int main()
{
   printf("Enter size of array :");
   int len,n,nos=0;
   scanf("%d",&len);
   

   int arr[len];
   int i,sum=0;
   

   printf("\nEnter %d numbers :",len);
   for(i=0;i<len;i++)
      scanf("%d",&arr[i]);

   printf("\nEnter n location : ");
   scanf("%d",&n);
   
   
   for(i=n-1;i<len;i++) {
   	arr[i]=arr[i+1];
   	nos++;
   }
   
   len--;
   
   printf("New array after deletion : \n");
   for(i=0;i<len;i++)
   printf("%d ",arr[i]);
   
   printf("\nNumber of shifting operations = %d",nos-1);  


   
   return 0;
}
