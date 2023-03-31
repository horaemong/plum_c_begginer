//#include <stdio.h>
//
//void main()
//{
//  int n = 1;
//  int even_sum = 0;
//  int odd_sum = 0;
//  int total_sum = 0;
//
//  while (1)
//  {
//    printf("정수를 입력하세요. : ");
//    scanf_s("%d", &n);
//
//    // 조건 확인
//    if (n > 100 || n < 0)
//    {
//      continue;
//    }
//    // 조건 만족
//    else
//    {
//      // 짝수 합
//      for (int i = 1; i <= n; i++)
//      {
//        if (i % 2 == 0)
//        {
//          even_sum += i;
//        }
//      }
//      printf("짝수의 합 : %d\n", even_sum);
//      // while 변수 선언
//      int i = 1;
//      // 홀수 합
//      while (i <= n)
//      {
//        if (i % 2 == 1)
//        {
//          odd_sum += i;
//        }
//        i++;
//      }
//      printf("홀수의 합 : %d\n", odd_sum);
//
//      // 전체의 합
//      for (int i = 1; i <= n; i++)
//      {
//        total_sum += i;
//      }
//      printf("전체의 합 : %d\n", total_sum);
//      break;
//    }
//  }
//}