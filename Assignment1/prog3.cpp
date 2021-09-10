#include<stdio.h>
int main()
{
   printf("Enter size of array :");
   int len,n,nos=0,x;
   scanf("%d",&len);
   

   int arr[len+1];
   int i,sum=0;
   

   printf("\nEnter %d numbers :",len);
   for(i=0;i<len;i++)
      scanf("%d",&arr[i]);

   printf("\nEnter n location : ");
   scanf("%d",&n);
   
   printf("\nEnter new element : ");
   scanf("%d",&x);
   
   
   len++;
    
    for (i = len-1; i >= n; i--) {
	        arr[i] = arr[i - 1];
	        nos++;
	    }
 
    
    arr[n - 1] = x;
   
   printf("New array after insertion : \n");
   for(i=0;i<len;i++)
   printf("%d ",arr[i]);
   
   printf("\nNumber of shifting operations = %d",nos);  


   
   return 0;
}
