#include <stdio.h>
int main()
{
  int m,n,sparse_counter;
  printf("Enter row and column length : ");
  scanf("%d %d",&m,&n);
  
  int a[m][n];
  
  printf("Enter the numbers : \n");
  
  for(int i=0;i<m;i++) {
  for(int j=0;j<n;j++) {
  scanf("%d",&a[i][j]);
  if(a[i][j]==0)
  sparse_counter++;
}
}

if (sparse_counter > ((m * n) / 2))
    {
        printf("IS Sparse Matrix \n");
    }
    else
        printf(" NOT a Sparse Matrix \n");
    printf("There are %d number of Zeros.", sparse_counter);
  
  
  

  return 0;
}
