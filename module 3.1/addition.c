#include<stdio.h>
main()
{
	int a,b,add,sub,mul,div,mod;
	printf("enter value of a\n");
	scanf("%d",&a);
	printf("enter value of b\n");
	scanf("%d",&b);
	add=a+b;
	printf(" add of a+b is %d\n",add);
	sub=a-b;
	printf("sub of a-b is %d\n",sub);
	mul=a*b;
	printf(" mul of a*b is %d\n",mul);
	div=a/b;
	printf(" div of a/b is %d\n",div);
	mod=a%b;
	printf(" modulo of a/b is %d\n",mod);
}
