/* Write a program using c to search an element in the array using recursive
binary search. */
#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int binsearch(int[], int, int, int);
int main()
{
    int num, i, searchElement, loc;
    int low, high, array[MAX];
    printf("Enter max no. of element to be searched : ");
    scanf("%d", &num);
    printf("Enter %d elements of array : ", num);
    for(i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    low = 0;
    high = num - 1;
    printf("Enter element to be searched : ");
    scanf("%d", &searchElement);
    loc = binsearch(array, searchElement, low, high);
    if(loc != -1)
    {
        printf("%d found at location %d.", searchElement, (loc + 1));
    }
    else
    printf("The number is not present in the array.");
    return 0;
}
int binsearch(int array[], int x, int low, int high)
{
    int mid;
    if(low > high)
    return -1;
    mid = (low + high) / 2;
    if(x == array[mid])
    {
        return (mid);
    }
    else if(x < array[mid])
    {
        binsearch(array, x, low, mid - 1);
    }
    else
    {
        binsearch(array, x, mid + 1, high);
    }
}
/* OUTPUT :- Enter max no. of element to be searched : 5
             Enter 5 elements of array : 2 8 15 18 20
             20 found at location 5.
*/