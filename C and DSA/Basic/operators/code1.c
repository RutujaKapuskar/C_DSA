#include<stdio.h>
int x =10;
void fun()
{
	int y =20;
	int ans;


	ans=++x + ++y ;// 11+ 21 =32 , x =11 y =21
	printf("%d \n " ,ans );//30




}
void main()
{
	printf(" In Main \n");// In main

	fun(); // 32


	printf("%d \n",x); // 11 
	printf("End main \n");//End main

}
