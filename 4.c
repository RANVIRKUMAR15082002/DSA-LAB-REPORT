/* Write a program using c to implement selection sort. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[100], num, i, j, position, swap;
    printf("Enter max number of element to be sorted : ");
    scanf("%d", &num);
    printf("Enter %d numbers : ", num);
    for(i = 0; i < num; i++)
    scanf("%d", &array[i]);
    for(i = 0; i < num-1; i++)
    {
        position = i;
        for(j = i+1; j < num; j++)
        {
            if(array[position] > array[j])
            position = j;
        }
        if(position != i)
        {
            swap = array[i];
            array[i] = array[position];
            array[position] = swap;
        }
    }
    printf("Sorted Array : ");
    for(i = 0; i < num; i++)
    printf("%d\t", array[i]);
    return 0;
}
/* OUTPUT :- Enter max number of element to sorted : 5
             Enter 5 numbers : 15 8 20 2 18
             Sorted Array : 2    8    15    18    20
*/