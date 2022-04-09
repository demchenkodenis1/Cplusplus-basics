#include <iostream>
#include <cstdio>
#include <vector>
#include <random>
using namespace std;

void InitArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100;
		cout << array[i] << " ";
	}
	cout << endl;
}

void swap(int* ptr1, int* ptr2)
{
	int buffer = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = buffer;
}

void do_reverse(int* first, int* last)
{
	while (first < last)
		swap(first++, --last);
}
void Print(int arr[], int length) {
	for (size_t j = 0; j < length; j++)
	{
		std::cout << arr[j] << ' ';
	}
	std::cout << '\n';
}

int main()
{
	const int aSize = 10;
	int iArr[aSize];
	InitArray(iArr, aSize);
	do_reverse(iArr, iArr + aSize);
	Print(iArr, aSize);

	return 0;
}