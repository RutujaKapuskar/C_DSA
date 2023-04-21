#include<stdio.h>
void main(){
	float pmoney;
	printf("Enter Money\n");
	scanf("%f",&pmoney);

	if(pmoney>=2500)
	{
		printf("Happypola \n");
	}
	else if(pmoney>=2000){
		printf("CO2\n");
	}
	else if(pmoney>=1000){
		printf("Sarovar\n");
	}
	else{
		printf("Plan Cancle\n");
	}
}


