#include <stdio.h>
int a =10;
void fun()
{
	int x =20;
	printf(" In Fun \n");
}
void main()
{
	int x =30;
	printf(" Strat Main \n");
	fun();
	printf("End main\n");
}

