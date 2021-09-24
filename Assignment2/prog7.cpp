#include <stdio.h>
int main()
{
  int m,n,size;
  printf("Enter row and column length : ");
  scanf("%d %d",&m,&n);
  
  int a[m][n];
  
  printf("Enter the numbers : \n");
  
  for(int i=0;i<m;i++) {
  for(int j=0;j<n;j++) {
  scanf("%d",&a[i][j]);
  if(a[i][j]!=0)
  size++;
}
}
  
  
  int compactMatrix[3][size];
  
   int k = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] != 0)
            {
                compactMatrix[0][k] = i;
                compactMatrix[1][k] = j;
                compactMatrix[2][k] = a[i][j];
                k++;
            }
            
            printf("3 Tuple Representation : \n");
            
      for (int i=0; i<3; i++)
    {
        for (int j=0; j<size; j++)
            printf("%d ", compactMatrix[i][j]);
 
        printf("\n");
    }

  return 0;
}
