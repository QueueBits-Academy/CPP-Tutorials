/**
 * @file references_enums.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Demonstrate the use of references and enumeration (a user defined data type) in C++.
 * @version 0.1
 * @date 19-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

/**
 * @brief A enumeration type 'status' is defined with the required variables. The corresponding
 * values stored in the variables are:
 * (1) START = 1;
 * (2) PAUSE = 2;
 * (3) RESET = 3;
 */
enum status
{
    START = 1, // Default value starts with 0
    PAUSE,
    RESET
};

int main()
{
    status stat = START; // 'stat' is the variable of the enumeration 'status' type
    status &ref = stat;  // Reference variable of the same type as that of the enumeration 'status' type

    /**
     * @brief The for loop outside will iterate until the test expression becomes greater than
     * the value stored in 'RESET'.
     */
    for (int i = 1; i <= RESET; ++i)
    {
        /**
         * @brief The switch statement below will display the enum constant value alongside the reference
         * variable value. Also each case matching will update the 'stat' variable to the next enum constant value.
         */
        switch (stat)
        {
        case START:
        {
            cout << "enum = " << stat << endl
                 << "alias = " << ref << endl
                 << endl;

            stat = PAUSE;
        }
        break;
        case PAUSE:
        {
            cout << "enum = " << stat << endl
                 << "alias = " << ref << endl
                 << endl;

            stat = RESET;
        }
        break;
        case RESET:
        {
            cout << "enum = " << stat << endl
                 << "alias = " << ref << endl
                 << endl;

            stat = START;
        }
        break;
        }
    }
}