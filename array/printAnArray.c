#include <stdio.h>
#include <string.h>

int printArray_d() {
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

    // Print the array
    printf("Array elements:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//------------------------------------------------------------------------------------------------------------------
int printArray_f() {
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

    // Print the array
    printf("Array elements:\n");
    for (i = 0; i < size; i++) {
        printf("%.2f ", arr[i]); // Assuming you want to print float values with 2 decimal places
    }
    printf("\n");

    return 0;
}
//------------------------------------------------------------------------------------------------------------

int printArray_char() {
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
    printf("Enter elements of the array (string):\n");
    scanf(" %s", arr); // Read a string as input

    // Print the array (string)
    printf("Array elements: %s\n", arr);

    return 0;
}
//-------------------------------------------------------------------------------------------------------------

int printArray_double() {
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

    // Print the array
    printf("Array elements:\n");
    for (i = 0; i < size; i++) {
        printf("%.2lf ", arr[i]); // Assuming you want to print double values with 2 decimal places
    }
    printf("\n");

    return 0;
}
