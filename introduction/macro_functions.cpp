/**
 * @file problem1.31.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Illustration of the use macro functions and their declarations.
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
 * @brief Macros are defined here. Diff() is a macro function that takes two integers as its arguments
 * and returns according to the following logic:
 * (1) If N1 > N2, then return N1 - N2; else
 * (2) If N1 < N2, then return N2 - N1.
 */
#define Diff(N1, N2) ((N1 > N2) ? N1 - N2 : N2 - N1) // returns according to the ternary conditional operator

int main()
{
	int NUM[] = {10, 23, 14, 54, 32};

	for (int i = 4; i >= 0; --i)
		cout << Diff(NUM[i], NUM[i - 1]) << " # ";
}
