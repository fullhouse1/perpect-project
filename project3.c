#define _CRT_SECURE_NO_WARNINGS

#include	<stdio.h>

int main(void)
{
	int x, y, z;
	int dump;

	printf("��ȯ�� �� ������ �Է��ϼ���. >>");
	scanf("%d %d", &x, &y);
	printf("�Է��� �� ��: x = %d and y = %d", x, y);

	printf("\n\n�ӽ� ���� ��� �̿� ���[1]");
	printf("\n������ �������� ��ȯ ���[2]");
	printf("\n������ ���������� ��ȯ ���[3]");
	printf("\nXOR ������ ^ �̿� ���[4]");

	printf("\n\n�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >>");
	scanf("%d", &z);

	if (z == 1)
	{
		dump = x;
		x = y;
		y = dump;
	}

	else if (z == 2)
	{
		x = x + y;
		y = x - y;
		x = x - y;
	}

	else if (z == 3)
	{
		x = x * y;
		y = x / y;
		x = x / y;
	}

	else if (z == 4)
	{
		x = x ^ y;
		y = x ^ y;
		x = x ^ y;
	}

	printf("��ȯ�� �� ��: x = %d and y = %d\n", x, y);
}