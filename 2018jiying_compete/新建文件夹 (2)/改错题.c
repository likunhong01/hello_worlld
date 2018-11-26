#include <stdio.h>
#include <stdlib.h>

/************found************/
void fun(long  s, long* t)
{
	int   d;
	long t1 = 0;
	long t2 = 0;
	long  sl = 1, se = 1;
	/************found************/
	*t = 1;
	while (s > 0)
	{
		d = s % 10;
		/************found************/
		if (s % 2 == 1)
		{
			t1 = d * sl + t1;
			sl *= 10;
		}
		else
		{
			t2 = d*se + t2;
			se *= 10;
		}
		s /= 10;
	}
	*t = t1 + t2;
}
int main()
{
	long s, t;
	printf("\nPlease enter s:"); scanf("%ld", &s);
	/************found************/
	fun(s, &t);
	printf("The result is: %ld\n", t);
	system("pause");
	return 0;
}