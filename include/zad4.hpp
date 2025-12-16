#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector < Tagliatelle> wektor)
{
	double M = 0.;
	for (int i = 0; i < wektor.size(); i++)
	{
		M += wektor[wektor.size() - i - 1].ileMaki(i + 1);
	}
	if (M > 100)
	{
		throw(0);
	}
	if (M > 50)
	{
		throw(50.);
	}
	return M;
}