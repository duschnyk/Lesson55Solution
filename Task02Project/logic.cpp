
bool equals(int first, int second) {

	if (second < 0)
	{
		return false;
	}

	if (first < 0)
	{
		first = -first;
	}

	//base
	if (first == second)
	{
		return true;
	}
	else
	{
		if (first == 0 && second != 0 || second == 0 && first != 0)
		{
			return false;
		}
		else
		{
			//rec case
			int digit = first % 10;
			return equals(first / 10, second - digit);
		}
	}
}