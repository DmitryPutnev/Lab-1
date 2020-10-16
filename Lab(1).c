#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0, k = 1, N;
	printf("Input N ");
	while (scanf("%d", &N) != 1)
	{
		printf("Incorrect symbol. Please enter integer nuber \n");
		while (getchar() != '\n');
	}
	if (N <= 0)
	{
		printf("Result (- infinity)");
	}
	else {


		while (N > k)
		{
			k = k * 2;
			i++;
		}
		printf("%d <= %d <= %d\n", k / 2, N, k);
		if (k - N < N - k / 2)
		{
			printf("Result (%d)", i);
		}
		else
		{
			printf("Result (%d)", i - 1);
		}
	}
	return 0;
}