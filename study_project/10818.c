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
�̹������� �����̶�� �ؼ� �迭�� ��� �� �ʿ�� ����.
�迭�� ũ�⸦ �����ؼ� �ϳ��ϳ� �ִ°��� ���̹Ƿ�, �ݺ����� ����Ͽ� ���� ����
�ٷ� ���Ͽ� ��½�Ű�� �ȴ�.
*/