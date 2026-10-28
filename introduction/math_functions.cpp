/**
 * @file program1.4.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Program to find the numbers when their sum and product is known.
 *
 * @version 0.1
 * @date 23-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <math.h> // To use pow() and sqrt() functions

using namespace std;

int main()
{
	int sum, product;

	cout << "Enter the sum of the two numbers: ";
	cin >> sum;
	cout << "Enter the product of the two numbers: ";
	cin >> product;

	cout << endl;

	if (sum > 0)
		cout << "Quadratic equation formed is x*x + (" << -sum << ")x + (" << product << ')';
	else
		cout << "Quadratic equation formed is x*x + (" << -sum << ")x + (" << product << ')';

	cout << "\n\nCoefficients are a = " << 1 << ", b = " << -sum << ", c = " << product << endl;

	/**
	 * @brief The following variables are used as follows:
	 * (1) discriminant = b^2 - 4 * a * c;
	 * (2) square_root = sqrt(discriminant)
	 * (3) r1 and r2 = root 1 and root 2 of the quadratic equation
	 */
	double discriminant = pow(-sum, 2) - 4 * product, // discriminant
		square_root = sqrt(discriminant),			  // Square root of discriminant
		r1 = (sum - square_root) / (2.0),			  // First root
		r2 = (sum + square_root) / (2.0);			  // Second root

	cout << "\nThe numbers whose sum is " << sum << " and product is " << product << " are\n"
		 << "\tnumber (1) = " << r1 << ", number (2) = " << r2 << endl;
}