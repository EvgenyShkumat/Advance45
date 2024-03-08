#include <iostream>
#include "windows.h"
using namespace std;

void random_init(int* vector, int size, int min, int max);
string output(int* vector, int size);

int main() {
	int size1 = 5;
	int size2 = 7;

	int* vector1 = new int[size1];
	random_init(vector1, size1, 0, 100);

	Sleep(500);
	
	int* vector2 = new int[size2];
	random_init(vector2, size2, 0, 100);
	
	cout << "Vector 1:\n" << output(vector1, size1) << endl;
	cout << "Vector 2:\n" << output(vector2, size2) << endl;

	return 0;
}