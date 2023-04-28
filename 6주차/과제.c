// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void main()
// {
//   int input_num, total = 0, num;
//   int random;
//   int a[100];
//   srand(time(NULL));

//   scanf_s("%d", &input_num);
//   for (int i = 0; i < input_num; i++)
//   {
//     random = rand() % 100;
//     a[i] = random;
//     printf("%d  ", *(a + i));
//   }
//   printf("\n");
//   scanf_s("%d", &num);
//   for (int i = 0; i < input_num; i++)
//   {
//     if (a[i] == num)
//     {
//       total += 1;
//     }
//   }
//   printf("%d", total);
// }