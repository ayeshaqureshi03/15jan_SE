#include<stdio.h>
main()
{
	int a,l,b,t;
	printf("enter value of circle\n");
	scanf("%d",&a);
	printf("area of circle is %d\n",3.14*a);
	printf("\nenter value of lenght\n");
	scanf("%d",&l);

    printf("\nenter value of breadth\n");
	scanf("%d",&b);
	printf("area of rec is %d\n",l*b);
	float base,h,tri;
	printf("\nenter base of triangle\n");
	scanf("%f",&base);
	printf("\nenter height of triangle\n");
	scanf("%f",&h);
	tri=(base*h)/2;
	printf("\narea of triangle is %f\n",tri);
	
}
