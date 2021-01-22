/* Write a program using C to search an element in the array using linear search. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[100], number, i, search;
    printf("Enter the number of elements in array : ");
    scanf("%d", &number);
    printf("Enter %d numbers : ", number);
    for(i = 0; i < number; i++)
    scanf("%d", &array[i]);
    printf("Enter the number to search : ");
    scanf("%d", &search);
    for(i = 0; i < number; i++)
    {
        if(array[i] == search) /* if required element found */
        {
            printf("%d is present at location %d.\n", search, i+1);
            break;
        }
    }
    if(i == number)
    printf("%d is not present in array.\n", search);
    return 0;
}
/* OUTPUT :- Enter the number of elements in array : 4
             Enter 4 numbers : 15 8 20 2
             Enter the number to search : 20
             20 is present at location 3.
*/