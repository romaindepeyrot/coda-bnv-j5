#include <stdio.h>

int add(int nb1, int nb2)
{
	return nb1 + nb2;
}

int main(void)
{
	int resultat = add(3, 4);
	printf("%d\n", resultat);
	return 0;
}
