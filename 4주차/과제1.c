#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

size_t max_num = 45;
int all_lotto_numbers[45]; // 1~45

int main()
{
  int count = 0;
  while (1)
  {
    max_num = 45;
    // lotto numbers 6개 뽑기
    int lotto_numbers[6];
    int correct_lotto_numbers[6];
    int size_random = 45;
    int right = 0;
    
    srand(time(NULL));

    // lotto numbers 45개 생성
    for (int i = 0; i < 45; i++)
    {
      all_lotto_numbers[i] = i + 1;
    }

    // lotto numbers 6개 뽑기
    for (int i = 0; i < 6; i++)
    {
      int random = rand() % max_num;
      lotto_numbers[i] = all_lotto_numbers[random];
      delete_at(random);
    }

    max_num = 45;
    // lotto numbers 45개 생성
    for (int i = 0; i < 45; i++)
    {
        all_lotto_numbers[i] = i + 1;
    }
    //
    for (int i = 0; i < 6; i++)
    {
      int random = rand() % max_num;
      correct_lotto_numbers[i] = all_lotto_numbers[random];
      delete_at(random);
    }

    // lotto 맞는 숫자 확인
    for (int i = 0; i < 6; i++)
    {
      for (int j = 0; j < 6; j++)
      {
        if (lotto_numbers[i] == correct_lotto_numbers[j])
        {
          right++;
        }
      }
    }

    count++;
    if (right == 6)
    {
      printf("%d번째 1등이 나왔습니다.\n", count);
    }
    else
    {
        printf("1등이 아닙니다.");
    }
  }
}

// 특정 값을 뽑고 배열에서 삭제하는 함수
int delete_at(size_t index)
{
  for (int i = index; i < max_num; i++)
  {
    all_lotto_numbers[i] = all_lotto_numbers[i + 1];
  }
  max_num--;
}