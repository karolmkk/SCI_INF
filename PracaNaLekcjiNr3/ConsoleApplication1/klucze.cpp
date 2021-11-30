#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <utility>
#include "klucze.h"
using namespace std;

int klucze::_p(int p) {
	const int liczby_pierwsze[9] = { 2, 3, 5, 7, 11, 13, 17, 19, 23 };
	srand(time(NULL));
	p = liczby_pierwsze[rand() % 9];
	return p;

}
int klucze::q_(int q) {
	const int liczby_pierwsze[9] = { 2, 3, 5, 7, 11, 13, 17, 19, 23 };;
	q = liczby_pierwsze[rand() % 9];
	return q;

}
int klucze::robienie_n(int n) {
	n = _p(p) * q_(q);
	return n;
}
int klucze::robienie_eulera(int eul) {

	eul = (_p(p) - 1) * (q_(q) - 1);
	return eul;
}

int klucze::nwd(int y, int x)
{
	int z;
	while (x != 0)
	{
		z = x;
		x = y % x;
		y = z;
	};
	return y;
}
int klucze::odwrocone_modulo()
{
	int  u, w, x, z, q;
	u = 1; w = robienie_n(n);
	x = 0; z = robienie_eulera(eul);
	while (w)
	{
		if (w < z)
		{
			q = u; u = x; x = q;
			q = w; w = z; z = q;
		}
		q = w / z;
		u -= q * x;
		w -= q * z;
	}
	if (z == 1)
	{
		if (x < 0) x += robienie_eulera(eul);
		return x;
	}
}
int klucze::generowanie_d(int d)
{
	d = odwrocone_modulo();
	return d;
}
pair<int, int> klucze::klucz_publiczny() {

	pair <int, int> product1(robienie_n(n), e);
	product1.first = robienie_n(n);
	product1.second = e;
	product1 = make_pair(klucze::robienie_n(n), e);
	return product1;
}
pair <int, int> klucze::klucz_prywatny() {

	pair <int, int> product2(robienie_n(n), generowanie_d(d));
	product2.first = robienie_n(n);
	product2.second = generowanie_d(d);
	product2 = make_pair(robienie_n(n), generowanie_d(d));
	return product2;
}

