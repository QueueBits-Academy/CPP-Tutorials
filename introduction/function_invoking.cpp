/**
 * @file function_invoking.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Illustration of the following methods of function invocation in C++:
 * (1) call-by-value; and
 * (2) call-by-reference.
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
 * @brief The function below implements the call-by-value method of function invocation to change the
 * first character of a string. Although it does not make changes to the original string.
 *
 ****************************************************************************
 * @param n = character variable
 */
void print_value(char n) // ! Caution: it copies the original argument value into the parameter
{
    cin.ignore(); // To ignore the newline character in the previous input

    cout << "\nINSIDE CALL-BY-VALUE IMPLEMENTATION:\n"
         << "Replace the first character with another one: ";
    cin.get(n);
}

/**
 * @brief The function below implements the call-by-reference method of function invocation to change the
 * first character of a string. It changes the original string also.
 *
 ****************************************************************************
 * @param n = character reference variable
 */
void print_reference(char &n) // ! Caution: it changes the original argument value
{
    cin.ignore(); // To ignore the newline character in the previous input

    cout << "\nINSIDE CALL-BY-REFERENCE IMPLEMENTATION:\n"
         << "Replace the first character with another one: ";
    cin.get(n);
}

int main()
{
    char name[50];
    int choice = 0;

    cout << "Enter a string (< 50 characters): ";
    cin.getline(name, 50);

    do
    {
        cout << "\nFUNCTION INVOCATION MENU:\n\t(1) Call-by-Value;\n\t(2) Call-by-Reference;\n\t(3) Exit"
             << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "\nBefore modification: " << name << endl;

            print_value(name[0]); // * Does not change the argument value in caller function

            cout << "\nAfter modification: " << name << endl;
        }
        break;
        case 2:
        {
            cout << "\nBefore modification: " << name << endl;

            print_reference(name[0]); // * Changes the argument value in caller function

            cout << "\nAfter modification: " << name << endl;
        }
        break;
        case 3:
        {
            cout << "Exiting...\n";
        }
        break;

        default:
            cout << "\nInvalid choice!!!\nTry again...\n\n";
            break;
        }
    } while (choice != 3);
}