#include <stdio.h>
#include <string.h>

// Function to swap two strings
void swap(char* a, char* b) {
    char temp[100]; // Assuming a maximum string length of 100 characters

    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

// Function to partition the array and return the pivot index
int partition(char* arr[], int low, int high) {
    char* pivot = arr[high]; // Choose the last element as the pivot
    int i = (low - 1);       // Index of the smaller element

    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than or equal to the pivot
        if (strcmp(arr[j], pivot) <= 0) {
            i++; // Increment index of the smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Function to perform Quick Sort for strings
void quickSort(char* arr[], int low, int high) {
    if (low < high) {
        // Find the pivot element and partition the array
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the elements before and after the pivot
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int sortArray_char() {
    char* arr[100]; // Declare an array of char pointers with a maximum capacity of 100 elements
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size! Size must be greater than 0.\n");
        return 1; // Exit with an error code
    }

    // Input array elements (strings)
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        arr[i] = malloc(100); // Allocate memory for each string (assuming a maximum string length of 100 characters)
        scanf("%s", arr[i]);
    }

    // Call the Quick Sort function to sort the array of strings
    quickSort(arr, 0, size - 1);

    // Print the sorted array of strings
    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]); // Free the allocated memory for each string
    }

    return 0;
}
