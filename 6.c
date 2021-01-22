/* Write a program using c to search an element in the array using iterative
binary search. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[50], num, i, first, mid, last, searchElement, loc;
    int flag = 0;
    printf("Enter max no. of element to be searched : ");
    scanf("%d", &num);
    printf("Enter %d elements : ", num);
    for(i = 0; i < num; i++)
    scanf("%d", &array[i]);
    first = 0;
    last = num;
    printf("Enter the element to be searched : ");
    scanf("%d", &searchElement);
    while(first <= last)
    {
        mid = (first + last) / 2;
        if(array[mid] == searchElement)
        {
            flag = 1;
            printf("%d found at location %d.", searchElement, mid+1);
            break;
        }
        else if(searchElement > array[mid])
        first = mid+1;
        else
        last = mid-1;
    }
    if(flag == 0)
    printf("Element not found.");
    return 0;
}
/* OUTPUT :- Enter the max no. of element to be searched : 5
             Enter 5 elements : 2 8 15 18 20
             20 found at location 5.
*/