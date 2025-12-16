#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle
template<typename it>
void sortujTagliatelle(it first, it aft_end)
{
	std::sort(first, aft_end, [](Tagliatelle& a, Tagliatelle& b) { return a.ileMaki(1) > b.ileMaki(1); });
}