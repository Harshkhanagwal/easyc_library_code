#include <stdio.h>

int insertAtTheEnd_double() {
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

    // Input the element to insert at the end
    printf("Enter the element to insert at the end: ");
    scanf("%lf", &element);

    // Insert the new element at the end (one index past the current size)
    arr[size] = element;

    // Increment the size of the array
    size++;

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < size; i++) {
        printf("%.2lf ", arr[i]); // Assuming you want to print double values with 2 decimal places
    }

    return 0;
}
//-----------------------------------------------------------------------------------------------------------

int insertAtTheEnd_d() {
    int arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i;
    int element;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to insert at the end
    printf("Enter the element to insert at the end: ");
    scanf("%d", &element);

    // Insert the new element at the end (one index past the current size)
    arr[size] = element;

    // Increment the size of the array
    size++;

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
//---------------------------------------------------------------------------------------------------------------


int insertAtTheEnd_f() {
    float arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i;
    float element;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%f", &arr[i]); // Note the use of %f for float
    }

    // Input the element to insert at the end
    printf("Enter the element to insert at the end: ");
    scanf("%f", &element);

    // Insert the new element at the end (one index past the current size)
    arr[size] = element;

    // Increment the size of the array
    size++;

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < size; i++) {
        printf("%.2f ", arr[i]); // Assuming you want to print float values with 2 decimal places
    }

    return 0;
}

//------------------------------------------------------------------------------------------------------------------

int insertAtTheEnd_c() {
    char arr[100]; // Declare an array with a maximum capacity of 100 elements
    int size, i;
    char element;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf(" %c", &arr[i]); // Read characters as input
    }

    // Input the element to insert at the end
    printf("Enter the element to insert at the end: ");
    scanf(" %c", &element);

    // Insert the new character at the end (one index past the current size)
    arr[size] = element;

    // Increment the size of the array
    size++;

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }

    return 0;
}
