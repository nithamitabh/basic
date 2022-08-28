#include <stdio.h>
// program for searching in array
int findElement(int arr[], int n, int key)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == key)
			return i;
	
	return -1;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
	int key;
    scanf("%d",&key);

	// Function call
	int position = findElement(arr, n, key);

	if (position == -1)
		printf("Element not found");
	else
		printf("Element Found at Position: %d",
			position + 1);
    
	return 0;
}
