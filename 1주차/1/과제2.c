#include <stdio.h>

int main()
{
	float rate;
	float usd;
	int krw;

	printf("�޷��� ���� ��ȭ ȯ���� �Է��ϼ��� : ");
	scanf_s("%f", &rate);
	printf("��ȭ �ݾ��� �Է��ϼ��� : ");
	scanf_s("%d", &krw);
	usd = (float)krw / rate;
	printf("��ȭ %d���� %f�޷��Դϴ�.", krw, usd);
}