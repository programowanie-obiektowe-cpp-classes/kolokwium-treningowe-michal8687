#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

class Penne : public Makaron {
	double ileMaki(unsigned P) const
	{
		return P;
	}
};

Makaron* Makaron::gotujMakaron(const std::string& tekst)
{
	if (tekst.front() == tekst.back())
		return new Tagliatelle{ 3.14, .42, .1 };
	else
		return new Penne;
}