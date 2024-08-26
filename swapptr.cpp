#include <iostream>
using namespace std;

// Example of using reference parameters in C++ 
void swap(int& first, int& second) {
	int temp = first;
	first = second;
	second = temp;
}

// Examples of using pointers as parameters
void swap2(int* first, int* second) {
	int temp = *first;
	*first = *second;
	*second = temp;
}

// Example of pass by value - does not work!
void badswap(int first, int second)
{
	int temp = first;
	first = second;
	second = temp;
}

int main()
{
	int i = 11, j = 22;
	cout << "Before swap" << "\n";
	cout << "i = " << i << "\n" << "j = " << j << "\n\n";
	cout << "&i = " << &i << "\n" << "&j = " << &j << "\n\n";

	swap(i, j);
	cout << "After swap using c++ reference parameters" << "\n";
	cout << "i = " << i << "\n" << "j = " << j << "\n\n";
	cout << "&i = " << &i << "\n" << "&j = " << &j << "\n\n";

	swap2(&i, &j);
	cout << "After swap2 using pointers/addresses" << "\n";
	cout << "i = " << i << "\n" << "j = " << j << "\n\n";
	cout << "&i = " << &i << "\n" << "&j = " << &j << "\n\n";

	badswap(i, j);
	cout << "After badswap using pass by value" << "\n";
	cout << "i = " << i << "\n" << "j = " << j << "\n\n";
	cout << "&i = " << &i << "\n" << "&j = " << &j << "\n\n";

	return -1;
}