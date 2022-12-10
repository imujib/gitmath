#include <stdio.h>

#include "mul.h"

int main(int argc, char **argv)
{
	int a=15, b=3;

	puts("*** mathlib demo ***");
	printf("mul_i(%d,%d)=%d\n",a,b,mul_i(a,b));

	return 0;
}

