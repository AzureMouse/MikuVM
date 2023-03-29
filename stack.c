#include <stdio.h>

// What is a stack data structure
// A stack can insert data from the botton of the stack to the top of the stack, newest is top
// A FILO (First in last out) data structure
// Can be implemented by an array or linkedlist

// Components of the stack
struct stack_config{
    int stack[10];
    int size;
};

// Initalize the stack
void initalize(struct stack_config *stack_ptr){
    stack_ptr->size = 0;
}

// Push data in to the stack
void push(int value, struct stack_config *stack_ptr){
    int top = stack_ptr->size;
    stack_ptr->stack[top] = value;
}

// Pop the top value off of the stack
void pop(struct stack_config *stack_ptr){
    int top = stack_ptr->size;
    stack_ptr->stack[top] = 0;
    stack_ptr->size = top--;
}

int peek(struct stack_config *stack_ptr){
    int top = stack_ptr->size;
    return stack_ptr->stack[top]; // Output the top of the stack
}

int main(){
    struct stack_config structure;
    struct stack_config *ptr = &structure;
    int n = 5;
    
    // Function calls
    initalize(ptr);
    push(n, ptr);
    
    printf("Current value of top of the stack: %d", peek(ptr));
    
    return 0;
}
