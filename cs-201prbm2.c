#include <stdio.h>
void insertElement(int arr[], int n, int x, int pos)
{
	
	for (int i = n - 1; i >= pos; i--)
		arr[i + 1] = arr[i];

	arr[pos] = x;
}
void deleteElement(int arr[],int n,int x,int pos){
    for (int  i = 0; i < n; i++)
    {
        /* code */
    }
    
}

int main()
{
    int n;
    printf("Enter the numbers of elements in array\n");
    scanf("%d",&n);
	int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d\n",&arr[i]);
    }
	printf("User input array :\n ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	// printf("\n");

	int x,pos;
    printf("Enter the element and position you want to insert");
    scanf("%d",&x);
    scanf("%d",&pos);

	// Function call
	insertElement(arr, n, x, pos);
    deleteElement(arr,n,x,pos);
	n++;
    

	printf("After insertion : ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}
