// #include <stdio.h>

// int main(void)
// {
//   draw_star_first();
//   draw_star_last();
// }

// int draw_star_first()
// {
//   // 공백 세기
//   int space = 5;

//   // 별 그리기
//   for (int i = 1; i < 6; i++)
//   {
//     for (int j = 0; j < i; j++)
//     {
//       printf("*");
//     }
//     for (int k = i; k < space; k++)
//     {
//       printf(" ");
//     }
//     for (int j = i; j < space + 1; j++)
//     {
//       printf("*");
//     }
//     for (int k = 1; k < i; k++)
//     {
//       printf(" ");
//     }
//     printf("\n");
//   }
// }

// int draw_star_last()
// {
//   // 공백 세기
//   int space = 5;

//   // 별 그리기
//   for (int i = 5; i > 0; i--)
//   {
//     for (int j = 0; j < i - 1; j++)
//     {
//       printf(" ");
//     }
//     for (int k = i; k < space + 1; k++)
//     {
//       printf("*");
//     }
//     for (int j = i; j < space; j++)
//     {
//       printf(" ");
//     }
//     for (int k = 0; k < i; k++)
//     {
//       printf("*");
//     }

//     printf("\n");
//   }
// }