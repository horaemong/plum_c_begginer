#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
	int random = 0;
	char rsp[10]; // ����, ����, ���� ����
	//int input_rsp; // ����ڰ� �Է��� ����, ����, ��
	//char str_input_rsp[10]; // ����ڰ� �Է��� ����, ����, ���� ���ڿ�
	int com_win = 0; // ��ǻ�� �¸� ����
	int user_win = 0; // ����� �¸� ����

	// ù ��° ��
	// ���� ���� ����
	srand(time(NULL));
	random = rand() % 3;

	// ���� ���ڸ� ����, ����, ���� ��ȯ
	switch (random)
	{
	case 0:
		strcpy(rsp, "����");
		break;
	case 1:
		strcpy(rsp, "����");
		break;
	case 2:
		strcpy(rsp, "��");
		break;
	default:
		break;
	}
	printf("%s", rsp);
	//// ����ڰ� ����, ����, �� �� �ϳ��� �Է¹���(0 : ����, 1 : ����, 2 : ��)
	//printf("����, ����, �� �� �ϳ��� �Է��ϼ��� : ");
	//scanf_s("%d", &input_rsp);

	//// ����ڰ� �Է��� ���ڸ� ����, ����, ���� ��ȯ
	//switch (input_rsp)
	//{
	//case 0:
	//	strcpy_s(str_input_rsp, "����",10);
	//	break;
	//case 1:
	//	strcpy_s(str_input_rsp, "����",10);
	//	break;
	//case 2:
	//	strcpy_s(str_input_rsp, "��",10);
	//	break;
	//default:
	//	printf("�� ���� ���� ��� ���� ����...");
	//	break;
	//}

	//// �ºθ� ������.
	//printf("��ǻ�� : %s", rsp);
	//printf("�� : %s", str_input_rsp);
	//if (random == input_rsp)
	//{
	//	printf("ũŪ ��屺");
	//}
	//else if (random == 0 && input_rsp == 1)
	//{
	//	printf("ũŪ ������ �̰屺");
	//	user_win += 1;
	//}
	//else if (random == 0 && input_rsp == 2)
	//{
	//	printf("ũŪ ������ ����");
	//	com_win += 1;
	//}
	//else if (random == 1 && input_rsp == 0)
	//{
	//	printf("ũŪ ������ ����");
	//	com_win += 1;
	//}
	//else if (random == 1 && input_rsp == 2)
	//{
	//	printf("ũŪ ������ �̰屺");
	//	user_win += 1;
	//}
	//else if (random == 2 && input_rsp == 0)
	//{
	//	printf("ũŪ ������ �̰屺");
	//	user_win += 1;
	//}
	//else if (random == 2 && input_rsp == 1)
	//{
	//	printf("ũŪ ������ ����");
	//	com_win += 1;
	//}

	////�� ��° ��
	//srand(time(NULL));
	//random = rand() % 3;

	//// ���� ���ڸ� ����, ����, ���� ��ȯ
	//switch (random)
	//{
	//case 0:
	//	strcpy_s(rsp, "����");
	//	break;
	//case 1:
	//	strcpy_s(rsp, "����");
	//	break;
	//case 2:
	//	strcpy_s(rsp, "��");
	//	break;
	//default:
	//	break;
	//}

	//// ����ڰ� ����, ����, �� �� �ϳ��� �Է¹���(0 : ����, 1 : ����, 2 : ��)
	//printf("����, ����, �� �� �ϳ��� �Է��ϼ��� : ");
	//scanf_s("%d", &input_rsp);

	//// ����ڰ� �Է��� ���ڸ� ����, ����, ���� ��ȯ
	//switch (input_rsp)
	//{
	//case 0:
	//	strcpy_s(str_input_rsp, "����");
	//	break;
	//case 1:
	//	strcpy_s(str_input_rsp, "����");
	//	break;
	//case 2:
	//	strcpy_s(str_input_rsp, "��");
	//	break;
	//default:
	//	printf("�� ���� ���� ��� ���� ����...");
	//	break;
	//}

	//// �ºθ� ������.
	//printf("��ǻ�� : %s", rsp);
	//printf("�� : %s", str_input_rsp);
	//if (random == input_rsp)
	//{
	//	printf("ũŪ ��屺");
	//}
	//else if (random == 0 && input_rsp == 1)
	//{
	//	printf("ũŪ ������ �̰屺");
	//	user_win += 1;
	//}
	//else if (random == 0 && input_rsp == 2)
	//{
	//	printf("ũŪ ������ ����");
	//	com_win += 1;
	//}
	//else if (random == 1 && input_rsp == 0)
	//{
	//	printf("ũŪ ������ ����");
	//	com_win += 1;
	//}
	//else if (random == 1 && input_rsp == 2)
	//{
	//	printf("ũŪ ������ �̰屺");
	//	user_win += 1;
	//}
	//else if (random == 2 && input_rsp == 0)
	//{
	//	printf("ũŪ ������ �̰屺");
	//	user_win += 1;
	//}
	//else if (random == 2 && input_rsp == 1)
	//{
	//	printf("ũŪ ������ ����");
	//	com_win += 1;
	//}

	//// �� ��° ��
	//srand(time(NULL));
	//random = rand() % 3;

	//// ���� ���ڸ� ����, ����, ���� ��ȯ
	//switch (random)
	//{
	//case 0:
	//	strcpy_s(rsp, "����");
	//	break;
	//case 1:
	//	strcpy_s(rsp, "����");
	//	break;
	//case 2:
	//	strcpy_s(rsp, "��");
	//	break;
	//default:
	//	break;
	//}

	//// ����ڰ� ����, ����, �� �� �ϳ��� �Է¹���(0 : ����, 1 : ����, 2 : ��)
	//printf("����, ����, �� �� �ϳ��� �Է��ϼ��� : ");
	//scanf_s("%d", &input_rsp);

	//// ����ڰ� �Է��� ���ڸ� ����, ����, ���� ��ȯ
	//switch (input_rsp)
	//{
	//case 0:
	//	strcpy_s(str_input_rsp, "����");
	//	break;
	//case 1:
	//	strcpy_s(str_input_rsp, "����");
	//	break;
	//case 2:
	//	strcpy_s(str_input_rsp, "��");
	//	break;
	//default:
	//	printf("�� ���� ���� ��� ���� ����...");
	//	return 0;
	//	break;
	//}

	//// �ºθ� ������.
	//printf("��ǻ�� : %s", rsp);
	//printf("�� : %s", str_input_rsp);
	//if (random == input_rsp)
	//{
	//	printf("ũŪ ��屺");
	//}
	//else if (random == 0 && input_rsp == 1)
	//{
	//	printf("ũŪ ������ �̰屺");
	//	user_win += 1;
	//}
	//else if (random == 0 && input_rsp == 2)
	//{
	//	printf("ũŪ ������ ����");
	//	com_win += 1;
	//}
	//else if (random == 1 && input_rsp == 0)
	//{
	//	printf("ũŪ ������ ����");
	//	com_win += 1;
	//}
	//else if (random == 1 && input_rsp == 2)
	//{
	//	printf("ũŪ ������ �̰屺");
	//	user_win += 1;
	//}
	//else if (random == 2 && input_rsp == 0)
	//{
	//	printf("ũŪ ������ �̰屺");
	//	user_win += 1;
	//}
	//else if (random == 2 && input_rsp == 1)
	//{
	//	printf("ũŪ ������ ����");
	//	com_win += 1;
	//}

	// ���� ���� ����
	if (com_win > user_win)
	{
		printf("\"ũ�� �������� �� �̱�ٴ�\"");
	}
	else if (com_win < user_win)
	{
		printf("\"ũŪ �������� �� �̱��� ����\"");
	}
	else
	{
		printf("\"ũŪ ��������� ���� ����ϴٴ�\"");
	}

}