/**
 * @file 2D_array_ops.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Demonstration of the use of 2-D arrays and how to access elements in the array.
 *
 * @version 0.1
 * @date 23-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

int main()
{
	int salesmen = 0, months = 0;
	float sum = 0.0;

	cout << "How many salesman do you have? ";
	cin >> salesmen;

	cout << "For how many months do you want to record the sales? ";
	cin >> months;

	float sales[salesmen][months]; // Declare the 2-D array with salesman as the rows and months as the columns

	/**
	 * @brief The for loop below iterates the number of times same as that of the number of
	 * salesman that the user has entered.
	 */
	for (int i = 0; i < salesmen; ++i) // Iterates through the first column elements of the 2-D array
	{
		cout << "\nEnter the sales made by " << i + 1 << "st salesman,\n";

		/**
		 * @brief The for loop below inserts the sales of the number of months for each of the salesman.
		 */
		for (int j = 0; j < months; ++j) // Iterates through the column elements of each row of the 2-D array
		{
			cout << "\tin month (" << j + 1 << "): ";
			cin >> sales[i][j];
		}
	}

	cout << endl;

	for (int k = 0; k < salesmen; ++k) // Iterates through the first row elements of the 2-D array
	{
		/**
		 * @brief The for loop below will sum up the sales of the number of months for each salesman.
		 */
		for (int l = 0; l < months; ++l) // Iterates through the column elements of each row of the 2-D array
			sum += sales[k][l];

		cout << "Total sales made by " << k + 1 << "st salesman in 3 months = " << sum << endl;

		sum = 0; // To reset the sum for each salesman
	}
}