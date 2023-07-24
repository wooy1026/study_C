#include <stdio.h>

int main() 
{
    int first, second;
    while (scanf("%d %d", &first, &second) != EOF)
    {
        printf("%d\n", first + second);
    }

    return 0;
}

/*
이 문제의 가장 중요한 점은 무한루프로 인해 초과되는 값을 자꾸 반환하기 때문에,
EOF : end of file 을 사용하여야 한다.
EOF는 파일의 끝을 의미하고, -1의 값을 가지고 있다.
동시에 알아야 하는것은 scanf함수가 반환값을 가지고 있는데,
이 반환값이 내보내는 값의 개수라는 점이다.
예를 들어 int n =  scanf("%d %d", &a, &b); 으로 작성하고, a,b를 입력하고 n의 값을 프린팅하면,
1 1 입력시 정상적인 값 2개를 입력하므로 n는 2가 나온다.
a 1 입력시 a는 %d의 규격값이 아니므로 뒤의 b를 받기전에 오류가 나므로 n은 0이 나온다.
반대로 1 a입력시 1은 반환되므로 n은 1이 나오게 된다.
위 while의 조건문 말고도 위 방법을 사용하여
scanf("%d %d", &a, &b) != 2))를 작성하여도 똑같이 실행 가능하다.
*/