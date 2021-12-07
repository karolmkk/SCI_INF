#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class sortowanie
{
public:
	vector <int> liczby;
	vector <int> losowanie();
	vector <int> bobelkowanie(vector <int> liczby);
	vector <int> wstawienie(vector <int> liczby);
	void pokazywanie();

};

