#include <stdio.h>

int linearSearch(int arr[], int size, int target, int index) {
    if (index == size)
        return -1;

    if (arr[index] == target)
        return index;

    return linearSearch(arr, size, target, index + 1);
}

int main() {
    int arr[10], size, target, i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &target);

    int pos = linearSearch(arr, size, target, 0);

    if (pos == -1)
        printf("Element not found.\n");
    else
        printf("Element found at index %d.\n", pos);

    return 0;
}

