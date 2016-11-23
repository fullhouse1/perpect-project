#define _CRT_SECURE_NO_WARNINGS

#include	<stdio.h>

int main(void)
{
	int x;
	x = 1;

	while (x)
	{
		printf("\n정수를 하나 입력하세요. >>");
		scanf("%d", &x);

		if (x == 0)
		{
			break;
		}

		printf("\n\n이진수: ");
		for (int i = 31; i>= 0; i--)
			printf("%c", ((x >> i) & 1) ? '1' : '0');
		
		printf("\n\n팔진수: %8o		%8o", x, x);
		printf("\n\n16진수:	%8X		%8X", x, x);
	}
	printf("\n\n종료합니다.\n");

	return 0;
}
