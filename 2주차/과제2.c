#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void main()
{
	srand(time(NULL));
	int random = 0;
	char rsp[10];						// 가위, 바위, 보의 약자
	int input_rsp;					// 사용자가 입력한 가위, 바위, 보
	char str_input_rsp[10]; // 사용자가 입력한 가위, 바위, 보의 문자열
	int com_win = 0;				// 컴퓨터 승리 여부
	int user_win = 0;				// 사용자 승리 여부

	 /*첫 번째 판
	 랜덤 숫자 생성*/
	
	random = rand() % 3;

	 //랜덤 숫자를 가위, 바위, 보로 변환
	switch (random)
	{
	case 0:
		strcpy_s(rsp, 10, "가위");
		break;
	case 1:
		strcpy_s(rsp, 10, "바위");
		break;
	case 2:
		strcpy_s(rsp, 10, "보");
		break;
	default:
		break;
	}
	// 사용자가 가위, 바위, 보 중 하나를 입력받음(0 : 가위, 1 : 바위, 2 : 보)
	 printf("가위, 바위, 보 중 하나를 입력하세요 : ");
	 scanf_s("%d", &input_rsp);

	// 사용자가 입력한 숫자를 가위, 바위, 보로 변환
	 switch (input_rsp)
	{
	 case 0:
	strcpy_s(str_input_rsp, 10, "가위");
	break;
	case 1:
		strcpy_s(str_input_rsp, 10, "바위");
		break;
	case 2:
		strcpy_s(str_input_rsp, 10, "보");
		break;
	 default:
		printf("넌 나의 수를 평생 이해 못해...\n");
		break;
	 }

	// 승부를 가른다.
	 printf("컴퓨터 : %s\n", rsp);
	 printf("나 : %s\n", str_input_rsp);
	 if (random == input_rsp)
	{
		printf("크큭 비겼군\n");
	 }
	 else if (random == 0 && input_rsp == 1)
	{
		printf("크큭 나님이 이겼군\n");
		user_win += 1;
	 }
	 else if (random == 0 && input_rsp == 2)
	{
		printf("크큭 나님이 졌군\n");
		com_win += 1;
	 }
	 else if (random == 1 && input_rsp == 0)
	{
		printf("크큭 나님이 졌군\n");
		com_win += 1;
	 }
	 else if (random == 1 && input_rsp == 2)
	{
		printf("크큭 나님이 이겼군\n");
		user_win += 1;
	 }
	 else if (random == 2 && input_rsp == 0)
	{
		printf("크큭 나님이 이겼군\n");
		user_win += 1;
	 }
	 else if (random == 2 && input_rsp == 1)
	{
		printf("크큭 나님이 졌군\n");
		com_win += 1;
	 }

	//두 번째 판
	 random = 0;
	 random = rand() % 3;

	// 랜덤 숫자를 가위, 바위, 보로 변환
	 switch (random)
	{
	 case 0:
		 strcpy_s(rsp, 10, "가위");
		 break;
	 case 1:
		 strcpy_s(rsp, 10, "바위");
		 break;
	 case 2:
		 strcpy_s(rsp, 10, "보");
		 break;
	 }

	// 사용자가 가위, 바위, 보 중 하나를 입력받음(0 : 가위, 1 : 바위, 2 : 보)
	 printf("가위, 바위, 보 중 하나를 입력하세요 : ");
	 scanf_s("%d", &input_rsp);

	// 사용자가 입력한 숫자를 가위, 바위, 보로 변환
	 switch (input_rsp)
	{
	 case 0:
		 strcpy_s(str_input_rsp, 10, "가위");
		 break;
	 case 1:
		 strcpy_s(str_input_rsp, 10, "바위");
		 break;
	 case 2:
		 strcpy_s(str_input_rsp, 10, "보");
		 break;
	 default:
		printf("넌 나의 수를 평생 이해 못해...\n");
		break;
	 }

	// 승부를 가른다.
	 printf("컴퓨터 : %s\n", rsp);
	 printf("나 : %s\n", str_input_rsp);
	 if (random == input_rsp)
	{
		printf("크큭 비겼군\n");
	 }
	 else if (random == 0 && input_rsp == 1)
	{
		printf("크큭 나님이 이겼군\n");
		user_win += 1;
	 }
	 else if (random == 0 && input_rsp == 2)
	{
		printf("크큭 나님이 졌군\n");
		com_win += 1;
	 }
	 else if (random == 1 && input_rsp == 0)
	{
		printf("크큭 나님이 졌군\n");
		com_win += 1;
	 }
	 else if (random == 1 && input_rsp == 2)
	{
		printf("크큭 나님이 이겼군\n");
		user_win += 1;
	 }
	 else if (random == 2 && input_rsp == 0)
	{
		printf("크큭 나님이 이겼군\n");
		user_win += 1;
	 }
	 else if (random == 2 && input_rsp == 1)
	{
		printf("크큭 나님이 졌군\n");
		com_win += 1;
	 }

	// 세 번째 판
	 random = 0;
	 random = rand() % 3;

	// 랜덤 숫자를 가위, 바위, 보로 변환
	 switch (random)
	 {
	 case 0:
		 strcpy_s(rsp, 10, "가위");
		 break;
	 case 1:
		 strcpy_s(rsp, 10, "바위");
		 break;
	 case 2:
		 strcpy_s(rsp, 10, "보");
		 break;
	 }

	// 사용자가 가위, 바위, 보 중 하나를 입력받음(0 : 가위, 1 : 바위, 2 : 보)
	 printf("가위, 바위, 보 중 하나를 입력하세요 : ");
	 scanf_s("%d", &input_rsp);

	// 사용자가 입력한 숫자를 가위, 바위, 보로 변환
	 switch (input_rsp)
	{
	 case 0:
		strcpy_s(str_input_rsp, 10,"가위");
		break;
	 case 1:
		strcpy_s(str_input_rsp, 10, "바위");
		break;
	 case 2:
		strcpy_s(str_input_rsp, 10, "보");
		break;
	 default:
		printf("넌 나의 수를 평생 이해 못해...\n");
		return 0;
		break;
	 }

	// 승부를 가른다.
	 printf("컴퓨터 : %s\n", rsp);
	 printf("나 : %s\n", str_input_rsp);
	 if (random == input_rsp)
	{
		printf("크큭 비겼군\n");
	 }
	 else if (random == 0 && input_rsp == 1)
	{
		printf("크큭 나님이 이겼군\n");
		user_win += 1;
	 }
	 else if (random == 0 && input_rsp == 2)
	{
		printf("크큭 나님이 졌군\n");
		com_win += 1;
	 }
	 else if (random == 1 && input_rsp == 0)
	{
		printf("크큭 나님이 졌군\n");
		com_win += 1;
	 }
	 else if (random == 1 && input_rsp == 2)
	{
		printf("크큭 나님이 이겼군\n");
		user_win += 1;
	 }
	 else if (random == 2 && input_rsp == 0)
	{
		printf("크큭 나님이 이겼군\n");
		user_win += 1;
	 }
	 else if (random == 2 && input_rsp == 1)
	{
		printf("크큭 나님이 졌군\n");
		com_win += 1;
	 }

	 // 최종 승패 판정
	 if (com_win > user_win)
	 {
	 	printf("\"크윽 기계따위가 날 이기다니\"\n");
	 }
	 else if (com_win < user_win)
	 {
	 	printf("\"크큭 기계따위는 날 이기지 못해\"\n");
	 }
	 else
	 {
	 	printf("\"크큭 기계주제에 나와 비등하다니\"\n");
	 }
}