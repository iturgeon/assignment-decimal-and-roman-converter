/*
 * Area calculator
 */
#include <stdio.h>

/* Procedure declarations */
int printout();
int todecimal();
int user_number;

int main()
{
	/* Selected menu option */
	int	choice;

	/* Initialize the user's choice */
	choice = 0;

	/* Print the title */
	printf ("Roman Numeral Converter - Ian Turgeon.\n\n");

	/* Keep going until the user selects quit */
	while (choice != 3)
	{
		/* Print the menu options */
		printf("\t1) Decimal to Roman\n");
		printf("\t2) Roman to Decimal\n");
		printf("\t3) Quit\n");
		printf("\n\tEnter your choice: ");

		/* Get the user's choice */
		scanf("%i", &choice);

		/* Execute the correct function based on the user's choice */
		if (choice == 1)
		{ 
			printf("\n\n\tEnter a decimal number: ");
			scanf("%d", &user_number);
			printf("\n\n\tThe Roman Numeral for %d is ", user_number);
			printout();
			printf("\n\n");
		}

		else if (choice == 2)
		{
			printf("\n\n\tI dont know how to do this\n\tI cant get it to scanf strings or charicters\n\n");
			todecimal();
		}
	}

	printf("\nThank you for using my Roman Numeral Coverter!\n");


	return 0;
}

int printout(void)
{

	if (user_number <= 0)
	{
		return 1;
	}
	if ((user_number - 100) >= 0)
	{
		printf("C");
		user_number = user_number - 100;
		printout();
	}
	if ((user_number - 50) >= 0)
	{
		printf("L");
		user_number = user_number - 50;
		printout();
		}
	if ((user_number - 10) >= 0)
	{
		printf("X");
		user_number = user_number - 10;
		printout();
		}
	if (user_number == 9)
	{
		printf("IX");
		user_number = 0;
		printout();
		}
	if (user_number >= 5)
	{
		printf("V");
		user_number = user_number - 5;
		printout();
		}
	if (user_number == 4)
	{
		printf("IV");
		user_number = 0;
		printout();
	}
	if (user_number > 0)
	{
		printf("I");
		user_number = user_number - 1;
		printout();
	}

	return 1;
}

int todecimal(void)
{
return 1;

}