void unite_vector(int* vector1, int* vector2, int size1, int size2, int* vector3) {
	int i = 0, j = 0; //vector1 => i, vector2 => j
	while (i + j <= size1 + size2 - 1) {

		if (i == size1) {
			for (; j <= size2; j++)
			{
				*(vector3 + i + j) = *(vector2 + j);
			}
			break;
		}
		else if (j == size2) {
			for (; i <= size1; i++)
			{
				*(vector3 + j + i) = *(vector1 + i);
			}
			break;
		}

		if (*(vector1 + i) > *(vector2 + j)) {
			*(vector3 + i + j) = *(vector2 + j);
			j++;
		}
		else {
			*(vector3 + i + j) = *(vector1 + i);
			i++;
		}
	}
}

