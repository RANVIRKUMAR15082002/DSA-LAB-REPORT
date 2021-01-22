/* Write a program using c to implement queue using array. */
/* C Program to Implement a Queue using an Array. */
#include<stdio.h>
#include<stdlib.h>
#define size 50
void insert();
void delete();
void display();
int queue_array[size];
int rear = - 1;
int front = - 1;
int main()
{
    int choice;
    while(1)
    {
        printf("1. Insert element to queue\n");
        printf("2. Delete element from queue\n");
        printf("3. Display all elements of queue\n");
        printf("4. Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting from program.")
                exit(1);
            default:
                printf("Invalid choice, please try again.\n");
        }
        printf("\n\n");   /* End of switch */
    }
    return 0;   /* End of while */
}   /* End of main() */
void insert()
{
    int add_item;
    if (rear == size-1)
    printf("Queue Overflow.\n");
    else
    {
        if(front == -1)
        /*If queue is initially empty. */
        front = 0;
        printf("Insert the element in queue : ");
        scanf("%d", &add_item);
        rear = rear+1;
        queue_array[rear] = add_item;
    }
}   /* End of insert() */
void delete()
{
    if(front == - 1 || front > rear)
    {
        printf("Queue Underflow.\n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d.\n", queue_array[front]);
        front = front + 1;
    }
}   /* End of delete() */
void display()
{
    int i;
    if(front == -1)
        printf("Queue is empty.\n");
    else
    {
        printf("Queue is : ");
        for(i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}   /* End of display() */
/* OUTPUT :-    1. Insert element to queue
                2. Delete element from queue
                3. Display all elements of queue
                4. Quit
                Enter your choice : 1
                Insert the element in queue : 15


                1. Insert element to queue
                2. Delete element from queue
                3. Display all elements of queue
                4. Quit
                Enter your choice : 1
                Insert the element in queue : 8


                1. Insert element to queue
                2. Delete element from queue
                3. Display all elements of queue
                4. Quit
                Enter your choice : 1
                Insert the element in queue : 20


                1. Insert element to queue
                2. Delete element from queue
                3. Display all elements of queue
                4. Quit
                Enter your choice : 1
                Insert the element in queue : 2


                1. Insert element to queue
                2. Delete element from queue
                3. Display all elements of queue
                4. Quit
                Enter your choice : 3
                Queue is : 15 8 20 2 


                1. Insert element to queue
                2. Delete element from queue
                3. Display all elements of queue
                4. Quit
                Enter your choice : 2
                Element deleted from queue is : 15.


                1. Insert element to queue
                2. Delete element from queue
                3. Display all elements of queue
                4. Quit
                Enter your choice : 3
                Queue is : 8 20 2 


                1. Insert element to queue
                2. Delete element from queue
                3. Display all elements of queue
                4. Quit
                Enter your choice : 4
                Exiting from program.
*/