// pointers in array with address
#include<stdio.h>
void main()
{
    int a[]={10,5,20},*p,i;;
    for(i=0;i<4;i++)
    {

    
    p=a+i;
    printf("%u-%d",p,*p);
    printf("\n");
}
}