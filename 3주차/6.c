//#include <stdio.h>
//
//int main(void)
//{
//  for (int i = 0; i < 5; i++)
//  {
//    switch (i)
//    {
//    case 0:
//      printf("\n");
//      for (int i = 5; i > 0; i--)
//      {
//        for (int j = 0; j < i; j++)
//        {
//          printf("*");
//        }
//        for (int j = i; j < 5; j++)
//        {
//          printf(" ");
//        }
//        printf("\n");
//      }
//      break;
//    case 1:
//      printf("\n");
//      for (int i = 5; i > 0; i--)
//      {
//        for (int j = 1; j < i; j++)
//        {
//          printf(" ");
//        }
//        for (int j = i; j < 6; j++)
//        {
//          printf("*");
//        }
//        printf("\n");
//      }
//      break;
//    case 2:
//      printf("\n");
//      for (int i = 0; i < 5; i++)
//      {
//        for (int j = 0; j < i; j++)
//        {
//          printf(" ");
//        }
//        for (int j = i; j < 5; j++)
//        {
//          printf("*");
//        }
//        printf("\n");
//      }
//      break;
//    case 3:
//      printf("\n");
//      for (int i = 4; i >= 0; i--)
//      {
//        for (int j = 0; j < i; j++)
//        {
//          printf(" ");
//        }
//        for (int j = i; j < 4; j++)
//        {
//          printf("*");
//        }
//        printf("*");
//        for (int j = i; j < 4; j++)
//        {
//          printf("*");
//        }
//        for (int j = 0; j < i; j++)
//        {
//          printf(" ");
//        }
//        printf("\n");
//      }
//      break;
//    case 4:
//      printf("\n");
//      for (int i = 4; i >= 0; i--)
//      {
//        for (int j = 0; j < i; j++)
//        {
//          printf(" ");
//        }
//        for (int j = i; j < 4; j++)
//        {
//          printf("*");
//        }
//        printf("*");
//        for (int j = i; j < 4; j++)
//        {
//          printf("*");
//        }
//        for (int j = 0; j < i; j++)
//        {
//          printf(" ");
//        }
//        printf("\n");
//      }
//
//      for (int i = 0; i < 4; i++)
//      {
//          for (int j = 0; j < i+1; j++)
//          {
//              printf(" ");
//          }
//          for (int j = i; j < 3; j++)
//          {
//              printf("*");
//          }
//          printf("*");
//          for (int j = i; j < 3; j++)
//          {
//              printf("*");
//          }
//          for (int j = 0; j < i+1; j++)
//          {
//              printf(" ");
//          }
//        printf("\n");
//      }
//
//    default:
//      break;
//    }
//  }
//}