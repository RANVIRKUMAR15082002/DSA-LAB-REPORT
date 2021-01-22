/* Write a program using c to implement insertion sort. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
   /* Here i & j for loop counters, temp for swapping,
     count for total number of elements, array[] to
     store the input numbers in array. You can increase
     or decrease the size of number array as per requirement.
   */
   int array[50], i, j, count, temp;
   printf("Enter the max no. of element to be sorted : ");
   scanf("%d", &count);
   printf("Enter %d elements : ", count);
   // This loop would store the input numbers in array.
   for(i = 0; i < count; i++)
   {
      scanf("%d", &array[i]);
   }
   // Implementation of insertion sort algorithm.
   for(i = 1; i < count; i++)
   {
      temp = array[i];
      j = i-1;
      while((temp < array[j]) && (j >= 0))
      {
         array[j + 1] = array[j];
         j = j-1;
      }
      array[j + 1] = temp;
   }
   printf("Sorted elements : ");
   for(i = 0; i < count; i++)
   {
      printf("%d\t", array[i]);
   }
   return 0;
}
/* OUTPUT :- Enter the max no. of element to be sorted : 5
             Enter 5 elements : 15 8 20 2 18
             Sorted array : 2    8    15    18    20
*/