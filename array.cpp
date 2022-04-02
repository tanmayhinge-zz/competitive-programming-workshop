// C++ syntax is explained in next chapter
// if you are unable to understand the code here, feel free to skip for now
// and just
// keep in mind that STL is just pretty cool! and you'll soon understand
// it too!

// The array header file is part of STL which provides 
// a lot of array operations such as array.size() 
// which calculates the number of elements present in 
// the array, such function is not available directly in C.


#include<iostream>
#include<array>

using namespace std;
int main()
{
	// Initializing the array elements
	array<int,6> ar = {1, 2, 3, 4, 5, 6};

	// Printing first element of array
	cout << "First element of array is : ";
	cout << ar.front() << endl;

	// Printing last element of array
	cout << "Last element of array is : ";
	cout << ar.back() << endl;

	return 0;

}