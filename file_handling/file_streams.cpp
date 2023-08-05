/**
 * @file file_streams.cpp
 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
 * @brief C++ implementation of file stream classes and their instances/objects to open a file in the default
 * file modes in order to insert contents, and to display the stored contents in the console.
 *
 * @version 0.1
 * @date 04-08-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <fstream> // * Component header file of standard library to handle file I/O facilities

#define LEN 25

using namespace std;

int main()
{
	/**
	 * @brief A stream is a sequence of bytes or flow of data at the lowest level where the notion of data
	 * type is absent. Each stream is associated with a particular class, which contains member functions for
	 * dealing with that particular kind of data flow. The two streams in C++ are:
	 * (1) Input stream: reads data from files and supply them to the program; and
	 * (2) Output stream: receives data from the program and writes it to the files.
	 *
	 * The three classes associated with the streams are:
	 * (1) ifstream: ties a file to the program for input;
	 * (2) ofstream: ties a file to the program for output; and
	 * (3) fstream: ties a file to the program for both input and output.
	 *
	 * The stream class hierarchy is as follows:
	 * 			istream			ostream
	 * 			/	\			 /   \
	 * 		   / 	 \			/     \
	 * 		  /   	   iostream		   \
	 * 		ifstream	  ||	  ofstream
	 * 		 \\			  ||		   //
	 * 		  \\		  \/		  //
	 * 		   \\       fstream		 //
	 * 			\\		  ||		//
	 * 			 \\		  ||	   //
	 * 			  \/	  \/	  \/
	 * 				 fstreambase
	 *
	 * Stream/object of class ifstream is initialized to provide class facilities (member functions)
	 * to read from file. Stream/object of class ofstream is initialized to provide class facilities
	 * to write to file.
	 *
	 * @version 0.1
	 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
	 * @date 04-08-2023
	 * @copyright Copyright (c) 2023
	 */
	ifstream fil_in; // * ifstream class stream/object

	ofstream fil_out; // * ofstream class stream/object

	/**
	 * @brief The data files can be stored in two ways:
	 * (1) text files: store information in ASCII characters. Each line of text is terminated (delimited)
	 * with a special character known as EOL (End-Of-Line) character; and
	 * (2) binary files: store information in binary form. They are faster and easier for a program to read
	 * and write than text files.
	 *
	 * Associating a file in any form with a stream can be achieved in two ways:
	 * (1) Using the constructor of the stream classes. The syntax of the constructors are:
	 * * <stream_class> <stream_identifier>(<data_file_name>, [<file_mode_constant> | <file_mode_constant> | ...]);
	 * (2) Using the member function open(). The syntax of the function is:
	 * * <stream_identifier>.open(<data_file_name>, [<file_mode_constant> | <file_mode_constant> | ...]);
	 *
	 * The different modes of file operations (file mode constants) are:
	 * (1) ios::in | input mode i.e. opens file for reading.
	 * ----------------------------------------------------------------
	 * (2) ios::out | output mode i.e. opens file for writing.
	 * ----------------------------------------------------------------
	 * (3) ios::ate | seeks to end of file upon opening of the file.
	 * ----------------------------------------------------------------
	 * (4) ios::app | all output to be appended to the end of file.
	 * ----------------------------------------------------------------
	 * (5) ios::trunc | Contents of a pre-existing file will be destroyed and truncates the file to 0 length.
	 * ----------------------------------------------------------------
	 * (6) ios::nocreate | open() function will fail if the file does not already exist.
	 * ----------------------------------------------------------------
	 * (7) ios::noreplace | open() function will fail if the file already exists.
	 * ----------------------------------------------------------------
	 * (8) ios::binary | opens the file in binary mode.
	 *
	 * * By default, files are opened in text mode.
	 * * The ifstream open() function and constructor use ios::in as the default file mode.
	 * * The ofstream open() function and constructor use ios::out as the default file mode.
	 * * The fstream class does not provides mode by default and must be specified explicitly.
	 *
	 * @version 0.1
	 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
	 * @date 04-08-2023
	 * @copyright Copyright (c) 2023
	 */
	fil_out.open("Marks.dat");

	int flag = 0;
	int roll;
	float marks;
	char ans, name[LEN], ch;

	do
	{
		cout << "Enter roll number: ";
		cin >> roll;

		cin.ignore();

		cout << "Enter name: ";
		gets_s(name, LEN);

		cout << "Enter marks: ";
		cin >> marks;

		cin.ignore();

		fil_out << roll << endl
				<< name << endl
				<< marks << endl
				<< endl;

		++flag;

		cout << "\nWant to enter more records ([y/Y]es or [n/N]o, default is n): ";
		ans = getchar();

		cout << endl;
	} while (ans == 'Y' || ans == 'y');

	/**
	 * @brief The connections with files are closed automatically when the input and output stream objects
	 * expire. To close the connections explicitly, the close() member function must be called in the following
	 * manner:
	 * * <stream_identifier>.close();
	 *
	 * Closing a file flushes the buffer which means the data remaining in the buffer is moved out in the
	 * direction it is ought to be. Closing an input file's connection will move the data from the input buffer
	 * to the program, and closing an output file's connection will move the data from the output buffer to the
	 * disk file.
	 *
	 * * Closing a file does not eliminate the stream.
	 *
	 * @version 0.1
	 * @author Raan_at_Git (Windows) (74211378+Raan-Saurav-Bhuyan@users.noreply.github.com)
	 * @date 05-08-2023
	 * @copyright Copyright (c) 2023
	 */
	fil_out.close();

	fil_in.open("Marks.dat");

	cout << "\nThe contents of the file is\n";

	while (flag)
	{
		fil_in >> roll;

		fil_in.ignore();

		fil_in.getline(name, LEN);

		fil_in >> marks;

		cout << "\nRoll number: " << roll << "\nName: " << name << "\nMarks: " << marks << endl;

		--flag;
	}

	fil_in.close();
}
