#include "sortowanie.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <algorithm>
using namespace std;
vector <int> sortowanie::losowanie() {
	int x = 0;
	int i;
	int odp;
	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		x = rand() % 1000;
		liczby.push_back(x);
	}
	cout << "[LICZBY PRZED SORTOWANIEM]:\n";
	return liczby;
}
void sortowanie::pokazywanie() {

	liczby = losowanie();
	for (int i = 0; i < liczby.size(); i++)
	{
		cout << "liczba nr " << i + 1 << ": " << liczby[i] << endl;
	}
}

vector <int> sortowanie::bobelkowanie(vector <int> liczby) {

	for (int d = 0; d < liczby.size(); d++) {

		for (int j = 1; j < liczby.size() - d; j++) {
			if (liczby[j - 1] > liczby[j]) {
				swap(liczby[j - 1], liczby[j]);
			}
		}
	}
	cout << "[LICZBY ZBABELKOWANE]:\n";
	for (int i = 0; i < liczby.size(); i++) {
		cout << "liczba nr " << i + 1 << ": " << liczby[i] << endl;
	}
	return liczby;
}
vector <int> sortowanie::wstawienie(vector <int> liczby) {
		int pom, j;
		for (int i = 1; i < liczby.size(); i++)
		{
			pom = liczby[i];
			j = i - 1;
			while (j >= 0 && liczby[j] > pom)
			{
				liczby[j + 1] = liczby[j];
				--j;
			}
			liczby[j + 1] = pom;
		}
		cout << "[LICZBY WSTAWIONE]:\n";
		for (int i = 0; i < liczby.size(); i++) {
			cout << "liczba nr " << i + 1 << ": " << liczby[i] << endl;
		}
		return liczby;
}



