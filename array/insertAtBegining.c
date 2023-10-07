#include <stdio.h>
#include <string.h>

int InsertElementAtBegining_d() {
    int arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i, element;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to insert at the beginning
    printf("Enter the element to insert at the beginning: ");
    scanf("%d", &element);

    // Shift elements to the right to make space for the new element
    for (i = size - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the beginning
    arr[0] = element;

    // Increment the size of the array
    size++;

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------

int InsertElementAtBeginning_f() {
    float arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i;
    float element;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%f", &arr[i]);
    }

    // Input the element to insert at the beginning
    printf("Enter the element to insert at the beginning: ");
    scanf("%f", &element);

    // Shift elements to the right to make space for the new element
    for (i = size - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the beginning
    arr[0] = element;

    // Increment the size of the array
    size++;

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < size; i++) {
        printf("%.2f ", arr[i]); // Assuming you want to print float values with 2 decimal places
    }

    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------



int InsertElementAtBeginning_c() {
    char arr[100]; // Declare an array with a maximum capacity of 100 characters
    int size, i;
    char element;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter elements of the array:\n");
    scanf(" %s", arr); // Read a string as input

    // Input the character to insert at the beginning
    printf("Enter the character to insert at the beginning: ");
    scanf(" %c", &element);

    // Shift characters to the right to make space for the new character
    for (i = size; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new character at the beginning
    arr[0] = element;

    // Increment the size of the array
    size++;

    // Print the updated array
    printf("Updated array: %s\n", arr);

    return 0;
}
//-----------------------------------------------------------------------------------------------------------------------

int InsertElementAtBeginning_double() {
    double arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i;
    double element;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%lf", &arr[i]); // Note the use of %lf for double
    }

    // Input the element to insert at the beginning
    printf("Enter the element to insert at the beginning: ");
    scanf("%lf", &element);

    // Shift elements to the right to make space for the new element
    for (i = size - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the beginning
    arr[0] = element;

    // Increment the size of the array
    size++;

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < size; i++) {
        printf("%.2lf ", arr[i]); // Assuming you want to print double values with 2 decimal places
    }

    return 0;
}
