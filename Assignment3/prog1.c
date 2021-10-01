#include<stdio.h>

int main()
{
    int arr1[100], arr2[100],arr3[100],n1,n2;
    int k=0,c=0;
    printf("\nEnter the range of array 1 : ");
    scanf("%d",&n1); 
    printf("\nEnter the elements of array 1 : ");
    for(int i=0; i<n1; i++)
    scanf("%d", &arr1[i]);
    printf("\nEnter the range of array 2 : ");
    scanf("%d",&n2); 
    printf("\nEnter the elements of array 2 : ");
    for(int i=0; i<n1; i++)
    scanf("%d", &arr2[i]); 
    for(int i=0 ;i<n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                c=0;
                for(int x=0; x<k; x++)
                {
                    if(arr1[i]==arr3[x])
                    {
                        c++;
                    }                        
                }

                if(c==0)
                {
                    arr3[k]=arr1[i];
                    k++;
                }

            }
        }
        
    }

    printf("\nThe common elements are : ");

    for(int  i = 0; i < k; i++)
    {
        printf("%d ",arr3[i]);
    }

    return 0;
            
}