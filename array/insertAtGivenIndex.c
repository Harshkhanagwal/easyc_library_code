#include <stdio.h>
#include <string.h>

int insertAtGivenIndex_d() {
    int arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i, element, index;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Input the index at which to insert the element
    printf("Enter the index where you want to insert the element: ");
    scanf("%d", &index);

    if (index < 0 || index > size) {
        printf("Invalid index! Index should be between 0 and %d\n", size);
        return 1; // Exit with an error code
    }

    // Shift elements to the right to make space for the new element
    for (i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified index
    arr[index] = element;

    // Increment the size of the array
    size++;

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
//----------------------------------------------------------------------------------------------


int insertAtGivenIndex_f() {
    float arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i, index;
    float element;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%f", &arr[i]);
    }

    // Input the element to insert
    printf("Enter the element to insert: ");
    scanf("%f", &element);

    // Input the index at which to insert the element
    printf("Enter the index where you want to insert the element: ");
    scanf("%d", &index);

    if (index < 0 || index > size) {
        printf("Invalid index! Index should be between 0 and %d\n", size);
        return 1; // Exit with an error code
    }

    // Shift elements to the right to make space for the new element
    for (i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the specified index
    arr[index] = element;

    // Increment the size of the array
    size++;

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < size; i++) {
        printf("%.2f ", arr[i]); // Assuming you want to print float values with 2 decimal places
    }

    return 0;
}

//-------------------------------------------------------------------------------------------------
int insertAtGivenIndex_c() {
    char arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i, index;
    char element;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter elements of the array:\n");
    scanf(" %s", arr); // Read a string as input

    // Input the element to insert
    printf("Enter the element to insert: ");
    scanf(" %c", &element);

    // Input the index at which to insert the element
    printf("Enter the index where you want to insert the element: ");
    scanf("%d", &index);

    if (index < 0 || index > size) {
        printf("Invalid index! Index should be between 0 and %d\n", size);
        return 1; // Exit with an error code
    }

    // Shift characters to the right to make space for the new character
    for (i = size; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new character at the specified index
    arr[index] = element;

    // Increment the size of the array
    size++;

    // Print the updated array
    printf("Updated array: %s\n", arr);

    return 0;
}
//-----------------------------------------------------------------------------------------------------------------


int insertAtGivenIndex_double() {
    double arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i, index;
    double element;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%lf", &arr[i]); // Note the use of %lf for double
    }

    // Input the element to insert
    printf("Enter the element to insert: ");
    scanf("%lf", &element);

    // Input the index at which to insert the element
    printf("Enter the index where you want to insert the element: ");
    scanf("%d", &index);

    if (index < 0 || index > size) {
        printf("Invalid index! Index should be between 0 and %d\n", size);
        return 1; // Exit with an error code
    }

    // Shift elements to the right to make space for the new element
    for (i = size; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the specified index
    arr[index] = element;

    // Increment the size of the array
    size++;

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < size; i++) {
        printf("%.2lf ", arr[i]); // Assuming you want to print double values with 2 decimal places
    }

    return 0;
}
