#include <stdio.h>
main()
{
	int fa,ce;
	int low, upp, stp;
low = 0;
upp = 300;
stp = 20;

fa = low;
while(fa <= upp)
{
	ce = 5 * (fa - 32)/9;
printf("%d\t%d\n",fa, ce);
fa = fa + stp;
}
}


