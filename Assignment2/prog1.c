#include <stdio.h>
int main()

{
    int n, i, j, arr[100];
    int find;
    int count = 1;
    int temp;
    printf("enter total numbers ");
    scanf("%d", &n);
    printf("enter your numbers \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    
    
    int low, high, mid;
    int key;
    low = 0;
    high = n - 1;
    printf("Enter the number you want to find \n ");
    scanf("%d", &key);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("Number Found\n");
            break;
        }
        if (arr[mid] > key)
        {
            high = mid - 1;
        }
        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        if (low > high)
        {
            printf("it is NOT found\n");
        }
        count++;
    }
    printf("number of comparisons = %d", count);
    return 0;
}
