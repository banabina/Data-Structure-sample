#include "quick_sort.h"

int main(void)
{
	int i;
	int list[MAX_SIZE] = { 5, 3, 8,4, 9, 1, 6, 2 ,7 };

	quick_sort(list, 0, MAX_SIZE - 1);

	for (i = 0; i < MAX_SIZE; ++i)
	{
		printf("%d\n", list[i]);
	}
}