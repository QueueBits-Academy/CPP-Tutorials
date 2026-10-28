/**
 * @file ascii_to_char.cpp
 * @author Raan_at_Git (Windows)
 * (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Demonstration of ASCII to character conversion and console I/O char
 * functions in C++.
 *
 * @version 0.1
 * @date 21-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

int main()
{
	char ch;

	/**
	 * @brief The while loop below will iterate infinitely until the use explicitly ends the program
	 * by pressing Ctrl-C or any system dependent shortcut key.
	 */
	while (true)
	{
		cout << "Enter a character (Press Ctrl + C to exit): ";
		ch = getchar(); // Console I/O char function
		cin.ignore();	// Ignore the newline character in the previous input

		/**
		 * @brief The if statement below will check whether the inserted character is upper or lower case.
		 * (1) If upper case (65 <= character <= 90), then convert it to lower case (ch + 32);
		 * (2) If lower case (97 <= character <= 122), then convert it to upper case (ch - 32); otherwise
		 * (3) Display the error message and continue with the next iteration.
		 */
		if (ch == '\n')
			continue;					// Continue with the next iteration without checking the test expression
		else if (ch >= 65 && ch <= 90)	// If uppercase,
			ch = ch + 32;				// Converted to lowercase
		else if (ch >= 97 && ch <= 122) // If lowercase,
			ch = ch - 32;				// Converted to uppercase
		else
		{
			cout << "\nEntered character is not an alphabet!!!\nTry again...\n\n";

			continue;
		}

		cout << "The character after change of case is ";
		putchar(ch); // Console I/O char function
		cout << ".\n\n";
	}
}
