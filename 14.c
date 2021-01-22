/* Write a program using C to implement the merge sort. */
/* C program for Merge Sort. */
#include<stdio.h>
void mergesort(int array[],int i,int j);
void merge(int array[],int i1,int j1,int i2,int j2);
int main()
{
	int array[50], num, i;
	printf("Enter max no. of element to be sorted : ");
	scanf("%d", &num);
	printf("Enter %d elements : ", num);
	for(i = 0; i < num; i++)
		scanf("%d", &array[i]);
	mergesort(array, 0, num-1);
	printf("Sorted elements : ");
	for(i = 0; i < num; i++)
		printf("%d\t", array[i]);
	return 0;
}
void mergesort(int array[],int i,int j)
{
	int mid;
	if(i < j)
	{
		mid = (i + j) / 2;
		mergesort(array, i, mid);	//Left recursion.
		mergesort(array,mid+1,j);	//Right recursion.
		merge(array,i,mid,mid+1,j);	//Merging of two sorted sub-arrays.
	}
} 
void merge(int array[], int i1, int j1, int i2, int j2)
{
	int temp[50];	//array used for merging.
	int i, j, k;
	i = i1;	//Beginning of the first list.
	j = i2;	//Beginning of the second list.
	k = 0;
	while(i <= j1 && j <= j2)	//while elements in both lists.
	{
		if(array[i] < array[j])
			temp[k++] = array[i++];
		else
			temp[k++] = array[j++];
	}
	while(i <= j1)	//Copy remaining elements of the first list.
		temp[k++] = array[i++];
	while(j <= j2)	//Copy remaining elements of the second list.
		temp[k++] = array[j++];
	// Transfer elements from temp[] back to array[].
	for(i = i1, j = 0; i <= j2; i++, j++)
		array[i] = temp[j];
}
/*OUTPUT :- Enter max no. of element to be sorted : 5
			Enter 5 elements : 15 8 20 2 18
			Sorted elements : 2    8    15    18    20
*/