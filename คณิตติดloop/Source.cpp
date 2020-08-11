#include<stdio.h>
int main()
{
	long max = -999999, min = 999999, before = -99999999, current, count = 0;
	double sum = 0;
	while (1)
	{
		scanf_s("%ld", &current);
		if (max < current)	max = current;
		if (min > current)	min = current;
		sum += current;
		count++;
		if (current < before)	break;
		else	before = current;
	}
	printf("%.lf %ld %ld %.2lf", sum, min, max, sum / count);
	return 0;
}