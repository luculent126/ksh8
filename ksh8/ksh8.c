#include<stdio.h>
int main()
{
	int i, j, temp;
	int array[10] = { 1, 5, 9, 2, 8, 3, 7, 4, 6, 10 };
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d", array[i]);
		}
	}
}