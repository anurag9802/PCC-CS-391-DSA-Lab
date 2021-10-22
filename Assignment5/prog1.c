#include<stdio.h>
void hanoi(char from,char to,char other,int n)
{
    if(n==1)
    {
    printf("Move disk 1 from rod %c to %c",from,to);
    return;
    }
    hanoi(from,other,to,n-1);
    printf("\nMove disk %d from rod %c to rod %c\n", n, from,to);
    hanoi(other,to,from,n-1);
}

void main()
{
int x=4;
hanoi('A','C','B',x);
}