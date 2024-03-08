#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void random_init(int* vector, int size, int min, int max) {
	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		*(vector + i) = rand() % (max - min + 1) + min;
	}
}

string output(int* vector, int size) {
	string msg = "";

	for (int i = 0; i < size; i++)
	{
		msg += to_string(*(vector + i)) + " ";
	}

	return msg;
}

void insertion_sort_asc(int* vector, int length) {
	for (int i = 1; i < length; i++)
	{
		for (int j = i; j > 0 && *(vector + j -1 ) > *(vector + j); j--)
		{
			swap(*(vector + j), *(vector + j - 1));
		}
	}
}