#include<stdio.h>


void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        
        printf("Array after %d pass : ",i+1);
        printArray(arr,n);
    }
}
 
// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
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
	
	
	insertionSort(ar,n);
	
	printf("Sorted Array : \n");
	printArray(ar,n);
	
	return 0;
}
