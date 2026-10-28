/**
 * @file program1.20.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Demonstration of structure arrays and the arrays passed as argument to functions using
 * pointer and array notation.
 *
 * @version 0.1
 * @date 21-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

/**
 * @brief A simple structure definition and structure type array declared globally
 * with array size of 10 elements.
 */
struct employee
{
	int e_no = -1; // Default value for employee number is -1 so that to negate them from display() function
	float e_salary;
	char e_name[100];
} e[10]; // Structure type array variable with size 10

/**
 * @brief The below function displays only the user input entries in the structure type array and
 * discards the entries where no input has been taken.
 *
 ****************************************************************************
 * @param n[] = structure type array
 */
void display(employee n[]) // Structure type array as argument using array notation
{
	for (int i = 0; i < 10; ++i)
	{
		/**
		 * @brief The if statement below discards the default structure type array elements where
		 * no user input has been given by checking the array element data member, whether their default
		 * employee number is -1 or not.
		 * If -1, then skips the element display operation and continues with the next element of the
		 * array. Else, the display operation is performed.
		 */
		if (n[i].e_no < 0)
			continue;

		cout << "\nEmployee number = " << n[i].e_no + 1
			 << "\nEmployee name = " << n[i].e_name
			 << "\nEmployee monthly salary = " << n[i].e_salary << endl
			 << endl;
	}
}

/**
 * @brief The below function takes the structure type variable's member values as input
 * and also checks whether there is any employee with the same employee number to avoid data loss.
 *
 ****************************************************************************
 * @param n = pointer to the first element of the structure type array
 */
void modify(employee *n) // Structure type array as argument using pointer notation
{
	int number;

label1:
	cout << "Enter the employee number (must be between 1 and 10): ";
	cin >> number;
	cin.ignore(); // To ignore the newline character in the previous input

	/**
	 * @brief Only take input if the employee number is between 1 and 10. Otherwise, jump to the
	 * label 'label1' and ask the user again to give the employee number as input.
	 */
	if (number >= 1 && number <= 10)
	{
		/**
		 * @brief The for loop below checks whether any employee with the given employee number
		 * exists in the structure type array already. If so, then it displays the error message
		 * and jumps to the label 'label1' above this for loop. Otherwise, the loop terminates
		 * after 10 iterations.
		 */
		for (int i = 0; i < 10; ++i)
			if ((number - 1) == n[i].e_no)
			{

				cout << "\nAn employee with the given number already exists!!!\nTry a different one...\n\n";

				goto label1; // Jump statement is used instead of a loop
			}

		cout << "\nThere's no employee with that number!!!\nCreating a new one...\n\n";
	}
	else
	{
		cout << "\nEmployee number is out of limit!!!\nTry again...\n";

		goto label1; // Jump statement is used instead of a loop
	}

	n[number - 1].e_no = number - 1;

	cout << "Enter the name of the employee (" << number << "): ";
	cin.getline(n[number - 1].e_name, sizeof(n[number - 1].e_name));

	cout << "Enter the monthly salary of the employee: ";
	cin >> n[number - 1].e_salary;
	cin.ignore(); // To ignore the newline character in the previous input

	cout << endl;
}

int main()
{
	char choice;

	/**
	 * @brief The do-while loop below will iterate over until the user input is 'y' or 'Y'.
	 * (1) If the user input is 'y' or 'Y', call modify() function to entry new employee;
	 * (2) If the user input is 'n' or 'N', call display() function to print the recorded employee
	 * details and break the loop; and
	 * (3) If the user input is newline i.e. default, then close the loop iteration.
	 */
	do
	{
		cout << "EMPLOYEE ENTRY:\nDo you want to entry a new employee?\n([Y/y]es | [N/n]o | Default = 'n'): ";
		cin.get(choice);

		if (choice == 'y' || choice == 'Y') // If input is 'y' or 'Y'
			modify(e);
		else if (choice == 'n' || choice == 'N') // If input is 'n' or 'N'
		{
			display(e);

			break;
		}
		else if (choice == '\n') // Default choice means 'n'
			cout << "Exiting...\n";
		else // Other than the defined characters
			cout << "\nWrong input!!!\nTry again...\n\n";
	} while (choice != '\n');
}
