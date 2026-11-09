#include <stdio.h>

double compute_average(double nb1, double nb2, double nb3)
{
	return (nb1 + nb2 + nb3) / 3;
}

int main(void)
{
	double moyenne = compute_average(12.5, 8, 15);

	printf("%f\n", moyenne);
	return 0;
}
