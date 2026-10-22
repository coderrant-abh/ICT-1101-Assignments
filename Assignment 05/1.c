// Insert an Element Desired or Specific Position in an Array.
#include <stdio.h>

int main(void) 
{
    int n, newNum, newPos;

    printf("\nEnter the size of the Array: ");
    scanf("%d", &n);

    printf("\nEnter Array elements: \n");
    
    int arr[n + 1], i;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the new elements you wanna add in that Array: ");
    scanf("%d", &newNum);

    printf("Enter the Array position for that number (1 to %d): ", n);
    scanf("%d", &newPos);

    for (i = n - 1; i >= newPos - 1; i--) {
    arr[i + 1] = arr[i];
    }

    arr[newPos - 1] = newNum;
    n++;

    printf("\nArray after inserting new elements: \n");
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    return 0;
}