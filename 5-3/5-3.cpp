#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, i = 0, j = 0, b, k = 1, c, m = 1;
	printf("enter number :");
	scanf("%d", &a);
	//leftspacebarside 
	b = a;
	c = a;
	if (a > 0) {
		for (i = 0; i < a; i++)
		{	//left spacebar side
			for (j = 0; j < b - 1; j++)
			{
				printf(" ");
			}
			b = b - 1;
			//middle number side 
			for (j = 1; j <= k; j++)
			{
				if (m % 2 == 1) {
					printf("0");
				}
				else printf("1");
				m = m + 1;
			}
			k = k + 2;
			//right spacebar side
			for (j = 0; j < c - 1; j++)
			{
				printf(" ");
			}
			c = c - 1;
			printf("\n");
		}
	}
	else printf("error");
	return 0;
}