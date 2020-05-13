#pragma once

class LessThen
{
public:
	LessThen(int big, int small) 
		:bigger(big), smaller(small)
	{}

	int bigger;
	int smaller;

	bool is()
	{
		return bigger > smaller; 
	}
};
