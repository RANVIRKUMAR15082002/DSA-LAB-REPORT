/* Write a program using c to implement stack using array. */
/* Stack implementation using array in C language. */
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>  // For INT_MIN.
#define size 100    // Create a stack with capacity of 100 elements.
int stack[size];    // Initially stack is empty.
int top = -1;
/* Function declaration to perform push and pop on stack. */
void push(int element);
int pop();
int main()
{
    int data, choice;
    while(1)
    {
        printf("------------------------------------\n");
        printf(" STACK IMPLEMENTATION PROGRAM \n");
        printf("------------------------------------\n");
        /* MENU */
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Size\n");
        printf("4. Exit\n");
        printf("------------------------------------\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter data to push into stack : ");
                scanf("%d", &data);
                push(data); // Push element to stack.
                break;
            case 2:
                data = pop();
                // If stack is not empty.
                if(data != INT_MIN)
                {
                    printf("Data, which is poped => %d.\n", data);
                }
                break;
            case 3:
                printf("Stack size : %d.\n", top + 1);
                //for(data = 0; data <= top+1; data++)
                //    printf("Elements in stack : %d ", data);
                break;
            case 4:
                printf("Exiting from program.\n");
                exit(1);
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
        printf("\n\n");
    }
    return 0;
}
/* Function to push a new element in stack. */
void push(int element)
{
    if(top >= size) // Check stack overflow.
    {
        printf("Stack Overflow, can't add more element element to stack.\n");
        return;
    }
    top++; // Increase element count in stack.
    stack[top] = element; // Push element in stack.
    printf("Data pushed to stack.\n");
}
/* Function to pop element from top of stack. */
int pop()
{
    if(top < 0) // Check stack underflow.
    {
        printf("Stack is empty.\n");
        /* Throw empty stack error/exception
        Since C does not have concept of exception
        Hence return minimum integer value as error value
        Later in code check if return value is 'INT_MIN', then
        stack is empty */
        return INT_MIN;
    }
    // Return stack top and decrease element count in stack.
    return stack[top--];
}
/* OUTPUT :-    ------------------------------------
                STACK IMPLEMENTATION PROGRAM       
                ------------------------------------
                1. Push
                2. Pop
                3. Size
                4. Exit
                ------------------------------------
                Enter your choice : 1
                Enter data to push into stack : 15
                Data pushed to stack.


                ------------------------------------
                STACK IMPLEMENTATION PROGRAM
                ------------------------------------
                1. Push
                2. Pop
                3. Size
                4. Exit
                ------------------------------------
                Enter your choice : 1
                Enter data to push into stack : 8
                Data pushed to stack.


                ------------------------------------
                STACK IMPLEMENTATION PROGRAM 
                ------------------------------------
                1. Push
                2. Pop
                3. Size
                4. Exit
                ------------------------------------
                Enter your choice : 1
                Enter data to push into stack : 20
                Data pushed to stack.


                ------------------------------------
                STACK IMPLEMENTATION PROGRAM
                ------------------------------------
                1. Push
                2. Pop
                3. Size
                4. Exit
                ------------------------------------
                Enter your choice : 1
                Enter data to push into stack : 2
                Data pushed to stack.


                ------------------------------------
                STACK IMPLEMENTATION PROGRAM
                ------------------------------------
                1. Push
                2. Pop
                3. Size
                4. Exit
                ------------------------------------
                Enter your choice : 3
                Stack size : 4.


                ------------------------------------
                STACK IMPLEMENTATION PROGRAM
                ------------------------------------
                1. Push
                2. Pop
                3. Size
                4. Exit
                ------------------------------------
                Enter your choice : 2
                Data, which is poped => 2.


                ------------------------------------
                STACK IMPLEMENTATION PROGRAM
                ------------------------------------
                1. Push
                2. Pop
                3. Size
                4. Exit
                ------------------------------------
                Enter your choice : 4
                Exiting from program.
*/