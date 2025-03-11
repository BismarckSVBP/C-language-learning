#include <stdio.h>


int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;  

        if (arr[mid] < target)
            low = mid + 1;  
        else
            high = mid - 1; 
    }

    return -1;  
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {11, 22, 33, 44, 55, 66, 77};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 55;

    printf("Array elements:\n");
    printArray(arr, n);

    int result = binarySearch(arr, n, target);

    if (result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}
