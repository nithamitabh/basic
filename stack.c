#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int stack[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%d",&stack[i]);
    }
    printf("Enter your choice\n");
    printf("1.PUSH\n");
    printf("2.POP\n");
    int choice;
    scanf("%d",&choice);
    if (choice == 1){
        printf("Enter the element you want to push ");
        int a;
        scanf("%d",&a);
        stack[n+1] = a;
     for (int i = 0; i <n+1; i++)
     {
        printf("%d ",stack[i]);
     }
    }
    else if (choice == 2){
        for (int i = 0; i<n-1; i++)
    {
        printf("%d ",stack[i]);
    }
    }
    else{
        printf("Enter either 1 or 2");
    }
    return 0;
}