#include <stdio.h>

void printUniqueElements(int arr[], int size) {
    int i, j, isUnique;

    printf("Unique elements are: ");
    for (i = 0; i < size; i++) {
        isUnique = 1;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printUniqueElements(arr, size);

    return 0;
}
