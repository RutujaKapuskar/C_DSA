#include<stdio.h>

void main()
{
	printf("Start main .\n");
	char ch1= 'A';
	char ch2='48';// Warning: Multiple charcater -character constant
	
	if(ch1)
	{
		printf("In first If-Block\n");

	}
	printf("%c\n",ch2);// comma oprator ans will be 8

	if(ch2){
		printf("In second If- Block\n");

	
	}
	printf(" end main\n");
}
