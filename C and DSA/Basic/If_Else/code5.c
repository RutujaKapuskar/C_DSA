#include<stdio.h>
void main(){
	int  y;
	printf("Enter number in between 1 to 5 \n");
	scanf("%i",&y);

	if(y==1)
	{
		printf("one \n");
	}
	else if(y==2){
		printf("two\n");
	}
	else if(y==3){
		printf("three\n");
	}
	else if(y==4){
		printf("four\n");
	}
	else if(y==5){
		printf("Five\n");
	}
	else{
		printf("Enter number in between 1 to 5");
	}

}


