#include "util.h"

int main()
{
	int* array;
	int size;

	cout << "Input size of array: ";
	cin >> size;

	array = new int[size];

	init(array, size, -20, 50);

	cout << "Array: " << convert(array, size) << endl;

	cout << "Sum of array values between min and max is " << sum_between_first_min_max(array, size);

	delete[] array;

	return 0;
}