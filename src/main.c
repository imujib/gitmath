#include <stdio.h>

#include "add.h"
#include "sub.h"
#include "mul.h"

int main(int argc, char **argv)
{
	int a=15, b=3;
	double p=20.75, q=5.25;

	puts("*** mathlib demo ***");

	printf("add_i(%d,%d)=%d\n",a,b,add_i(a,b));
	printf("sub_i(%d,%d)=%d\n",a,b,sub_i(a,b));
	printf("mul_i(%d,%d)=%d\n",a,b,mul_i(a,b));

	printf("add_f(%.3lf,%.3lf)=%.3lf\n",p,q,add_f(p,q));
	printf("sub_f(%.3lf,%.3lf)=%.3lf\n",p,q,sub_f(p,q));
	printf("mul_f(%.3lf,%.3lf)=%.3lf\n",p,q,mul_f(p,q));

	return 0;
}

