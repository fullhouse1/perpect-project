#define _CRT_SECURE_NO_WARNINGS

#include	<stdio.h>

int main(void)
{
	int a, b;
	double	x;
	x = 1.0;

	printf("다음 단위에서 [변환할 단위] --> [변환결과 단위]로 연산합니다.\n\n");

	printf("	[1] 미터(m) [2] 인치(in) [3] 피트(ft) [4] 야드(yd) [0] 종료(stop)\n\n");

	printf("[이전단위] --> [변환단위], 두 개의 메뉴 번호를 입력하세요. >>");

	scanf("%d %d", &a, &b);
		
	while (a != 0 && b != 0, x != 0)
	{
			printf("\n\n[변환할 단위]의 길이를 입력하세요. >>");
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
						printf("\n\n[결과] %10.2lf(미터) -->%10.2lf(인치)", x, x*39.37);
						break;
					case 3:
						printf("\n\n[결과] %10.2lf(미터) -->%10.2lf(피트)", x, x*3.28);
						break;
					case 4:
						printf("\n\n[결과] %10.2lf(미터) -->%10.2lf(야드)", x, x*1.09);
						break;
					}
				}

				else if (a == 2)
				{
					switch (b)
					{
					case 1:
						printf("\n\n[결과] %10.2lf(인치) -->%10.2lf(미터)", x, x*0.025);
						break;
					case 3:
						printf("\n\n[결과] %10.2lf(인치) -->%10.2lf(피트)", x, x*0.083);
						break;
					case 4:
						printf("\n\n[결과] %10.2lf(인치) -->%10.2lf(야드)", x, x*0.027);
						break;
					}
				}

				else if (a == 3)
				{
					switch (b)
					{
					case 1:
						printf("\n\n[결과] %10.2lf(피트) -->%10.2lf(미터)", x, x*0.3);
						break;
					case 2:
						printf("\n\n[결과] %10.2lf(피트) -->%10.2lf(인치)", x, x * 12);
						break;
					case 4:
						printf("\n\n[결과] %10.2lf(피트) -->%10.2lf(야드)", x, x*0.33);
						break;
					}
				}

				else if (a == 4)
				{
					switch (b)
					{
					case 1:
						printf("\n\n[결과] %10.2lf(야드) -->%10.2lf(미터)", x, x*0.914);
						break;
					case 2:
						printf("\n\n[결과] %10.2lf(야드) -->%10.2lf(인치)", x, x * 36);
						break;
					case 3:
						printf("\n\n[결과] %10.2lf(야드) -->%10.2lf(피트)", x, x * 3);
						break;
					}
				}
			
		}printf("\n\n종료합니다.\n\n");
		return 0;
}