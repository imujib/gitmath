#include <stdio.h>

#include "add.h"

int main(int argc, char **argv)
{
	int a=15, b=3;
	double p=20.75, q=5.25;
	
	puts("*** mathlib demo ***");
	printf("add_i(%d,%d)=%d\n",a,b,add_i(a,b));
	printf("add_f(%.3lf,%.3lf)=%.3lf\n",p,q,add_f(p,q));

	return 0;
}

