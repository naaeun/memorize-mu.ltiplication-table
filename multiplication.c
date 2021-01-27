#include <stdio.h>
int main(void)
{
	int number;
	printf("\n몇 단을 보고 싶니?  ");
	scanf_s("%d", &number);
	printf("\n\n\n%d단\n\n", number);
	for (int i = number; i <= number; i++)
	{
		for (int k = 1; k <= i; k++)
		{
			printf("%d X %d = %d\n", i, k, i * k);
		}
	}

	return 0;
}