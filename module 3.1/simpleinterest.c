#include<stdio.h>
main()
{
	double p,r,t,si;
	 printf("\nenter principle");
	 scanf("\n%lf",&p);
	 printf("\nenter rate");
	 scanf("\n%lf",&r);
	 printf("\nenter time");
	 scanf("%lf",&t);
	 
	 si=(p*r*t)/100;
	 printf("\nthe rate of interest is: %lf",si);
}
