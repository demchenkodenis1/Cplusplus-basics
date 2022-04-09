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


int count_el(int array[], int size) {
	int counter = 0;
	for (int i = 0; i < size; i++) {
		counter++;
		//counter += counter;
	}
	cout << counter << endl;
	return counter;
}
int main()
{
	const int aSize = 10;
	int iArr[aSize];
	InitArray(iArr, aSize);
	count_el(iArr, aSize);

	return 0;
}