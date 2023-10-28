#include <iostream>
#include <iomanip>
#include <string>

	using namespace std;

	int main()
	{
		string message;

		int m = 1000;
			
			char tab[m] = {"\n\nHi All Programmers : Windows Linux MacOSX Android\n\n"} ;


		cout << "\nWelcome to C++ Programming>>>***<<< :::\t and Visual Basic Net Programming\n\n" << tab << endl;	

		char a = 'A';
		char b = 'B';
		char c = 'C';

		char tab_a[a][b][c];
		cout << "***Show default matrix tab_a***" << tab_a << endl;

				for ( int i; i < 8000000; i++ )
				{
					a = b + c;
					b = a + c;
					c = a + b;
				

					cout << "Show coded matrix tab_a:::" << tab_a << "\na:::" << a << "\tb:::" << b << "\tc::" << c << endl;
				}	

	}
