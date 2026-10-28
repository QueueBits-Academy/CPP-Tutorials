/**
 * @file type_limits.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Illustrating the use of limits.h and float.h header files to print the limits of
 * various datatypes in C++.
 *
 * @version 0.1
 * @date 21-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <string.h> // To use strcmp() function which compares two strings
#include <limits>   // to use the macro definitions for int, char, long and short limits
#include <float.h>  // to use the macro definitions for floating limits

using namespace std;

int main()
{
    char datatype[10], choice = 'n';

    /**
     * @brief The do-while loop iterates over until the user's choice is 'Y' or 'y' or something else
     * other than 'N' or 'n'.
     */
    do
    {
        cout << "Enter the datatype to know the maximum and minimum ranges: ";
        cin.getline(datatype, sizeof(datatype));

        /**
         * @brief The if-else ladder will check whether the datatype input string matches any of the
         * following:
         * (1) "int" for integer datatypes;
         * (2) "float" for floating point datatypes;
         * (3) "double" for double floating point datatypes;
         * (4) "char" for character datatypes;
         * (5) "short" for short integer datatypes;
         * (6) "long" for long integer datatypes; and
         * (7) "unsigned" for unsigned integer datatypes (short and long).
         */
        if (!strcmp(datatype, "int"))
            cout << "Maximum range of integer: " << INT_MAX << endl  // INT_MAX = maximum limit of int
                 << "Minimum range of integer: " << INT_MIN << endl; // INT_MIN = minimum limit of int
        else if (!strcmp(datatype, "char"))
            cout << "Maximum range of character: " << CHAR_MAX << endl  // CHAR_MAX = maximum limit of char
                 << "Minimum range of character: " << CHAR_MIN << endl; // CHAR_MIN = minimum limit of char
        else if (!strcmp(datatype, "long"))
            cout << "Maximum range of long: " << LONG_MAX << endl  // LONG_MAX = maximum limit of long int
                 << "Minimum range of long: " << LONG_MIN << endl; // LONG_MIN = minimum limit of long int
        else if (!strcmp(datatype, "short"))
            cout << "Maximum range of double: " << SHRT_MAX << endl  // SHRT_MAX = maximum limit of short int
                 << "Minimum range of double: " << SHRT_MIN << endl; // SHRT_MIN = minimum limit of short int
        else if (!strcmp(datatype, "float"))
            cout << "Maximum range of float: " << FLT_MAX << endl  // FLT_MAX = maximum limit of float
                 << "Minimum range of float: " << FLT_MIN << endl; // FLT_MIN = minimum limit of float
        else if (!strcmp(datatype, "double"))
            cout << "Maximum range of double: " << DBL_MAX << endl  // DBL_MAX = maximum limit of double
                 << "Minimum range of double: " << DBL_MIN << endl; // DBL_MIN = minimum limit of double
        else if (!strcmp(datatype, "unsigned"))
            cout << "Maximum range of unsigned short: " << USHRT_MAX << endl // USHRT_MAX = maximum limit of unsigned short int
                 << "Maximum range of unsigned long: " << ULONG_MAX << endl; // ULONG_MAX = maximum limit of unsigned long int

        cout << "\nDo you want to repeat again? ([Y/y]es | [N/n]o | default = n) ";
        cin.get(choice);
        cin.ignore(); // To ignore the newline character in the previous input

        if (choice == 'N' || choice == 'n')
        {
            cout << "Exiting..." << endl;

            break;
        }

        cout << endl;
    } while (choice == 'Y' || choice == 'y');
}