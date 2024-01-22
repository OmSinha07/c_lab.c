#include<stdio.h>
void main()
{// palindrome string
    int a,b;
    printf("enter string\n");
    char c[130],c1[120];
    gets(c);
     gets(c1);
    if(strcmp(c,c1)==0)
    printf("palindrome");
    else
    printf("not");
}