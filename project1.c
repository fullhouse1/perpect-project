#define _CRT_SECURE_NO_WARNINGS

#include	<stdio.h>

int main(void)
{
	int a, b;
	double	x;
	x = 1.0;

	printf("���� �������� [��ȯ�� ����] --> [��ȯ��� ����]�� �����մϴ�.\n\n");

	printf("	[1] ����(m) [2] ��ġ(in) [3] ��Ʈ(ft) [4] �ߵ�(yd) [0] ����(stop)\n\n");

	printf("[��������] --> [��ȯ����], �� ���� �޴� ��ȣ�� �Է��ϼ���. >>");

	scanf("%d %d", &a, &b);
		
	while (a != 0 && b != 0, x != 0)
	{
			printf("\n\n[��ȯ�� ����]�� ���̸� �Է��ϼ���. >>");
			scanf("%lf", &x);

			if (x == 0)
			{
				break;
			}
				if (a == 1)
				{
					switch (b)
					{
					case 2:
						printf("\n\n[���] %10.2lf(����) -->%10.2lf(��ġ)", x, x*39.37);
						break;
					case 3:
						printf("\n\n[���] %10.2lf(����) -->%10.2lf(��Ʈ)", x, x*3.28);
						break;
					case 4:
						printf("\n\n[���] %10.2lf(����) -->%10.2lf(�ߵ�)", x, x*1.09);
						break;
					}
				}

				else if (a == 2)
				{
					switch (b)
					{
					case 1:
						printf("\n\n[���] %10.2lf(��ġ) -->%10.2lf(����)", x, x*0.025);
						break;
					case 3:
						printf("\n\n[���] %10.2lf(��ġ) -->%10.2lf(��Ʈ)", x, x*0.083);
						break;
					case 4:
						printf("\n\n[���] %10.2lf(��ġ) -->%10.2lf(�ߵ�)", x, x*0.027);
						break;
					}
				}

				else if (a == 3)
				{
					switch (b)
					{
					case 1:
						printf("\n\n[���] %10.2lf(��Ʈ) -->%10.2lf(����)", x, x*0.3);
						break;
					case 2:
						printf("\n\n[���] %10.2lf(��Ʈ) -->%10.2lf(��ġ)", x, x * 12);
						break;
					case 4:
						printf("\n\n[���] %10.2lf(��Ʈ) -->%10.2lf(�ߵ�)", x, x*0.33);
						break;
					}
				}

				else if (a == 4)
				{
					switch (b)
					{
					case 1:
						printf("\n\n[���] %10.2lf(�ߵ�) -->%10.2lf(����)", x, x*0.914);
						break;
					case 2:
						printf("\n\n[���] %10.2lf(�ߵ�) -->%10.2lf(��ġ)", x, x * 36);
						break;
					case 3:
						printf("\n\n[���] %10.2lf(�ߵ�) -->%10.2lf(��Ʈ)", x, x * 3);
						break;
					}
				}
			
		}printf("\n\n�����մϴ�.\n\n");
		return 0;
}