#include<stdio.h>
void main(){

	 float income;
	 


	 printf("Enter your amount :  ");
	 scanf("%f", &income);

	 if(income>=1000 &&income<=500000)
	 {
		 printf("YOUR TAX IS ZERO PERSENT");

	}
	 if(income>500000 && income<=1000000)
	 {
		 printf("Tax is 10 persent");


	 }
	 if(income>1000000&& income<=1500000)
	 {
		 printf("Tax is 15 persent");

	 }
	 if(income>1500000&& income<=2000000)
	 {
		 printf("Tax is 20 persent");
	 }
	 if(income>2000000)
	{
		printf("Tax is 30 persent");
	}



}
