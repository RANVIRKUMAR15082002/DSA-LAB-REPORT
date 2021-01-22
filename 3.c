/* Write a program using c to implement bubble sort. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[50], num, i, j, temp;
    printf("Enter the max no. of elements to sort : ");
    scanf("%d", &num);
    printf("Enter the elements : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i = 0; i < num; i++)
    for(j = i+1; j < num; j++)
    {
        if(array[i] > array[j])
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    printf("Elements after sorting : ");
    for(i = 0; i < num; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}
/* OUTPUT :- Enter the max no. of elements to be sort : 5
             Enter the elements : 15 8 20 2 18
             Elements after sorting : 2    8   15   18    20
*/