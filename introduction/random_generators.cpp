/**
 * @file program2.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Program to generate different random numbers every time using srand() and rand()
 * library functions.
 *
 * @version 0.1
 * @date 26-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <time.h>	// To use class time_t

using namespace std;

void gen_random(void)
{
	unsigned int seed_value;
	time_t t; // 't' is time type variable now.

	/**
	 * @brief time() function will return system time which accepts time type variable as argument,
	 * and will be type casted to unsigned int so that no negative random number get generated.
	 */
	seed_value = (unsigned)time(&t);

	/**
	 * @brief The below function accepts the seed or initial value for random number generator rand()
	 * function as its argument.
	 */
	srand(seed_value); // Seed the random number generator

	for (int i = 0; i < 5; ++i)
		cout << "Random number (" << i + 1 << "): " << rand() << endl;
}

int main()
{
	int choice = 0;

	do
	{
		cout << "RANDOM GENERATOR MENU:\n\t(1) rand() using srand();\n\t(2) Exit."
			 << "\nEnter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			cout << endl;

			gen_random();

			cout << endl;
		}
		break;
		case 2:
		{
			cout << "Exiting...\n";
		}
		break;

		default:
			cout << "\nWrong choice!!!\nTry again...\n\n";
		}
	} while (choice != 2);
}
