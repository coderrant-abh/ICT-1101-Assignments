// Delete Element from an Array at a Desired or Specific Position.
#include <stdio.h>

int main(void)
{
    int n, pos, i;

    printf("\nEnter the size of the Array: ");
    scanf("%d", &n);

    printf("\nEnter %d elements of the Array: \n", n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the position to delete: ");
    scanf("%d", &pos);

    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    return 0;
}

