#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct stack {
    char* openingBracketStack;
    int top;
} Stack;

int calculateStrLen(char* s) {
    int i = 0;
    while (*(s + i) != '\0') {
        i++;
    }
    return i;
}

bool isFull(Stack* stack, int len) {
    return stack->top == len - 1;
}

bool isEmpty(Stack* stack) {
    return stack->top == -1;
}

void push(Stack* stack, char value) {
    stack->top++;
    *(stack->openingBracketStack + stack->top) = value;
}

void pop(Stack* stack) {
    if (!isEmpty(stack)) {
        stack->top--;
    }
}

void initialization(Stack* stack, int len) {
    stack->openingBracketStack = malloc(sizeof(char) * (len + 1));
    if (stack->openingBracketStack == NULL) {
        printf("Memory allocation failed\n");
        exit(1);  // Exit if memory allocation fails
    }
    stack->top = -1;
}

void freeStack(Stack* stack) {
    if (stack->openingBracketStack) {
        free(stack->openingBracketStack);
        stack->openingBracketStack = NULL;
    }
}

char peek(Stack* stack) {
    if (!isEmpty(stack)) {
        return *(stack->openingBracketStack + stack->top);
    }
    return '\0';
}

char closingFor(char c) {
    if (c == '}') {
        return '{';
    } else if (c == ')') {
        return '(';
    } else if (c == ']') {
        return '[';
    }
    return '\0';
}

bool isValid(char* s) {
    if (s == NULL || s[0] == '\0') {
        return false;
    }

    int len = calculateStrLen(s);
    Stack ss;
    initialization(&ss, len);

    // Handle invalid characters
    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c != '(' && c != ')' && c != '{' && c != '}' && c != '[' && c != ']') {
            freeStack(&ss);  // Clean up memory before returning
            return false; // Invalid character
        }
    }

    for (int i = 0; i < len; i++) {
        char c = s[i];

        if (c == '{' || c == '(' || c == '[') {
            push(&ss, c);
        } else if (c == '}' || c == ')' || c == ']') {
            char topChar = peek(&ss);

            if (topChar == closingFor(c)) {
                pop(&ss);
            } else {
                freeStack(&ss); 
                return false;
            }
        }
    }

    bool result = isEmpty(&ss);
    freeStack(&ss); 
    return result;
}

int main() {
    printf("\nTry programiz.pro\n");

    char* s = "}";
    bool result = isValid(s);
    printf("\nis valid : %d\n", result);

    return 0;
}
