#include <stdio.h>

#include "add.h"
#include "sub.h"

int main(int argc, char **argv)
{
	int a=15, b=3;

	puts("*** mathlib demo ***");
	printf("add_i(%d,%d)=%d\n",a,b,add_i(a,b));
	printf("sub_i(%d,%d)=%d\n",a,b,sub_i(a,b));

	return 0;
}

