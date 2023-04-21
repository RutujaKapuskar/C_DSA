#include<stdio.h>
void main(){
	int  y;
	printf("Enter number in between 1 to 5 \n");
	scanf("%i",&y);
	
	switch(y){
		case 1:
		printf("one \n");
		break;
		case 2:
		printf("two\n");
		break;
		case 3:
		printf("three\n");
		break;
		case 4:
		printf("four\n");
		break;
		case 5:
		printf("Five\n");
		break;
		Default:
		printf("Enter number in between 1 to 5");
	}

}


