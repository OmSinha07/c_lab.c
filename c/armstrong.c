#include<stdio.h>
void main()
{
int n,i,c=0,j;
    for(i=2;i<=1000;i++)
    {
      c=0;
      
      for(j=1;j<=i;i++) 
      {
        
      if(i%j==0)
        c++;
    }
    if(c==2)
    printf("%d",i);
}
}