/**
 *
 * @file nested_structures.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief Implementation of nested structures and the syntax of accessing their data members.
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
 * @brief The outer structure nests the inner structure with the other data members. Every
 * object of the outer structure will have their separate nested structure object as a data member.
 */
struct outer // * Outer structure
{
    struct inner // * Inner structure
    {
        int inner_var = 0;
        char inner_ch = '\n';
        float inner_dec = 0.0;
    } inner_obj;

    int outer_var = 0;
    char outer_ch = '\n';
    float outer_dec = 0.0;
};

/**
 * @brief The function below accesses the data members of the outer structure object as well as
 * data members of its respective inner structure object.
 *
 ****************************************************************************
 * @param o = structure type reference variable
 */
void display(outer &o)
{
    cout << "\nOUTER STRUCTURE DATA MEMBERS LIST\n"
         << "\tOuter integer = " << o.outer_var << endl
         << "\tOuter character = " << o.outer_ch << endl
         << "\tOuter float = " << o.outer_dec << endl
         << endl;

    cout << "INNER STRUCTURE DATA MEMBERS LIST\n"
         << "\tInner integer = " << o.inner_obj.inner_var << endl
         << "\tInner character = " << o.inner_obj.inner_ch << endl
         << "\tInner float = " << o.inner_obj.inner_dec << endl
         << endl;
}

int main()
{
    outer outer_obj;

    /**
     * @brief The members of structures are accessed with the dot (.) operator.
     * The syntax for accessing the members of the nested structure is as follows:
     * * <outer_structure_object>.<inner_structure_object>.<data_member>
     * where 'inner_structure_object' is the name of the object which is also a data member of the
     * outer structure object.
     */
    cout << "OUTER STRUCTURE DATA MEMBERS\n"
         << "\tOuter integer = ";
    cin >> outer_obj.outer_var;

    cout << "\tOuter character = ";
    cin >> outer_obj.outer_ch;

    cout << "\tOuter float = ";
    cin >> outer_obj.outer_dec;

    cout << "\nINNER STRUCTURE DATA MEMBERS\n"
         << "\tInner integer = ";
    cin >> outer_obj.inner_obj.inner_var;

    cout << "\tInner character = ";
    cin >> outer_obj.inner_obj.inner_ch;

    cout << "\tInner float = ";
    cin >> outer_obj.inner_obj.inner_dec;

    display(outer_obj);
}