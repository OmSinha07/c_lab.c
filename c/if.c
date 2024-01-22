
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{ int i,j;
int ar[10][10];
srand(time(NULL));
for(i=1;i<=10;i++)
{
    printf("\n");
 for(j=1;j<=10;i++)
{   
ar[i][j]=rand()%100;

}
}
for(i=1;i<=10;i++)
{
    printf("\n");
 for(j=1;j<=10;i++)
{   
    printf("%d",ar[i][j]);
}
}
}
