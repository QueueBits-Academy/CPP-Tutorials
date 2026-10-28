/**
 * @file formatting_output.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Demonstration of formatting the output of the program using the combination of library
 * functions available in iomanip.h header file and the setf() method of 'cout' class.
 *
 * @version 0.1
 * @date 26-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <iomanip> // To use setw(), setprecision(), resetiosflags() and setiosflags() functions

using namespace std;

/**
 * @brief The function below prints the design using the setw() function which sets the width of the
 * output stream. Also, it uses the following flags set using the setf() method of' cout' class to
 * manipulate the output stream:
 * (1) ios::left = to left justify the output; and
 * (2) ios::right = to right justify the output.
 * * ios flags may also be set with the setiosflags() function defined in the iomanip.h header file.
 */
void print_setw()
{
    cout << "Original style:\n"
         << setw(8) << '*' << endl
         << setw(8) << "**" << endl
         << setw(8) << "***" << endl
         << setw(8) << "****" << endl;

    cout.setf(ios ::left); // Justifies the output to left
    cout << "\nLeft justified:\n"
         << setw(8) << '*' << endl
         << setw(8) << "**" << endl
         << setw(8) << "***" << endl
         << setw(8) << "****" << endl;

    cout.setf(ios ::right); // Justifies the output to right
    cout << "\nRight justified\n"
         << setw(8) << '*' << endl
         << setw(8) << "**" << endl
         << setw(8) << "***" << endl
         << setw(8) << "****" << endl
         << endl;

    cout << resetiosflags(ios ::left) << resetiosflags(ios ::right);
}

/**
 * @brief The function below uses the setprecision() function to apply different formats to the
 * floating point numbers while printing them. It also uses the following flags set using the
 * setf() method of' cout' class to manipulate the output stream:
 * (1) ios::uppercase = to print the scientific notation in uppercase;
 * (2) ios::showpos = to print the plus '+' sign in front of positive numbers;
 * (3) ios::fixed = to print the required number of decimal digits without losing precision;
 * (4) ios::scientific = to print the decimal numbers in scientific notation; and
 * (5) ios::showpoint = to print the decimal point and trailing zeroes.
 * * ios flags may also be set with the setiosflags() function defined in the iomanip.h header file.
 */
void print_setprecision()
{
    double value = 12345.67891;
    int choice = 0;

    cout << "\nOriginal value: " << value << endl
         << "Set precision is 10: " << setprecision(10) << value << endl
         << "Set precision is 9: " << setprecision(9) << value << endl
         << "Set precision is 8: " << setprecision(8) << value << endl;

    while (choice != 6)
    {
        cout << "\nIOS FLAG SELECTION MENU:\n\t(1) fixed;\n\t(2) uppercase;\n\t(3) showpos;\n\t(4) scientific;\n\t(5) showpoint;\n\t(6) Finish."
             << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "\nios ::fixed has been set!!!\n";

            cout.setf(ios ::fixed); // Prints the required number of decimal digits without losing precision
        }
        break;
        case 2:
        {
            cout << "\nios ::uppercase has been set!!!\n";

            // ! To be used in combination with the scientific flag
            cout.setf(ios ::uppercase); // Prints the scientific notation in uppercase
        }
        break;
        case 3:
        {
            cout << "\nios ::showpos has been set!!!\n";

            cout.setf(ios ::showpos); // Prints the plus '+' sign in front of positive numbers
        }
        break;
        case 4:
        {
            cout << "\nios ::scientific has been set!!!\n";

            // ! Not to be used in combination with the fixed flag
            cout.setf(ios ::scientific); // Prints the decimal numbers in scientific notation
        }
        break;
        case 5:
        {
            cout << "\nios ::showpoint has been set!!!\n";

            // * May be used with integer values
            cout.setf(ios ::showpoint); // Prints the decimal point and trailing zeroes
        }
        break;
        case 6:
            break;

        default:
            cout << "\nUnrecognized flag!!!\nTry again...\n";
        }
    }

    cout << "\nAfter formatting: " << value << endl
         << "Set precision is 10: " << setprecision(10) << value << endl
         << "Set precision is 9: " << setprecision(9) << value << endl
         << "Set precision is 8: " << setprecision(8) << value << endl
         << endl;

    /**
     * @brief The unset() method of 'cout' class will remove any formatting set by the previous
     * ios flags with the help of the setf() method.
     * * The resetiosflags() library function defined in the iomanip.h may also reset the formatting.
     */
    cout.unsetf(ios ::fixed);
    cout.unsetf(ios ::uppercase);
    cout.unsetf(ios ::showpos);
    cout.unsetf(ios ::scientific);
    cout.unsetf(ios ::showpoint);
}

int main()
{
    int choice = 0;

    do
    {
        cout << "FORMATTING MENU:\n\t(1) Using setw();\n\t(2) Using setprecision();\n\t(3) Exit."
             << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            print_setw();
            break;
        case 2:
            print_setprecision();
            break;
        case 3:
            cout << "Exiting...\n";
            break;

        default:
            cout << "\nInvalid choice!!!\nTry again...\n\n";
        }
    } while (choice != 3);
}