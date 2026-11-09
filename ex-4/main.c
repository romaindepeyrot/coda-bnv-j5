#include <stdio.h>
#include "functions.h"

int main(void)
{
    print_str("Hello World");
    printf("%d\n", add(3, 4));
    printf("%.2f\n", compute_average(12.5, 8, 15));
    return 0;
}
