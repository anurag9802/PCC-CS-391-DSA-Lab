#include <stdio.h>
#include<math.h>
int main()
{
    int a, b;
    
    scanf("%d", &a);
    
    scanf("%d", &b);
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char brr[9][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    
        for (int i = a; i <= b; i++){
            if (i <= 9){
                printf("%s",brr+i-1);
                printf("\n");
            }
            else{
                if (i % 2 == 0){
                    printf("even\n");
                }
                else{
                    printf("odd\n");
                }
            }
        }
    
}
