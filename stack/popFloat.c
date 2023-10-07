//FLoat

#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Define a stack structure
struct Stack {
    float data[MAX_SIZE];
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

// Push a float onto the stack
void push(struct Stack* stack, float item) {
    if (is_full(stack)) {
        printf("Stack is full. Cannot push %f.\n", item);
    } else {
        stack->data[++stack->top] = item;
        printf("Pushed %f onto the stack.\n", item);
    }
}

// Pop an element from the stack
float pop(struct Stack* stack) {
    if (is_empty(stack)) {
        printf("Stack is empty. Cannot pop.\n");
        return 0.0; // Return 0.0 as a default value (you can change it as needed)
    } else {
        float item = stack->data[stack->top--];
        printf("Popped %f from the stack.\n", item);
        return item;
    }
}

int main() {
    struct Stack stack;
    initialize(&stack);

    char choice;

    printf("Stack Program - Push and Pop Float Elements\n");

    do {
        printf("Enter a choice (p to push, o to pop, q to quit): ");
        scanf(" %c", &choice);

        if (choice == 'p' || choice == 'P') {
            float value;
            printf("Enter a float to push onto the stack: ");
            scanf("%f", &value);
            push(&stack, value);
        } else if (choice == 'o' || choice == 'O') {
            float poppedValue = pop(&stack);
            // You can use poppedValue as needed, e.g., print it
        }

    } while (choice != 'q' && choice != 'Q');

    // Check if the stack is empty
    if (is_empty(&stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack is not empty.\n");
    }

    return 0;
}
