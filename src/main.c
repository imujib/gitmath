#include <stdio.h>

#include "mul.h"

int main(int argc, char **argv)
{
	int a=15, b=3;
	double p=20.75, q=5.25;

	puts("*** mathlib demo ***");
	printf("mul_i(%d,%d)=%d\n",a,b,mul_i(a,b));
	printf("mul_f(%.3lf,%.3lf)=%.3lf\n",p,q,mul_f(p,q));

	return 0;
}

