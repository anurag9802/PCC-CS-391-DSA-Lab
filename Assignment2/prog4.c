#include<stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    
    for (i = 0; i < n-1; i++)
    {
        
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        
        swap(&arr[min_idx], &arr[i]);
        
        printf("Array after %d pass : ",i+1);
        printArray(arr,n);
    }
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 





int main()
{
	int ar[50],n,i,j,temp,k;
	printf("enter the number of element in array : ");
	scanf("%d",&n);
	printf("enter the element of the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	
	
	selectionSort(ar,n);
	
	printf("Sorted Array : \n");
	printArray(ar,n);
	
	return 0;
}
