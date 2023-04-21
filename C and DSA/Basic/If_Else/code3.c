#include<stdio.h>

void main(){
	char ch;
	printf("Are you alive\n");
	printf("Enter your Response- y/n \n");
	scanf("%c",&ch);
	
	if(ch=='y'||  ch=='Y')
	{
		printf("Niice\n");
	}
	else{
		printf("User died\n");
	}
}

