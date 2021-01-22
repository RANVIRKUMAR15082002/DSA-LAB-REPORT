/* Write a program using C to implement circular queue using linked list. */
/* C Program to implement queue using circular linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
        int info;
        struct node *link;
} *rear = NULL;
void insert(int item);
int delete();
void display();
int isEmpty();
int peek();
int main()
{
        int choice, item;
        while(1)
        {
                printf("---------MENU--------\n");
                printf("1. Insert\n");
                printf("2. Delete\n");
                printf("3. Peek\n");
                printf("4. Display\n");
                printf("5. Quit\n");
                printf("---------------------\n");
                printf("Enter your choice : ");
                scanf("%d", &choice);
                switch(choice)
                {
                 case 1:
                        printf("Enter the element for insertion : ");
                        scanf("%d", &item);
                        insert(item);
                        break;
                 case 2:
                        printf("Deleted element is => %d.\n", delete());
                        break;
                 case 3:
                        printf("Item at the front of queue is => %d.", peek());
                        break;
                 case 4:
                        printf("Elements in the queue => ");
                        display();
                        break;
                 case 5:
                        printf("Exiting from program.");
                        exit(1);
                 default:
                        printf("Wrong choice.");
                }  /* End of switch */
                printf("\n\n");
        }  /* End of while */
}  /* End of main() */
void insert(int item)
{
        struct node *temp;
        temp = (struct node *)malloc(sizeof(struct node));
        temp->info = item;
        if(temp == NULL)
        {
                printf("Memory not available.");
                return;
        }
        if(isEmpty())   /* If queue is empty. */
        {
                rear=temp;
                temp->link = rear;
        }
        else
        {
                temp->link = rear->link;
                rear->link = temp;
                rear = temp;
        }
}  /* End of insert() */
int delete()
{
        int item;
        struct node *temp;
        if(isEmpty())
        {
                printf("Queue underflow.");
                exit(1);
        }
        if(rear->link == rear)  /* If only one element. */
        {
                temp = rear;
                rear = NULL;
        }
        else
        {
                temp = rear->link;
                rear->link = rear->link->link;
        }
        item = temp->info;
        free(temp);
        return item;
}  /* End of delete() */
int peek()
{
        if(isEmpty())
        {
                printf("Queue underflow.");
                exit(1);
        }
        return rear->link->info;
}  /* End of peek() */
int isEmpty()
{
        if(rear == NULL)
                return 1;
        else
                return 0;
}  /* End of isEmpty() */
void display()
{
        struct node *ptr;
        if(isEmpty())
        {
                printf("Queue is empty.");
                return;
        }
        printf("Queue is : ");
        ptr = rear->link;
        do
        {
                printf("%d ", ptr->info);
                ptr = ptr->link;
        }
        while(ptr != rear->link);
        printf("\n");
}  /* End of display() */
/* OUTPUT :-    ---------MENU--------
                1. Insert
                2. Delete
                3. Peek
                4. Display
                5. Quit
                ---------------------
                Enter your choice : 1
                Enter the element for insertion : 15


                ---------MENU--------
                1. Insert
                2. Delete
                3. Peek
                4. Display
                5. Quit
                ---------------------
                Enter your choice : 1
                Enter the element for insertion : 8


                ---------MENU--------
                1. Insert
                2. Delete
                3. Peek
                4. Display
                5. Quit
                ---------------------
                Enter your choice : 1
                Enter the element for insertion : 20


                ---------MENU--------
                1. Insert
                2. Delete
                3. Peek
                4. Display
                5. Quit
                ---------------------
                Enter your choice : 2
                Deleted element is => 15.


                ---------MENU--------
                1. Insert
                2. Delete
                3. Peek
                4. Display
                5. Quit
                ---------------------
                Enter your choice : 3
                Item at the front of queue is => 8.

                ---------MENU--------
                1. Insert
                2. Delete
                3. Peek
                4. Display
                5. Quit
                ---------------------
                Enter your choice : 4
                Elements in the queue => Queue is : 8 20


                ---------MENU--------
                1. Insert
                2. Delete
                3. Peek
                4. Display
                5. Quit
                ---------------------
                Enter your choice : 5
                Exiting from program.
*/