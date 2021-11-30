#pragma once
#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <utility>

class klucze
{
public:
	int p;
	int q;
	int phi;
	int n;
	int e;
	int d;
	int eul;
	int _p(int p);
	int q_(int q);
	int robienie_n(int n);
	int robienie_eulera(int eul);
	pair<int, int> klucz_publiczny();
private:
	int nwd(int x, int y);
	int odwrocone_modulo();
	pair<int, int> klucz_prywatny();
	int generowanie_d(int d);
};

