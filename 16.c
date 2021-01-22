/* Write a program using C to implement quick sort. */
#include<stdio.h>
void quicksort(int number[25], int first, int last)
{
   int i, j, pivot, temp;
   if(first < last)
   {
      pivot = first;
      i = first;
      j = last;
      while(i < j)
      {
         while(number[i] <= number[pivot] && i < last)
            i++;
         while(number[j] > number[pivot])
            j--;
         if(i < j)
         {
            temp = number[i];
            number[i] = number[j];
            number[j] = temp;
         }
      }
      temp = number[pivot];
      number[pivot] = number[j];
      number[j] = temp;
      quicksort(number, first, j-1);
      quicksort(number, j+1, last);
   }
}
int main()
{
   int i, count, number[25];
   printf("Enter max no. of elements to sorted : ");
   scanf("%d", &count);
   printf("Enter %d elements : ", count);
   for(i = 0; i < count; i++)
      scanf("%d", &number[i]);
   quicksort(number, 0, count-1);
   printf("Sorted elements : ");
   for(i = 0; i < count; i++)
      printf("%d\t", number[i]);
   return 0;
}
/* OOUTPUT :- Enter max no. of elements to sorted : 5
              Enter 5 elements : 15 8 20 2 18
              Sorted elements : 2     8       15      18      20
*/