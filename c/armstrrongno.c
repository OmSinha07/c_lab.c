#include<stdio.h>
void main()
{
printf("the armstrong nos are");

int n,i,s,c=0,j,ar;
    for(i=1;i<=1000;i++)
    {
        n=i;
        ar=0;
      while(n>0)
      
      
      {
        
      s= n%10;
      ar=ar+(s*s*s);
      n/=10;
        
    }
    if(ar==i)
    printf("%d ,",ar);
    
}
}

