// sum of nos using pointers
#include<stdio.h>
void main()
{
    int a[10],*p,i,s=0;
     for(i=0;i<10;i++)
     {
        scanf("%d",&a[i]);
        }
        p=a;s=0;
    for(i=0;i<10;i++)
    {
        printf("%d,",*(p+i));

        s=s+*(a+i);
    }
    printf("\n");
    printf("the sum of the array is ");


    printf("%d",s);
}