#include <stdio.h>
int main(){
    // FIFo = first in first out
    int n;
    scanf("%d",&n);
    int queue[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%d",&queue[i]);
    }
    printf("Enter your choice\n");
    printf("1.ENQUEUE\n");
    printf("2.DEQUEUE\n");
    int choice;
    scanf("%d",&choice);
    if (choice == 1){
        printf("Enter the element you want to enqueue ");
        int a;
        scanf("%d",&a);
        queue[n+1] = a;
     for (int i = 0; i <n+1; i++)
     {
        printf("%d ",queue[i]);
     }
    }
    else if (choice == 2){
        for (int i = 1; i<n; i++)
    {
        printf("%d ",queue[i]);
    }
    }
    else{
        printf("Enter either 1 or 2");
    }
    return 0;
}