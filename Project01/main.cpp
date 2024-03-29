#include <iostream>
#include "windows.h"
using namespace std;

void random_init(int* vector, int size, int min, int max);
string output(int* vector, int size);
void insertion_sort_asc(int* vector, int length);

void unite_vector(int* vector1, int* vector2, int size1, int size2, int* vector3);

int main() {
	srand(time(NULL));

	int size1 = 5;
	int size2 = 7;

	int* vector1 = new int[size1];
	random_init(vector1, size1, 0, 100);

	Sleep(500);

	int* vector2 = new int[size2];
	random_init(vector2, size2, 0, 100);
	
	insertion_sort_asc(vector1, size1);
	insertion_sort_asc(vector2, size2);

	cout << "Vector 1:\n" << output(vector1, size1) << endl;
	cout << "Vector 2:\n" << output(vector2, size2) << endl;

	int* vector3 = new int[size1 + size2];

	unite_vector(vector1, vector2, size1, size2, vector3);

	cout << "United vector:\n" << output(vector3, size1 + size2);

	return 0;
}