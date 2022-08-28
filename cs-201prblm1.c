#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("number = %d address= %d\n",arr[i],&arr[i]);
    }

    
    return 0;
}