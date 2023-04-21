#include <stdio.h>
void main()
{
	int x=5;
	int output;
	printf("%d \n",x);//5
	printf("%d \n",output);//garbage value
	output = x;
	printf("%d\n",x);//5
	printf("%d\n",output);//5
	output = x +10;//15
	printf("%d\n",x);//5
	printf("%d\n",output);//15
}

