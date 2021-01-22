/* Write a program using C to implement a circular queue using array. */
#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int queue[MAX]; 	// array declaration.
int front = -1;
int rear = -1; 
// Function to insert an element in a circular queue.
void enqueue(int element)
{
	if(front == -1 && rear == -1)	// Condition to check queue is empty.
	{  
        front = 0;
        rear = 0;
        queue[rear] = element;
	}
    else if((rear + 1) % MAX == front)	// Condition to check queue is full.
    {
		printf("Queue is overflow.");  
    }
    else
    {
		rear = (rear + 1) % MAX;       // Rear is incremented.
		queue[rear] = element;     // Assigning a value to the queue at the rear position.
    }
} 
// Function to delete the element from the queue.
int dequeue()
{  
    if((front == -1) && (rear == -1))	// Condition to check queue is empty.
    {
        printf("Queue is underflow.");
    }
	else if(front == rear)
	{
		printf("The dequeued element is : %d.", queue[front]);
		front = -1;
		rear = -1;
	}
	else
	{
		printf("The dequeued element is : %d.", queue[front]);
		front = (front + 1) % MAX;
	}
}
// Function to display the elements of a queue.
void display()
{
	int i = front;
	if(front == -1 && rear == -1)
	{
		printf("Queue is empty.");
	}
	else
	{
		printf("Elements in queue are : ");
		while(i <= rear)
		{
			printf("%d\t", queue[i]);
			i = (i + 1) % MAX;  
        }
    }
}
int main()
{
    int choice, data;	// Variables declaration.
    while(1)	// while loop.
    {
		printf("----------MENU----------\n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Display\n");
		printf("4. Quit\n");
		printf("------------------------\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter the element which is to be inserted : ");
				scanf("%d", &data);
				enqueue(data);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Exiting from program.");
				exit(1);
				break;
			default :
				printf("Wrong choice.");
		}
		printf("\n\n");
	}
	return 0;
}
/* OUTPUT :- -	---------MENU----------
				1. Insert
				2. Delete
				3. Display
				4. Quit
				------------------------
				Enter your choice : 1   
				Enter the element which is to be inserted : 15


				----------MENU----------
				1. Insert
				2. Delete
				3. Display
				4. Quit
				------------------------
				Enter your choice : 1
				Enter the element which is to be inserted : 8


				----------MENU----------
				1. Insert
				2. Delete
				3. Display
				4. Quit
				------------------------
				Enter your choice : 1
				Enter the element which is to be inserted : 20


				----------MENU----------
				1. Insert
				2. Delete
				3. Display
				4. Quit
				------------------------
				Enter your choice : 3
				Elements in queue are : 15      8       20      

				----------MENU----------
				1. Insert
				2. Delete
				3. Display
				4. Quit
				------------------------
				Enter your choice : 2
				The dequeued element is : 15.

				----------MENU----------
				1. Insert
				2. Delete
				3. Display
				4. Quit
				------------------------
				Enter your choice : 3
				Elements in queue are : 8       20

				----------MENU----------
				1. Insert
				2. Delete
				3. Display
				4. Quit
				------------------------
				Enter your choice : 4
				Exiting from program.
*/