#include "klucze.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <utility>

using namespace std;

klucze::klucze()
{





}
klucze::~klucze()
{




}
pair <int, int>  klucze::generowanie_klucza(){

	printf("[GENEROWANIE KLUCZA]:\n\n");
	printf("[P]:");
	cout << _p(p) << endl;
	printf("[Q]:");
	cout << q_(q) << endl;
	printf("[N]:");
	cout << robienie_n(n) << endl;
	printf("[EUL]:");
	cout << robienie_eulera(eul) << endl;
	printf("[D]:");
	cout << generowanie_d(d) << endl;
	printf("[KLUCZ PUBLICZNY]:\n");
	printf("[N]:");
	pair <int, int> k_publiczny = klucz_publiczny();
	cout << k_publiczny.first;
	printf("\n[E]:");
	cout << k_publiczny.second;
	printf("\n[KLUCZ PUBLICZNY]:\n");
	printf("\n[N]:");
	pair <int, int> k_prywatny = klucz_prywatny();
	cout << k_prywatny.first;
	printf("\n[D]:");
	cout << k_prywatny.second;






}
int p;
int q;
int phi;
int n;
int e;
int d;
int eul;
int _p(int p) {
	const int liczby_pierwsze[9] = { 2, 3, 5, 7, 11, 13, 17, 19, 23 };
	srand(time(NULL));
	p = liczby_pierwsze[rand() % 9];
	return p;

}
int q_(int q) {
	const int liczby_pierwsze[9] = { 2, 3, 5, 7, 11, 13, 17, 19, 23 };;
	q = liczby_pierwsze[rand() % 9];
	return q;

}
int robienie_n(int n) {
	n = _p(p) * q_(q);
	return n;
}
int robienie_eulera(int eul) {

	eul = (_p(p) - 1) * (q_(q) - 1);
	return eul;
}

int nwd(int y, int x)
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
int odwrocone_modulo()
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
int generowanie_d(int d)
{
	d = odwrocone_modulo();
	return d;
}
pair <int, int> klucz_publiczny() {

	pair <int, int> product1(robienie_n(n), e = 3);
	product1.first = robienie_n(n);
	product1.second = e;
	product1 = make_pair(robienie_n(n), e);
	return product1;
}
pair <int, int> klucz_prywatny() {

	pair <int, int> product2(robienie_n(n), generowanie_d(d));
	product2.first = robienie_n(n);
	product2.second = generowanie_d(d);
	product2 = make_pair(robienie_n(n), generowanie_d(d));
	return product2;
}