#define	_CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	printf("[1]비트 AND(&)	\n[2] 비트 OR(|)	\n[3] 비트 XOR(^)	\n[4] 비트 COMPLEMENT(~)	\n[0] 종료 (stop)\n\n위 연산 중 하나를 선택하세요. >> ");
	scanf("%d", &a);

	switch (a) 
	{

	case 0:
		printf("종료(stop)\n\n");
		break;

	case 1:

		printf("비트 연산할 두 정수 입력 >> ");
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
		printf("비트 연산할 두 정수 입력 >> \n");
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
		printf("비트 연산할 두 정수 입력 >> ");
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
		printf("비트 보수(~) 연산할 정수 입력 >> ");
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