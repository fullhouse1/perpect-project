#define _CRT_SECURE_NO_WARNINGS

#include	<stdio.h>

int main(void)
{
	int x;
	x = 1;

	while (x)
	{
		printf("\n������ �ϳ� �Է��ϼ���. >>");
		scanf("%d", &x);

		if (x == 0)
		{
			break;
		}

		printf("\n\n������: ");
		for (int i = 31; i>= 0; i--)
			printf("%c", ((x >> i) & 1) ? '1' : '0');
		
		printf("\n\n������: %8o		%8o", x, x);
		printf("\n\n16����:	%8X		%8X", x, x);
	}
	printf("\n\n�����մϴ�.\n");

	return 0;
}
