#include <stdio.h>

int main(void)
{
	int n, a;
	int max = -1000000;
	int min = 1000000;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (max <= a)
		{
			max = a;
		}

		if (min >= a)
		{
			min = a;
		}
		
	}

	printf("%d %d", min, max);

	return 0;
}
