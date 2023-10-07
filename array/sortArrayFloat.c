#include <stdio.h>

// Function to swap two float values
void swap(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array and return the pivot index
int partition(float arr[], int low, int high) {
    float pivot = arr[high]; // Choose the last element as the pivot
    int i = (low - 1);      // Index of the smaller element

    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of the smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Function to perform Quick Sort
void quickSort(float arr[], int low, int high) {
    if (low < high) {
        // Find the pivot element and partition the array
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the elements before and after the pivot
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int sortArray_f() {
    float arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size! Size must be greater than 0.\n");
        return 1; // Exit with an error code
    }

    // Input array elements
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%f", &arr[i]);
    }

    // Call the Quick Sort function to sort the array
    quickSort(arr, 0, size - 1);

    // Print the sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", arr[i]); // Assuming you want to print float values with 2 decimal places
    }
    printf("\n");

    return 0;
}
