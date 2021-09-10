#include<stdio.h>
int main()
{
   printf("Enter size of array :");
   int len;
   scanf("%d",&len);
   

   int arr[len];
   int i,sum=0;
   

   printf("\nEnter %d numbers :",len);
   for(i=0;i<len;i++)
      scanf("%d",&arr[i]);

    
    int z=  (len%2==0)?len:len-1;

    for(i=0;i<z;i+=2) {
    	int temp=arr[i];
    	arr[i]=arr[i+1];
    	arr[i+1]=temp; 	

	}
   
   
   printf("\n Array after swap :");
   for(i=0;i<len;i++)
   printf("%d ",arr[i]);  


   
   return 0;
}
