
long long popower(int number, int power) {
	if (power < 0)
	{
		return 0;
	}

	//base case
	
	if (power == 0)
	{
		return 1;
	}

	//recurssion case
	return number * popower(number, power - 1);
}