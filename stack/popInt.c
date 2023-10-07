//INT

#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Define a stack structure
struct Stack {
    int data[MAX_SIZE];
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

// Push an element onto the stack
void push(struct Stack* stack, int item) {
    if (is_full(stack)) {
        printf("Stack is full. Cannot push %d.\n", item);
    } else {
        stack->data[++stack->top] = item;
        printf("Pushed %d onto the stack.\n", item);
    }
}

// Pop an element from the stack
int pop(struct Stack* stack) {
    if (is_empty(stack)) {
        printf("Stack is empty. Cannot pop.\n");
        return 0; // Return 0 as a default value (you can change it as needed)
    } else {
        int item = stack->data[stack->top--];
        printf("Popped %d from the stack.\n", item);
        return item;
    }
}

int main() {
    struct Stack stack;
    initialize(&stack);

    char choice;

    printf("Stack Program - Push and Pop Int Elements\n");

    do {
        printf("Enter a choice (p to push, o to pop, q to quit): ");
        scanf(" %c", &choice);

        if (choice == 'p' || choice == 'P') {
            int value;
            printf("Enter an integer to push onto the stack: ");
            scanf("%d", &value);
            push(&stack, value);
        } else if (choice == 'o' || choice == 'O') {
            int poppedValue = pop(&stack);
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
