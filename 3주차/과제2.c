#include <stdio.h>

void main()
{
  int n, m; // 0<n<=m<1000

  while (1)
  {
    printf("숫자 두 개를 입력하세요 : ");
    scanf_s("%d %d", &n, &m);
    if (n > 0 && n <= m && m < 1000)
    {
      break;
    }
    else
    {
      printf("잘못 입력하셨습니다. 다시 입력해주세요.\n");
    }
  }
  for (int i = n; i <= m; i++)
  {
    if (is_prime(i) == 1)
    {
      printf("%d번째 포켓몬 넌 내꺼야!\n", i);
    }
  }
}

int is_prime(int number)
{
  int i;
  for (i = 2; i < number; i++)
  {
    if (number % i == 0)
    {
      return 0;
    }
  }
  return 1;
}