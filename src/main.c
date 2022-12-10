#include <stdio.h>

#include "sub.h"

int main(int argc, char **argv)
{
	int a=15, b=3;
	double p=20.75, q=5.25;

	puts("*** mathlib demo ***");
	printf("sub_i(%d,%d)=%d\n",a,b,sub_i(a,b));
	printf("sub_f(%.3lf,%.3lf)=%.3lf\n",p,q,sub_f(p,q));

	return 0;
}

