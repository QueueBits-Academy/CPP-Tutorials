/**
 * @file stream_io_get_put.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Demonstration of stream I/O character functions to count the number of characters
 * entered by the user.
 *
 * @version 0.1
 * @date 22-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

int main()
{
	int count = -1; // Since do-while loop iterates at least once
	char ch;

	cout << "Enter characters: ";

	/**
	 * @brief The do-while loop iterates over until the user inserts a newline character.
	 * It also counts the number of characters inserted and displays them one by one in each
	 * iteration.
	 */
	do
	{
		++count;

		cin.get(ch);

		cout.put(ch); // Stream I/O character function
	} while (ch != '\n');

	cout << "\nThe number of characters entered = " << count << endl;
}
