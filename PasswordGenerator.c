#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	int len;
	int dec;
	loop:

	// Taking the length of the password
	printf("Enter the length of password : ");	
	scanf("%d",&len);
	
	// Generating the password
	int prime[len];
	srand(time(NULL));
	for(int i = 0; i < len - 1; i++)
	{
		prime[i] = rand() % (126-33+1) + 33;
	}
	
	prime[len - 1] = rand()%(57-48+1) + 48;
	
	printf("\n");

	// Printing the password
	printf("Password = ");
	for (int j = 0; j < len; j++)
	{
		printf("%c",prime[j]);
	}
	
	// Asking to exit and regenerate the password
	printf("\n\nEnter 0 to exit...");
	printf("\nEnter 1 to regenerate password...");
	printf("\n>>> ");
	scanf("%d",&dec);
	
	switch(dec)
	{
		case 0:
		break;
		
		case 1:
		goto loop;
	}
}
