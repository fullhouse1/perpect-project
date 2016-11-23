#include	<stdio.h>

int main(void)
{	
	int x, y = 2;
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 9; j++)
		{
			printf(" ");
		}

		for (x = 0; x <= i; y++)
		{
			for (j = 2; j < y ; j++)
			{
				if (y % j == 0)
					break;
			}
			if (j == y)
			{
				printf("%3d", y);
				x++;
			}
		}
		printf("\n");
	}
}