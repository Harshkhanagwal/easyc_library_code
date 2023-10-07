#include <stdio.h>
#include <string.h>

int deleteFromGivenIndex_char() {
    char arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i, index;

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

    // Input the index to delete
    printf("Enter the index to delete (0 to %d): ", current_length - 1);
    scanf("%d", &index);

    if (index < 0 || index >= current_length) {
        printf("Invalid index! Index should be between 0 and %d\n", current_length - 1);
        return 1; // Exit with an error code
    }

    // Shift elements to the left to "delete" the element at the specified index
    for (i = index; i < current_length - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Null-terminate the string to effectively remove the last character
    arr[current_length - 1] = '\0';

    // Print the updated array
    printf("Updated array: %s\n", arr);

    return 0;
}
//-------------------------------------------------------------------------------------------------------------------

int deleteFromGivenIndex_d() {
    int arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i, index;

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

    // Input the index to delete
    printf("Enter the index to delete (0 to %d): ", size - 1);
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Invalid index! Index should be between 0 and %d\n", size - 1);
        return 1; // Exit with an error code
    }

    // Shift elements to the left to "delete" the element at the specified index
    for (i = index; i < size - 1; i++) {
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

    return 0;
}
//-------------------------------------------------------------------------------------------------------


int deleteFromGivenIndex_f() {
    float arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i, index;

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

    // Input the index to delete
    printf("Enter the index to delete (0 to %d): ", size - 1);
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Invalid index! Index should be between 0 and %d\n", size - 1);
        return 1; // Exit with an error code
    }

    // Shift elements to the left to "delete" the element at the specified index
    for (i = index; i < size - 1; i++) {
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

    return 0;
}
//-----------------------------------------------------------------------------------------------------


int deletdFromGivenIndex_double() {
    double arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i, index;

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

    // Input the index to delete
    printf("Enter the index to delete (0 to %d): ", size - 1);
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Invalid index! Index should be between 0 and %d\n", size - 1);
        return 1; // Exit with an error code
    }

    // Shift elements to the left to "delete" the element at the specified index
    for (i = index; i < size - 1; i++) {
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

    return 0;
}
