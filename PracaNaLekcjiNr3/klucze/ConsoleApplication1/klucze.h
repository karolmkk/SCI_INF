#pragma once
#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <utility>
using namespace std;
class klucze
{
public:
	int p;
	int q;
	int phi;
	int n = 0;
	int d;
	int eul;
	int _p(int p);
	int q_(int q);
	int robienie_n(int n);
	int robienie_eulera(int eul);
	int nwd(int x, int y);
	int odwrocone_modulo();
	int generowanie_d(int d);
};

