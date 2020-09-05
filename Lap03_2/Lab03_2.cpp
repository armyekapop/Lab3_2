#include<stdio.h>
int main()
{
	for (int n = 1; n <= 10000; n++)
	{
		int sum = 0;
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				sum += i;
			}
		}
		if (n == sum)
		{
			printf("%d ", n);
		}
	}
	return 0;
}
