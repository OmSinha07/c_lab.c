#include <stdio.h>
int main()
{

    int n, i, mid, element, temp = 0;
    printf("enter size of array");
    scanf("%d", &n);
    int end = n - 1, start = 0;
    printf("enter element");
    scanf("%d", &element);
    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (ar[j] > ar[j+1])
            {
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    printf("the array");
    for (int l = 0; l < n; l++)
    {
        printf("%d", ar[l]);
    }
    mid = (start + end) / 2;
    if (ar[mid] == element)
        printf("element found at %d", mid);
    else if (ar[mid] > element)
        mid--;
    else
        mid++;
}