#define _CRT_SECURE_NO_WARNINGS

#include	<stdio.h>

int main(void)
{
	int x, y, z;
	int dump;

	printf("교환할 두 정수를 입력하세요. >>");
	scanf("%d %d", &x, &y);
	printf("입력한 두 수: x = %d and y = %d", x, y);

	printf("\n\n임시 저장 장소 이용 방법[1]");
	printf("\n덧셈과 뺄셈으로 교환 방법[2]");
	printf("\n곱셈과 나눗셈으로 교환 방법[3]");
	printf("\nXOR 연산자 ^ 이용 방법[4]");

	printf("\n\n위 교환 방법 중 한 번호를 선택하세요. >>");
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

	printf("교환한 두 수: x = %d and y = %d\n", x, y);
}