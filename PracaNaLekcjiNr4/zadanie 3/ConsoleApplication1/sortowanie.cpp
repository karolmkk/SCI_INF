#include "sortowanie.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;




void sortowanie::tablica_liczb() {
	int x = 0;
	int i;
	vector <int> liczby;
	for (i = 0; i < 100; i++)
	{
		x = rand() % 1000;
		liczby.push_back(x);

	}
	cout << "[LICZBY PRZED SORTOWANIEM]:\n";
	for (int i = 0; i < liczby.size(); i++)
	{
		cout << "liczba nr " << i + 1 << ": " << liczby[i] << endl;
	}
	for (int d = 0; d < liczby.size(); d++) {

		for (int j = 1; j < liczby.size() - d; j++) {
			if (liczby[j - 1] > liczby[j]) {
				swap(liczby[j - 1], liczby[j]);
			}
		}
	}
	cout << "[LICZBY POSORTOWANE]:\n";
	for (int i = 0; i < liczby.size(); i++) {
		cout << "liczba nr " << i + 1 << ": " << liczby[i] << endl;
	}
}
