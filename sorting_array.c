// sorting
#include<stdio.h>


int main(){
    int n,temp;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    printf("unsorted array\n");
    for (int i = 0; i < n; i++)
		printf("%d\n ", arr[i]);
    
    printf("sorted array\n");
    for (int i = 0; i < n; i++){
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
		printf("%d ", arr[i]);

    }
     

}