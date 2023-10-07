#include <stdio.h>
#include <string.h>

int deleteFromTheBeiginning_double() {
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
        // Shift elements to the left to "delete" the first element
        for (i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Decrement the size of the array
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
//------------------------------------------------------------------------------------------
int deleteFromTheBeginning_d() {
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
        // Shift elements to the left to "delete" the first element
        for (i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Decrement the size of the array
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
//------------------------------------------------------------------------------------------------

int deleteFromTheBeginning_f() {
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
        scanf("%f", &arr[i]); // Note the use of %f for float
    }

    // Check if the array is empty
    if (size == 0) {
        printf("The array is already empty.\n");
    } else {
        // Shift elements to the left to "delete" the first element
        for (i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Decrement the size of the array
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
//---------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int deleteFromTheBeginning_char() {
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
        // Shift elements to the left to "delete" the first character
        for (i = 0; i < current_length; i++) {
            arr[i] = arr[i + 1];
        }

        // Null-terminate the string to effectively remove the first character
        arr[current_length - 1] = '\0';

        // Print the updated array
        printf("Updated array: %s\n", arr);
    }

    return 0;
}
