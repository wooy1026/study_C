#include <stdio.h>

int main()
{
	int n, x;
	int a;
	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (x > 
			a)
		{
			printf("%d ", a);
		}
		else
		{
			continue;
		}
	}
	return 0;
}

/*
이문제에서 수열이라고 해서 배열을 사용 할 필요는 없다.
배열의 크기를 지정해서 하나하나 넣는것이 일이므로, 반복문을 사용하여 들어온 값을
바로 비교하여 출력시키면 된다.
*/
