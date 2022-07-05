#include <stdio.h>
/**
 * main - entry point
 * return - always 0
 */
int main(void)

{
	int n;
	int m;
	int l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(m);
					putchar(n);
					putchar(l);
					if (n != 55; || m != 56)
					{
						putchar(',')
						putchar(' ')
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
