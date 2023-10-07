#include <stdio.h>
#include <string.h>

int deleteAtFromEnding_d() {
    int arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size! Size must be greater than 0.\n");
        return 1; // Exit with an error code
    }

    // Input array elements
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is empty
    if (size == 0) {
        printf("The array is already empty.\n");
    } else {
        // Decrement the size of the array to "delete" the last element
        size--;

        // Print the updated array
        printf("Updated array:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
//-----------------------------------------------------------------------------------------------------------------

int deleteAtFromEnding_f() {
    float arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size! Size must be greater than 0.\n");
        return 1; // Exit with an error code
    }

    // Input array elements
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%f", &arr[i]);
    }

    // Check if the array is empty
    if (size == 0) {
        printf("The array is already empty.\n");
    } else {
        // Decrement the size of the array to "delete" the last element
        size--;

        // Print the updated array
        printf("Updated array:\n");
        for (i = 0; i < size; i++) {
            printf("%.2f ", arr[i]); // Assuming you want to print float values with 2 decimal places
        }
        printf("\n");
    }

    return 0;
}
//--------------------------------------------------------------------------------------------------------
int deleteAtFromEnding_char() {
    char arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size! Size must be greater than 0.\n");
        return 1; // Exit with an error code
    }

    // Input array elements
    printf("Enter elements of the array:\n");
    scanf(" %s", arr); // Read a string as input

    // Calculate the current length of the string
    int current_length = strlen(arr);

    // Check if the array is empty
    if (current_length == 0) {
        printf("The array is already empty.\n");
    } else {
        // Decrement the size of the array to "delete" the last character
        size--;

        // Set the last character to null terminator to effectively remove it
        arr[current_length - 1] = '\0';

        // Print the updated array
        printf("Updated array: %s\n", arr);
    }

    return 0;
}

//------------------------------------------------------------------------------------------------------------------------

int deleteFromTheEnding_double() {
    double arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size! Size must be greater than 0.\n");
        return 1; // Exit with an error code
    }

    // Input array elements
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%lf", &arr[i]); // Note the use of %lf for double
    }

    // Check if the array is empty
    if (size == 0) {
        printf("The array is already empty.\n");
    } else {
        // Decrement the size of the array to "delete" the last element
        size--;

        // Print the updated array
        printf("Updated array:\n");
        for (i = 0; i < size; i++) {
            printf("%.2lf ", arr[i]); // Assuming you want to print double values with 2 decimal places
        }
        printf("\n");
    }

    return 0;
}
