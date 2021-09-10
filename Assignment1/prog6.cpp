#include<stdio.h>
int main()
{
   printf("Enter size of array :");
   int len,n;
   scanf("%d",&len);
   

   int arr[len];
   int i,sum=0;
   

   printf("\nEnter %d numbers :",len);
   for(i=0;i<len;i++)
      scanf("%d",&arr[i]);
      
    printf("\nEnter element to be found : ");
   scanf("%d",&n);
   int pos=-1,cos=0;

    
    

    for(i=0;i<len;i++) {
    	if(arr[i]==n) {
    		pos=i+1;
    		cos++;
    		break;
		}  
		else
		cos++;    	

	}
   
   
   if(pos==-1)
printf("\nElement not found \nNumber of comparisions=%d",cos);   
   else
   printf("\nElement found at position %d \nNumber of comparisions=%d",pos,cos)  ; 


   
   return 0;
}
