#include<stdio.h>
#include<math.h>
int main()
{
	int num1, num2, x = 2, y = 1;
	printf("Enter frist number : ");
	scanf("%d", &num1);
	printf("Enter second number : ");
	scanf("%d", &num2);
	num1 = abs(num1);
	num2 = abs(num2);
	while (x <= num1 && x <= num2)
	{
		if (num1 % x == 0)
		{
			if (num2 % x == 0)
			{
				y = y * x;
				num1 = num1 / x;
				num2 = num2 / x;
				x = 2;
			}
		}
		x++;
	}
	printf("Greattest common divisor = %d", y);
	return 0;
}