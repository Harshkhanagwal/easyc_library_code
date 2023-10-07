#include <stdio.h>
#include <string.h>

int updateAtTheIndex_d() {
    int arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i, index, newValue;

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

    // Input the index to update
    printf("Enter the index to update (0 to %d): ", size - 1);
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Invalid index! Index should be between 0 and %d\n", size - 1);
        return 1; // Exit with an error code
    }

    // Input the new value
    printf("Enter the new value: ");
    scanf("%d", &newValue);

    // Update the element at the specified index
    arr[index] = newValue;

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
//--------------------------------------------------------------------------------------------------------

int updateAtTheIndex_f() {
    float arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i, index;
    float newValue;

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

    // Input the index to update
    printf("Enter the index to update (0 to %d): ", size - 1);
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Invalid index! Index should be between 0 and %d\n", size - 1);
        return 1; // Exit with an error code
    }

    // Input the new value
    printf("Enter the new value: ");
    scanf("%f", &newValue);

    // Update the element at the specified index
    arr[index] = newValue;

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < size; i++) {
        printf("%.2f ", arr[i]); // Assuming you want to print float values with 2 decimal places
    }
    printf("\n");

    return 0;
}
//--------------------------------------------------------------------------------------------------------------------

int updateAtTheIndex_double() {
    double arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i, index;
    double newValue;

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

    // Input the index to update
    printf("Enter the index to update (0 to %d): ", size - 1);
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Invalid index! Index should be between 0 and %d\n", size - 1);
        return 1; // Exit with an error code
    }

    // Input the new value
    printf("Enter the new value: ");
    scanf("%lf", &newValue); // Note the use of %lf for double

    // Update the element at the specified index
    arr[index] = newValue;

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < size; i++) {
        printf("%.2lf ", arr[i]); // Assuming you want to print double values with 2 decimal places
    }
    printf("\n");

    return 0;
}
//----------------------------------------------------------------------------------------------------- 

int updateAtTheIndex_char() {
    char arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i, index;
    char newValue;

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

    // Input the index to update
    printf("Enter the index to update (0 to %d): ", current_length - 1);
    scanf("%d", &index);

    if (index < 0 || index >= current_length) {
        printf("Invalid index! Index should be between 0 and %d\n", current_length - 1);
        return 1; // Exit with an error code
    }

    // Input the new value
    printf("Enter the new value: ");
    scanf(" %c", &newValue); // Read a single character

    // Update the element at the specified index
    arr[index] = newValue;

    // Print the updated array
    printf("Updated array: %s\n", arr);

    return 0;
}
