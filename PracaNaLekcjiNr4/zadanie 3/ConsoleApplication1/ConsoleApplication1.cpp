#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <algorithm>
#include "sortowanie.h"
using namespace std;

int main()
{
	int odp;
	sortowanie obj;
	obj.pokazywanie();
	cout << "[WYBIERZ SPOSOB SORTOWANIA]\n1-babelkowe\n2-wstawieniowe\n";
	cin >> odp;
	if (odp == 1) {
		 obj.bobelkowanie(obj.liczby);

	}
	else if (odp == 2) {

		obj.wstawienie(obj.liczby);

	}
}


