#define	_CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	printf("[1]��Ʈ AND(&)	\n[2] ��Ʈ OR(|)	\n[3] ��Ʈ XOR(^)	\n[4] ��Ʈ COMPLEMENT(~)	\n[0] ���� (stop)\n\n�� ���� �� �ϳ��� �����ϼ���. >> ");
	scanf("%d", &a);

	switch (a) 
	{

	case 0:
		printf("����(stop)\n\n");
		break;

	case 1:

		printf("��Ʈ ������ �� ���� �Է� >> ");
		scanf("%d %d", &b, &c);

		for (int i = 31; i >= 0; i--)
		{
			printf("\n%d", ((b >> i) & 1) ? 1 : 0);
		}
		printf("%d\n\n", b);

		for (int i = 31; i >= 0; i--)
		{
			printf("%d", ((c >> i) & 1) ? 1 : 0);
		}
		printf("%d\n\n", c);

		for (int i = 31; i >= 0; i--)
		{
			printf("%d", (((b & c) >> i) & 1) ? 1 : 0);
		}
		printf("%d\n", (b & c));
		break;
	
	case 2:
		printf("��Ʈ ������ �� ���� �Է� >> \n");
		scanf("%d%d", &b, &c);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", ((b >> i) & 1) ? 1 : 0);
		}
		printf("%d\n\n", b);

		for (int i = 31; i >= 0; i--)
		{
			printf("%d", ((c >> i) & 1) ? 1 : 0);
		}
		printf("%d\n\n", c);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", (((b | c) >> i) & 1) ? 1 : 0);
		}
		printf("%d\n", (b | c));
		break;

	case 3:
		printf("��Ʈ ������ �� ���� �Է� >> ");
		scanf("%d%d", &b, &c);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", ((b >> i) & 1) ? 1 : 0);
		}
		printf("%d\n\n", b);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", ((c >> i) & 1) ? 1 : 0);
		}
		printf("%d\n\n", c);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", (((b ^ c) >> i) & 1) ? 1 : 0);
		}
		printf("%d\n", (b ^ c));
		break;

	case 4:
		printf("��Ʈ ����(~) ������ ���� �Է� >> ");
		scanf("%d", &b);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", ((b >> i) & 1) ? 1 : 0);
		}
		printf("\n\n");
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", ((~b >> i) & 1) ? 1 : 0);
		}
		printf("%d\n\n", ~b);
		break;
	}
	return 0;
}