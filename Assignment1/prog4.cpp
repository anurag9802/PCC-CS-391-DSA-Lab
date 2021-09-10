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

    int m1=arr[0],m2=arr[0];
    
    for(i=0;i<len;i++) {
    	
    	if( arr[i] > m1 ) {            
            m2 = m1;            
            m1 = arr[i];
        }        
        else if( arr[i] > m2 ) {
            m2 = arr[i];
        }

	}
   
   
   
   printf("\nLargest Element = %d \nSecond Largest = %d",m1,m2);  


   
   return 0;
}
