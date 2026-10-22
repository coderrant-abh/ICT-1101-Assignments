// C Programming for Remove Duplicates Items from an Array.
#include <stdio.h>

int main(void)
{
    int n, i, j, k;

    printf("\nEnter the size of the Array: ");
    scanf("%d", &n);

    printf("\nEnter %d elements of the Array: \n", n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        
        for (j = i + 1; j < n; j++) {
            
            if (arr[i] == arr[j]) {
                
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    printf("\nArray after removing duplicates:\n");
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    return 0;
}