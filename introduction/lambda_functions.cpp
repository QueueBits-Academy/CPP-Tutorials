/**
 * @file lambda_functions.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Demonstration of the use of lambda expression with 'auto' datatype to define an anonymous
 * function object, also called a functor, inline or passed as an argument to another function.
 *
 * @version 0.1
 * @date 28-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

/**
 * @brief The function below accepts the return value of the lambda expression and prints it.
 *
 ****************************************************************************
 * @param n = integer variable to accept the lambda expression return value.
 */
void print_largest(int n)
{
    cout << "The largest number is " << n << ".\n";
}

/**
 * @brief The function below accepts the return value of the lambda expression and prints it.
 *
 ****************************************************************************
 * @param n = integer variable to accept the lambda expression return value.
 */
void print_smallest(int n)
{
    cout << "The smallest number is " << n << ".\n";
}

int main()
{
    int num_1, num_2;

    cout << "Enter two integers: ";
    cin >> num_1 >> num_2;

    /**
     * @brief The two lambda functions below will be used to find the largest and the smallest numbers.
     * (1) large(): It uses the capture list to use the two integers inside; whereas
     * (2) small(): It uses the parameter list to use the two integers inside. The function has to provide
     * the arguments to be passed to the parameters.
     * The syntax of lambda expressions is:
     * * [capture_list](parameter_list) -> return_type { function_body }
     * * The 'auto' is a keyword that automatically deducts the datatype of variable from the initializer.
     */
    auto large = [num_1, num_2]() -> int
    { return (num_1 > num_2) ? num_1 : num_2; }; // Use of ternary operator (:?) to find the largest

    auto small = [](int &x, int &y) -> int
    { return (x < y) ? x : y; }; // Use of ternary operator (:?) to find the smallest

    print_largest(large());
    print_smallest(small(num_1, num_2));
}