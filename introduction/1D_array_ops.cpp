/**
 * @file 1D_array_ops.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Demonstration of 1-D array and how to find the largest element in the array.
 *
 * @version 0.1
 * @date 23-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

/**
 * @brief The function below returns the largest element of the array.
 *
 ****************************************************************************
 * @param arr = The array argument in array notation.
 * @param max = Size of the array.
 * @return the largest element in the array.
 */
int largest(int arr[], int max)
{
	int largest = arr[0];

	/**
	 * @brief The for loop below iterates through all the elements of the array upto index 'max',
	 * and compares the largest element with the next element of the array. If the next element is
	 * greater than the largest element, then it replaces the largest element with the new one.
	 */
	for (int i = 1; i < max; ++i)
		if (arr[i] > largest)
			largest = arr[i];

	return largest;
}

int main()
{
	int max;

	cout << "Max. number of elements in the array: ";
	cin >> max;

	int arr[max]; // Declaration of 1-D array with 'max' number of elements

	cout << "\nEnter the elements of the array: ";

	/**
	 * @brief The for loop below traverses the array elements one by one and replaces
	 * them with the input value.
	 */
	for (int i = 0; i < max; ++i)
		cin >> arr[i];

	cout << "\nThe largest element in the array is " << largest(arr, max) << ".\n";
}
