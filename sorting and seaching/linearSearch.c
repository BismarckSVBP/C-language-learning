#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i; 
    }
    return -1; 
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {5, 3, 8, 4, 2, 9, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;

    printf("Array elements:\n");
    printArray(arr, n);

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = linearSearch(arr, n, target);

    if (result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}
