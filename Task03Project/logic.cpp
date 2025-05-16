int sum_every_element_of_array(int* array, int size) {
	if (array == nullptr || size < 0)
	{
		return 0;
	}

	//base
	if (size == 1)
	{
		return *(array);
	}

	//rec case
	return *(array + size - 1) + sum_every_element_of_array(array, size - 1);
}