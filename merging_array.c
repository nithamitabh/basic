#include <stdio.h>
int main(){
    int n;
    printf("Enter the element of first array\n");
    scanf("%d",&n);
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    int arr1[m];
    for (int  i = 0; i < m; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    int arr2[n+m];
    for (int i = 0; i < n; i++)
    {
        /* code */
        arr2[i] = arr[i];
    }
    for (int i = n; i < n+m; i++)
    {
        /* code */
        arr2[i+n] = arr1[i];
    }
    for (int i = 0; i < n+m; i++)
    {
        /* code */
        printf("%d",arr2[i]);
    }
    
    
    
    
}