#include <stdio.h>

int main()
{
	int num, input;
	int max = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &input);
		if (input >= max)
		{
			max = input;
			num = i + 1;
		}
	}
	printf("%d\n%d", max, num);
	return 0;
}
