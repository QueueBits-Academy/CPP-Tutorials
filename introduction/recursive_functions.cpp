/**
 * @file recursive_functions.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Demonstration of the use of recursive functions to compute the factorial of a number in C++.
 *
 * @version 0.1
 * @date 27-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

/**
 * @brief The recursive function below calls itself over and over again until the return statement
 * ends calling it and returns the product of the number with its preceding numbers.
 *
 ****************************************************************************
 * @param n = non-negative integer (unsigned)
 * @return the product of the number with its preceding number, i.e. if n = 3; then 3 * 2.
 */
int factorial(int n)
{
    if (n > 1) // * Only compute the factorial if n > 1
        return n * factorial(n - 1);
    else if (n == 1) // If the number is 1
        return 1;    // * This ends the recursion by being the last return value
    else // If the number is negative
        cout << "Integer must be > 0!!!\n";
}

int main()
{
    unsigned int factor = 0;

    cout << "Enter the positive integer (> 0): ";
    cin >> factor;

    cout << "Factorial of the number is " << factorial(factor) << ".\n";
}