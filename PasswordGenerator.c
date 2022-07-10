#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int len;
	int dec;
	loop:

	// Taking the length of the password
	printf("Enter the length of password : ");
	scanf("%d",&len);

	// Generating the password
	char prime[len];
	srand(time(NULL));
	for(int i = 0; i < len - 1; i++)
	{
		prime[i] = rand() % (126-33+1) + 33;
	}

	prime[len - 1] = rand()%(57-48+1) + 48;
	prime[len] = '\0';

	printf("\n");

	// Printing the password
	printf("Password = %s",prime);

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

    return 0;
}
