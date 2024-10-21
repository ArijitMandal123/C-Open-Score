//Stack Permutation #1044

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000  // Define the maximum size of the stack

// Stack data structure and helper functions
typedef struct {
    int data[MAX];
    int top;
} Stack;

void push(Stack *s, int value) {
    if (s->top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->data[++(s->top)] = value;
}

int pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return s->data[(s->top)--];
}

int peek(Stack *s) {
    if (s->top == -1) return -1;
    return s->data[s->top];
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to check if arr2[] is a valid stack permutation of arr1[]
int isStackPermutation(int arr1[], int arr2[], int n) {
    Stack s;
    s.top = -1; // Initialize stack

    int j = 0; // Pointer for output queue (arr2[])

    // Process all elements in arr1[]
    for (int i = 0; i < n; i++) {
        push(&s, arr1[i]);

        // While the stack is not empty and the top of the stack matches arr2[j], pop from stack
        while (!isEmpty(&s) && peek(&s) == arr2[j]) {
            pop(&s);
            j++; // Move to the next element in arr2[]
        }
    }

    // If we have processed all elements in arr2[], it means it's a valid stack permutation
    return (j == n);
}

int main() {
    int n;

    // Taking input for the size of arrays
    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n];

    // Taking input for the first array (input queue)
    printf("Enter elements of the input queue (arr1[]):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Taking input for the second array (output queue)
    printf("Enter elements of the output queue (arr2[]):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Checking if the second array is a valid stack permutation of the first
    if (isStackPermutation(arr1, arr2, n))
        printf("YES\n");
    else
        printf("Not Possible\n");

    return 0;
}
