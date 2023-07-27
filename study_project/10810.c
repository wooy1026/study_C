#include <stdio.h>

int main()
{
	int N, M; // N = 바구니의 개수, M = 공을 넣는 횟수
	int arr[101] = { 0, }; // 배열을 0으로 초기화
	int in_a, in_b, in_c;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) // 공을 넣는 횟수 반복
	{
		scanf("%d %d %d", &in_a, &in_b, &in_c); // 공을 넣는 방법 입력
		for (int k = in_a; k <= in_b; k++) // a번 바구니 부터 b번 바구니까지 공을 넣기 반복
		{
			arr[k] = in_c; // 바구니에 c번 공을 넣기
		}
	}

	for (int i = 1; i <= N; i++) // 1번 바구니 부터 N번 바구니까지 들어간 공의 번호 반복 출력
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
