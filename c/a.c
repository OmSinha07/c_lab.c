#include<stdio.h>
int main()
{
    int l;
    printf("enter length of array ");
    scanf("%d",&l);
    int arr[l];
    printf("Enter elements= \n");
    for(int i=0;i<l;i++){
            scanf("%d",&arr[i]);
    }
    printf("Array= ");
    for(int i=0;i<l;i++){
            printf("%d ",arr[i]);
            printf("%d ",i);
    }
    printf("\n");
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("sorted array= ");
     for(int i=0;i<l;i++){
            printf("%d ",arr[i]);
    }
    if(l%2==0){
            printf("Median= %d",arr[(l+1)/2]);
    }
    else{
        printf("Median= %d",arr[((l/2)+((l+1)/2))/2]);
    }
    return 0;


}