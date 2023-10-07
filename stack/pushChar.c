//Char

#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Define a stack structure
struct Stack {
    char data[MAX_SIZE];
    int top;
};

// Initialize the stack
void initialize(struct Stack* stack) {
    stack->top = -1;
}

// Check if the stack is empty
bool is_empty(struct Stack* stack) {
    return stack->top == -1;
}

// Check if the stack is full
bool is_full(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Push a character onto the stack
void push(struct Stack* stack, char item) {
    if (is_full(stack)) {
        printf("Stack is full. Cannot push '%c'.\n", item);
    } else {
        stack->data[++stack->top] = item;
        printf("Pushed '%c' onto the stack.\n", item);
    }
}

int main() {
    struct Stack stack;
    initialize(&stack);

    char value;
    char choice;

    printf("Stack Program - Push Char Elements\n");

    do {
        printf("Enter a character to push onto the stack: ");
        scanf(" %c", &value);  // Notice the space before %c to consume the newline character

        push(&stack, value);

        printf("Do you want to push another element? (y/n): ");
        scanf(" %c", &choice);  // Notice the space before %c to consume the newline character

    } while (choice == 'y' || choice == 'Y');

    // Check if the stack is empty
    if (is_empty(&stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack is not empty.\n");
    }

    return 0;
}
