# Stack Permutation Validation Algorithm

This project implements an algorithm to determine if a given output sequence is a valid stack permutation of an input sequence using a stack data structure.

## Key Concepts

1. **Stack Operations:**

   - **Push**: Add elements from the input queue to the stack.
   - **Pop**: Remove elements from the stack when they match the current element of the output queue.

2. **Algorithm Steps:**

   - Traverse the input queue and push elements onto the stack.
   - Compare the top of the stack with the current element in the output queue:
     - If they match, pop the element from the stack.
     - Continue this until all elements are either pushed or popped.
   - If all elements in the output queue are matched, it's a valid stack permutation.

3. **Conditions for a Valid Stack Permutation:**
   - The order of push and pop operations should allow the transformation of the input sequence into the output sequence using the stack.

## Use Case

This algorithm is useful in scenarios where operations must follow Last-In-First-Out (LIFO) constraints, such as:

- Evaluating sequence outputs in data processing pipelines
- Stack-based memory management

## Example

### Input

```bash
arr1[] = {1, 2, 3}
arr2[] = {2, 1, 3}
```

## Push 1, Push 2, Pop 2, Pop 1, Push 3, Pop 3 → Matches output.

### Output

# YES

For invalid sequences, such as:
arr2[] = {3, 1, 2}

# Not Possible

### How to Use

 Clone the repository.

 Compile the provided C code.

 Input the sequence to test the validity of the output stack permutation.
