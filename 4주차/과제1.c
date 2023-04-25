#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

size_t max_num = 45;
int all_lotto_numbers[45]; // 1~45

int main()
{
  int count = 0;
  int total_money = 10000000;
  while (total_money > 0)
  {
    max_num = 45;
    // lotto numbers 6개 뽑기
    int lotto_numbers[6];
    int correct_lotto_numbers[6];
    int size_random = 45;
    int right = 0;
    int bonus_right = 0;
    int bonus;

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

    bonus = all_lotto_numbers[rand() % max_num];

    // lotto 맞는 숫자 확인
    for (int i = 0; i < 6; i++)
    {
      for (int j = 0; j < 6; j++)
      {
        if (lotto_numbers[i] == correct_lotto_numbers[j])
        {
          right++;
        }
        if (lotto_numbers[i] == bonus)
        {
          bonus_right++;
        }
      }
    }

    count++;
    total_money -= 1000;
    if (right == 6)
    {
      total_money += 1000000000;
      printf("%d번째 1등이 나왔습니다. 내 전재산 : %d\n", count, total_money);
      break;
    }
    else if (right == 5)
    {
      total_money += 1500000;
      printf("%d번째 3등이 나왔습니다. 내 전재산 : %d\n", count, total_money);
    }
    else if (right == 5 && bonus_right == 1)
    {
      total_money += 70000000;
      printf("%d번째 2등이 나왔습니다. 내 전재산 : %d\n", count, total_money);
    }
    else if (right == 4)
    {
      total_money += 50000;
      printf("%d번째 4등이 나왔습니다. 내 전재산 : %d\n", count, total_money);
    }
    else if (right == 3)
    {
      total_money += 5000;
      printf("%d번째 5등이 나왔습니다. 내 전재산 : %d\n", count, total_money);
    }
    else
    {
      printf("%d번째 %d개 맞췄습니다a. 내 전재산 : %d\n", count, right, total_money);
    }
    // srand를 제대로 이용하기 위해 1초 쉬어줌
    Sleep(1000);
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