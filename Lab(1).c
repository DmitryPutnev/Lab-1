#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0, k = 1, N, a;
	printf("Enter a number, the degree of which you need \n");
	while (scanf("%d", &a) != 1)
	{
		printf("Incorrect symbol. Please enter integer nuber \n");
		while (getchar() != '\n');
	}
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
			k = k * a;
			i++;
		}
		printf("%d <= %d <= %d\n", k / a, N, k);
		if (k - N < N - k / a)
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