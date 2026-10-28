/**
 * @file scope_resolution_operator.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief C++ implementation of the functioning of scope resolution operator to gain access to file scope
 * items (such as global variables) in a program.
 *
 * @version 0.1
 * @date 20-07-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

using namespace std;

/**
 * @brief File scope items (i.e. global variables) are normally hidden when you use the same identifier
 * for an item within a block (class block, function block or any inner block). The scope resolution
 * operator '::' is used before the identifier of file scope items to access it whenever they are hidden.
 * Otherwise, there's no need to use the scope resolution operator.
 */
const short a = -10; // Global variable with file scope

class A
{
private:
    // ! Warning: Private member
    static const short a = 100;

public:
    static void display(void)
    {
        /**
         * @brief Inside any member function of a class, local member is referred to as:
         * * <class_name>::<[public|private] member>.
         * If the member identifier is same as that of another file scope item, it makes the file scope
         * item hidden until it is referred by using the scope resolution operator '::'.
         */
        cout << "\nInside static member function of the class:\n\ta = " << a << "\n\t::a = "
             << ::a << endl; // a = 100, ::a = -10
    }
};

int main()
{
    const short a = 10; // Local variable inside main()

    cout << "Inside main():\n\ta = " << a << "\n\t::a = " << ::a << endl; // a = 10, ::a = -10

    {
        const short int a = 0;

        cout << "\nInside inner block of main():\n\ta = " << a << "\n\t::a = "
             << ::a << endl; // a = 0, ::a = -10
    }

    A::display(); // a = 100, ::a = -10

    cout << "\nBack in main():\n\ta = " << a << "\n\t::a = " << ::a << endl; // a = 10, ::a = -10
}