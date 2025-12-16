#include "catch.hpp"
class Makaron {
public:
	virtual ~Makaron() = default;
	virtual double ileMaki(unsigned P) const
	{
		return 0;
	}
	static Makaron* gotujMakaron(const std::string& tekst);
};

class Tagliatelle : public Makaron {
public:
	Tagliatelle() : L{ 0.5 }, W{ 0.5 }, R{ 0.5 } {}
	Tagliatelle(double a, double b, double c) : L{ a }, W{ b }, R{ c } {}
	double ileMaki(unsigned P) const 
	{ 
		return P * L * W * (1. - R) * C; 
	}
private:
	double L, W, R;
	static const double C;
};

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle
