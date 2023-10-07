//DOUBLE

#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Define a stack structure
struct Stack {
    double data[MAX_SIZE];
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

// Push a double onto the stack
void push(struct Stack* stack, double item) {
    if (is_full(stack)) {
        printf("Stack is full. Cannot push %lf.\n", item);
    } else {
        stack->data[++stack->top] = item;
        printf("Pushed %lf onto the stack.\n", item);
    }
}

// Pop an element from the stack
double pop(struct Stack* stack) {
    if (is_empty(stack)) {
        printf("Stack is empty. Cannot pop.\n");
        return 0.0; // Return 0.0 as a default value (you can change it as needed)
    } else {
        double item = stack->data[stack->top--];
        printf("Popped %lf from the stack.\n", item);
        return item;
    }
}

int main() {
    struct Stack stack;
    initialize(&stack);

    char choice;

    printf("Stack Program - Push and Pop Double Elements\n");

    do {
        printf("Enter a choice (p to push, o to pop, q to quit): ");
        scanf(" %c", &choice);

        if (choice == 'p' || choice == 'P') {
            double value;
            printf("Enter a double to push onto the stack: ");
            scanf("%lf", &value);
            push(&stack, value);
        } else if (choice == 'o' || choice == 'O') {
            double poppedValue = pop(&stack);
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
