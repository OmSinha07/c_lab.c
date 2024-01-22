#include<stdio.h>
int main()
{
    int f,c;
    printf("enter temperature\n");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("%d",c);
    return 0;
}