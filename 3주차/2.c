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
//    printf("������ �Է��ϼ���. : ");
//    scanf_s("%d", &n);
//
//    // ���� Ȯ��
//    if (n > 100 || n < 0)
//    {
//      continue;
//    }
//    // ���� ����
//    else
//    {
//      // ¦�� ��
//      for (int i = 1; i <= n; i++)
//      {
//        if (i % 2 == 0)
//        {
//          even_sum += i;
//        }
//      }
//      printf("¦���� �� : %d\n", even_sum);
//      // while ���� ����
//      int i = 1;
//      // Ȧ�� ��
//      while (i <= n)
//      {
//        if (i % 2 == 1)
//        {
//          odd_sum += i;
//        }
//        i++;
//      }
//      printf("Ȧ���� �� : %d\n", odd_sum);
//
//      // ��ü�� ��
//      for (int i = 1; i <= n; i++)
//      {
//        total_sum += i;
//      }
//      printf("��ü�� �� : %d\n", total_sum);
//      break;
//    }
//  }
//}