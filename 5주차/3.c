#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  int lotto_num[45];
  int input_lotto[6];
  int correct_lotto[6];
  int right = 0;
  int random;

  srand(time(NULL));

  for (int i = 0; i < 45; i++)
  {
    lotto_num[i] = i + 1;
  }

  printf("로또 번호를 입력하세요. : ");
  scanf_s("%d %d %d %d %d %d", &input_lotto[0], &input_lotto[1], &input_lotto[2], &input_lotto[3], &input_lotto[4], &input_lotto[5]);

  /*for (int i = 0; i < 6; i++)
  {
    printf("로또 번호를 입력하세요. : ");
    scanf_s("%d", &input_lotto[i]);
  }*/

  for (int i = 0; i < 6; i++)
  {
    random = rand() % 45;
    correct_lotto[i] = lotto_num[random];
    printf("%d번 : %d \n", i, correct_lotto[i]);
  }
  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      if (input_lotto[i] == correct_lotto[j])
      {
        right++;
      }
    }
  }
  printf("맞은 개수 : %d\n", right);
}