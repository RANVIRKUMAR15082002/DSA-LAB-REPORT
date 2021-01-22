/* Write a program using C to search an element in 2D array using linear search. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rows, columns, i, j, searchElement, count=0;
    // Enter the order of matrix.
    printf("Enter the number of Row and Column : ");
    scanf("%d %d", &rows, &columns);
    // Create a 2D array of the same order.
    int array[rows][columns];
    // Take inputs into the 2D array.
    printf("Enter %d elements :\n", (rows*columns));
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    // Enter the search element.
    printf("\nEnter the element to get the position : ");
    scanf("%d", &searchElement);
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            if(array[i][j] == searchElement)
            {
                /* If a match is found, then output the position and increment the count. */
                printf("The element is present at (%d , %d) position.\n", i, j);
                count++;
            }
        }
    }
    /* If count remains 0, it means the array doesn't had the search element. */
    if(count == 0)
    printf("Not found.\n");
    return 0;
}
/* OUTPUT :- Enter the number of Row and Column : 3 3
             Enter 9  elements :
             15 8 20
             02 18 4
             11 9 22
             
             Enter the element to get the position : 18
             The element is present at (1 , 1) position.
*/